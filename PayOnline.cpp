#include<iostream>
using namespace std;

class Payment
{    
    public:
    double amount;
    double transactionId;
    virtual bool validate(double value)=0;//using bool for output;
    virtual void processPayment(double amount)=0;
    virtual ~Payment() {}
};

class CreditCardPayment : public Payment
{
    
    private:
     double card_number;
    
    public:
     bool validate (double card_number)
     {
       if(this->card_number==card_number)
       {
        return true;
       }
       return false;
     }

     void processPayment(double amount)
     {  
        cout<<amount<<" "<<"Amount debited\n";
        transactionId=1234;
        cout<<"transaction_Id:"<<" "<<transactionId;
     }

    //constructor
    CreditCardPayment()
    { this->card_number=110;
     cout<<"Credit card payment";
    }

    //destructor
    ~CreditCardPayment()
    {
     cout<<"Thankyou";
    }
};

class DebitCardPayment : public Payment{
    
    private:
     double card_number;
    
    public:
     bool validate(double card_number)
     {
       if(this->card_number==card_number)
       {
        return true;
       }
       return false;
     }

     void processPayment(double amount)
     {
        cout<<amount<<" "<<"Amount debited\n";
        transactionId=1234;
        cout<<"transaction_Id:"<<" "<<transactionId;
     }
    //constructor
    DebitCardPayment()
    {
      this->card_number=110;
     cout<<"Debit card payment";
    }
    //destructor
    ~DebitCardPayment()
    {
     cout<<"Thankyou";
    }
};

class NetBankingPayment : public Payment{
    
    private:
     double  CVV;
    
    public:
     bool validate(double CVV)
     {
       if(this->CVV==CVV)
       {
        return true;
       }
       return false;
     }

     void processPayment(double amount)
     {
        cout<<amount<<" "<<"Amount debited\n";
        transactionId=1234;
        cout<<"transaction_Id:"<<" "<<transactionId;
     }
    //constructor
    NetBankingPayment()
    { this->CVV=110;
     cout<<"Net Banking payment";
    }
    //destructor
    ~NetBankingPayment()
    {
     cout<<"Thankyou";
    }
};

class UPIPayment : public Payment{
    
    private:
     double UPI_Id;
    
    public:
     bool validate(double UPI_Id)
     {
       if(this->UPI_Id==UPI_Id)
       {
        return true;
       }
       return false;
     }

     void processPayment(double amount)
     {
        cout<<amount<<" "<<"Amount debited\n";
        transactionId=1234;
        cout<<"transaction_Id:"<<" "<<transactionId;
     }
    //constructor
    UPIPayment()
    { this->UPI_Id=110;
     cout<<"UPI payment";
    }
    //destructor
    ~UPIPayment()
    {
     cout<<"Thankyou";
    }
};
 
int main()
{

cout<<"Choose One Below for your Payment\n";
cout<<"1:CreditCardPayment\n";
cout<<"2:DebitCardPayment\n";
cout<<"3:NetBankingPayment\n";
cout<<"4:UPIPayment\n";

int choice;cin>>choice;
switch(choice)
{   
  case 1:{
          CreditCardPayment obj_1;
          cout<<"Enter your Card Number ";
          double test_1;cin>>test_1;
          if(obj_1.validate(test_1))
          { cout<<"Enter amount";double amount_1;
            cin>>amount_1;
            obj_1.processPayment(amount_1);
          }
          else{
            cout<<"Please Enter Correct Information\n";
          }
          break;
        }

  case 2: {DebitCardPayment obj_2;
          cout<<"Enter your Card Number ";
          double test_2;cin>>test_2;
          if(obj_2.validate(test_2))
          { cout<<"Enter amount";double amount_2;
            cin>>amount_2;
            obj_2.processPayment(amount_2);
          }
          else{
            cout<<"Please Enter Correct Information\n";
          }
          break;}

  case 3: {NetBankingPayment obj_3;
          cout<<"Enter your CVV";
          double test_3;cin>>test_3;
          if(obj_3.validate(test_3))
          { cout<<"Enter amount";double amount_3;
            cin>>amount_3;
            obj_3.processPayment(amount_3);
          }
          else{
            cout<<"Please Enter Correct Information\n";
          }
          break;}

  case 4: {UPIPayment obj_4;
          cout<<"Enter your UPI Id ";
          double test_4;cin>>test_4;
          if(obj_4.validate(test_4))
          { cout<<"Enter amount";double amount_4;
            cin>>amount_4;
            obj_4.processPayment(amount_4);
          }
          else{
            cout<<"Please Enter Correct Information\n";
          }
          break;}
           
  default : {cout<<"Sorry NO other Method";
             break;}
}
}