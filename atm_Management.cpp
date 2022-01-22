#include <bits/stdc++.h>
using namespace std;

class atm
{
private:
  long int account_no;
  string name;
  int PIN;
  double balance;
  string mobile_no;

public:

  void setData(long int account_no_a, string name_a, int PIN_a, double balance_a, string mobile_no_a)
  {
    account_no = account_no_a;
    name = name_a;
    PIN = PIN_a;
    mobile_no = mobile_no_a;
  }

  long int getAccountNo()
  {
    return account_no;
  }

  string getName()
  {
    return name;
  }

  int getPIN()
  {
    return PIN;
  }

  double getBalance()
  {
    return balance;
  }

  string getMobileNo()
  {
    return mobile_no;
  }

  //

  void setMobile(string mob_prev, string mob_new)
  {
    if(mob_prev == mobile_no)
    {
      mobile_no = mob_new;
      cout<<endl<<"Successfully updated Mobile No.";
       //Hold Screen until a key is pressed
    }

    else
    {
      cout<<endl<<"Incorrect! Old Mobile No.";
      
    }
  }

  void cashWithDraw(int amount_a)
  {
    if(amount_a > 0 && amount_a < balance)
    {
      balance -= amount_a;
      cout<<endl<<"Please Collect your cash";
      cout<<endl<<"Available Balance: "<<balance;
      
    }

    else
    {
      cout<<endl<<"Insufficient Balance";
     
    }
  }


};

int main()
{
  int choice=0, enterPIN;
  long int enterAccountNo;

  system("cls");

  atm user1;
  user1.setData(1234567, "Mohit", 1111, 95000.90, "6306492930");

  do
  {
    system("cls");

    cout<<endl<<"Welcome to ATM"<<endl;
    cout<<endl<<"Enter your Account No ";
    cin>>enterAccountNo;

    cout<<endl<<"Enter PIN";
    cin>>enterPIN;


    if((enterAccountNo == user1.getAccountNo()) && (enterPIN == user1.getPIN()))
    {
      do
      {
        int amount = 0;
        string oldMobileNo, newMobileNo;

        system("cls");

        cout<<endl<<"Welcome to ATM"<<endl;
        cout<<endl<<"Select Options: ";
        cout<<endl<<"1. Check Balance";
        cout<<endl<<"2. Cash Withdraw";
        cout<<endl<<"3. Show User Details";
        cout<<endl<<"4. Update Mobile No.";
        cout<<endl<<"5. Exit"<<endl;
        cin>>choice;

        switch(choice)
        {
          case 1:
          cout<<endl<<"Your Bank Balance is: "<<user1.getBalance();
          
          break;

          case 2:
          cout<<endl<<"Enter the amount: ";
          cin>>amount;
          user1.cashWithDraw(amount);
          break;

          case 3:
          cout<<endl<<"User Details are: ";
          cout<<endl<<"-> Account No "<<user1.getAccountNo();
          cout<<endl<<"-> Name "<<user1.getName();
          cout<<endl<<"-> Balance "<<user1.getName();
          cout<<endl<<"-> Mobile No. "<<user1.getMobileNo();

          
          break;

          case 4:
          cout<<endl<<"Enter Old Mobile No. ";
          cin>>oldMobileNo;

          cout<<endl<<"Enter New Mobile No. ";
          cin>>newMobileNo;

          user1.setMobile(oldMobileNo, newMobileNo);
          break;

          case 5:
          exit(0);

          default:
          cout<<endl<<"Enter Valid Choice!";
        }
      }while(1);
    }
  }while(1);

  
}



