#include<iostream>
#include<stdio.h>
#include<cctype>
#include<iomanip>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<direct.h>
#include<process.h>
#include<time.h>
#include<istream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include <cctype>
#include <iomanip>
#include<windows.h>
using namespace std;
class customer
{
        char nm[20];
        long phno;
        long pano;
        char bg[10];
    public:
        void acceptc()
        {
                cout<<"\n Enter Customer Name      :  ";
                cin>>nm;
                cout<<"\n Enter Customer Phone No. :  ";
                cin>>phno;
                cout<<"\n Enter PAN no. :";
                cin>>pano;
                cout<<"\n Enter Customer Blood Group. : ";
                cin>>bg;
        }
        void dispc()
        {
                cout<<"\n Details of Customer \n";
                cout<<"\n ----------------------------------------\n";
                cout<<"\n Customer Name            :  "<<nm;
                cout<<"\n Customer Phone No.       :  "<<phno;
                cout<<"\n Customer PAN no. : "<<pano;
                cout<<"\n Customer Blood group. : "<<bg;   
        }
};
class address : public customer
{
    int pincode;
    char state[15];
    char city[20];
    char street[30];
    public:
    void add_input()
    {    
        cout<<"\n --------------------------------\n";
        cout<<"\n Customer address \n";
        cout<<"\n ----------------------------------\n";
        cout<<"Enter street: ";
        cin>>street;
        cout<<"Enter City: ";
        cin>>city;
        cout<<"Enter State: ";
        cin>>state;
        cout<<"Enter pincode: ";
        cin>>pincode;
    }
    void add_display()
    {
    cout<<"Customer Address:"<<endl;
     cout<<"\n\nstreet  : "<<street<<endl;
     cout<<"\nCity : "<<city<<endl;
     cout<<"\nState : "<< state<<endl;
     cout<<"\nPincode: "<< pincode<<endl;
    }
}; 
class account
{
private:
    string name;
    int accno;
    string atype;
public:
    void  getAccountDetails()
    {
        cout<<"\nEnter Customer Name : ";
        cin>>name;
        cout<<"Enter Account Number  : ";
        cin>>accno;
        cout<<"Enter Account Type    : ";
        cin>>atype;
    }
    void displayDetails()
    {
        cout<<"\n\nCustomer Name : "<<name;
        cout<<"\nAccount Number  : "<<accno;
        cout<<"\nAccount Type    : "<<atype;
    }
};
void registr();
void login();
class current_account : public account
{
private:
    float balance;
public:
    void c_display()
    {
        cout<<"\nBalance :"<<balance;
    }
    void c_deposit()
    {
        float deposit;
        cout<<"\nEnter amount to Deposit :  ";
        cin>>deposit;
        balance = balance + deposit;
    }
    void c_withdraw()
    {
        float withdraw;
        cout<<"\n\nBalance : "<<balance;
        cout<<"\nEnter amount to be withdraw :";
        cin>>withdraw;
        if(balance > 1000)
        {
            balance=balance-withdraw;
            cout<<"\nBalance Amount After Withdraw: "<<balance;
        }
        else
        {
            cout<<"\n Insufficient Balance";
        }
    }
};
class saving_account : public account
{
private:
    float sav_balance;
public:
    void s_display()
    {
        cout<<"\nBalance :  "<<sav_balance;
    }
    void s_deposit()
    {
        float deposit,interest;
        cout<<"\nEnter amount to Deposit :  ";
        cin>>deposit;
        sav_balance = sav_balance + deposit;
        interest=(sav_balance*2)/100;
        sav_balance=sav_balance+interest;
    }
    void s_withdraw()
    {
        float withdraw;
        cout<<"\nBalance :- "<<sav_balance;
        cout<<"\nEnter amount to be withdraw : ";
        cin>>withdraw;
        if(sav_balance > 500)
        {
            sav_balance=sav_balance-withdraw;
            cout<<"\nBalance Amount After Withdraw: "<<sav_balance;
        }
        else
        {
            cout<<"\n Insufficient Balance";
        }
    }
};
class loan :public saving_account, public current_account
{
 public:
double amount;
double rates;
int years;
void inputFunction(){
cout<<"\n Enter the amount of the loan: ";
cin>>amount;
if(amount > 100000)
{
cout<<"\n Error: Amount Exceeds $100,000.00";
return;
}
cout<<"\n Enter the annual interest rate (example 3 = 3%):";
cin>>rates;
if(rates > 22)
{
cout<<"\n Error: Rates Exceeds 22%";
return;
}
cout<<"\n Enter the Duration of the Loan in years:";
cin>>years;
if(years > 6)
{
cout<<"\n Error: Years Exceeds 6";
return;
}
}
void outputFunction(){
 double emi = 0;
 double paybackamt = 0;
double interest = (amount*rates*years)/100;
paybackamt = amount + interest;
emi = paybackamt/(years*12);
cout<<"\n\n";
cout<<left<<"\tLoan Amount emi: "<<emi;
cout<<right;
}
};
void date()
{
  time_t T= time(NULL);
  struct  tm tm = *localtime(&T);
  cout<<endl<<endl<<endl;
  printf("\t\t\t\t\t   Date :: %02d/%02d/%04d\n",tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
}
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
void callExit()
{
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t");
    fflush(stdin);
    printf("You are out of the System.");
    printf("\n\n");
    printf("\t\t\t\t");
    printf("   Press Enter to Continue Exit Program...");
    getchar();
    exit(0);
}
void mainpage()
{
  int process=0;
  system("cls");
  date();
  cout<<endl;
  printf("\t\t\t\t    ---------------------------\n");
  printf("\t\t\t\t     |Welcome to Baby Bank |\n");
  printf("\t\t\t\t    ---------------------------\n");
  cout<<endl<<endl<<endl;
  printf("\t\t\t\t");
  printf("Prepared By    :");
  printf("   Gouri Shankar Kumar");
  printf("\n\n");
  printf("\t\t\t\t");
  printf(" Project    :");
  printf("   Bank Management System");
  printf("\n\n");
  printf("\t\t\t\t");
  printf("\n\n");
  printf("\t\t\t\t    Press Enter to continue......");
  printf("\n\n");
  getchar();
  printf("\t\t\t\tLoading");
  for(process=0;process<25;process++)
  {
    delay(150);
    printf(".");
  }
}
 fun()
 {
     int choice;
        cout<<"***********************************************************************\n\n\n";
        cout<<"                      Welcome to login page                               \n\n";
        cout<<"*******************        MENU        *******************************\n\n";
        cout<<"1.LOGIN"<<endl;
        cout<<"2.REGISTER"<<endl;
        cout<<"3.Exit"<<endl;
        cout<<"\nEnter your choice :";
        cin>>choice;
        cout<<endl;
        switch(choice)
        {
             case 1:
                 login();
                 break;
                case 2:
                     registr();
                     break;
                 case 3:
                        cout<<"Thanks for using this program";
                        break;
                default:
                        system("cls");
                        cout<<"You've made a mistake , Try again..\n"<<endl;
                        fun();
        }
 }
 choice() {
    address a;
    int n;
    cout<<"Enter the no of customer you want to enter : ";
    cin>>n;
    a.acceptc();
    a.dispc();
    a.add_input();
    a.add_display();
    current_account c1;
    saving_account s1;
    loan l1;
    char type;
    cout<<"\nEnter S for saving customer and C for current a/c customer : ";
    cin>>type;
    int choice;
    if(type=='s' || type=='S')
    {
        s1.getAccountDetails();
        while(1)
        {
            cout<<"\nChoose Your Choice"<<endl;
            cout<<"1)   Deposit"<<endl;
            cout<<"2)   Withdraw"<<endl;
            cout<<"3)   Display Balance"<<endl;
            cout<<"4)   Display with full Details"<<endl;
            cout<<"5)    Loan"<<endl;
            cout<<"6)   Exit"<<endl;
            cout<<"Enter Your choice: ";
            cin>>choice;
            switch(choice)
            {
            case 1 :
                s1.s_deposit();
                break;
            case 2 :
                s1.s_withdraw();
                break;
            case 3 :
                s1.s_display();
                break;
            case 4 :
                s1.displayDetails();
                s1.s_display();
                break;
            case 5 :
                 l1.inputFunction();
                 l1.outputFunction();
                 break;
            case 6 :
                goto end;
            default:
                cout<<"\n\nEntered choice is invalid,\"TRY AGAIN\"";
            }
        }
    }
    else if(type=='c' || type=='C')
    {
        c1.getAccountDetails();
        while(1)
        {
            cout<<"\nChoose Your Choice"<<endl;
            cout<<"1)   Deposit"<<endl;
            cout<<"2)   Withdraw"<<endl;
            cout<<"3)   Display Balance"<<endl;
            cout<<"4)   Display with full Details"<<endl;
            cout<<"5)    Loan"<<endl;
            cout<<"6)   Exit"<<endl;
            cout<<"Enter Your choice: ";
            cin>>choice;
            switch(choice)
            {
            case 1 :
                c1.c_deposit();
                break;
            case 2 :
                c1.c_withdraw();
                break;
            case 3 :
                c1.c_display();
                break;
            case 4 :
                c1.displayDetails();
                c1.c_display();
                break;
            case 5:
                l1.inputFunction();
                l1.outputFunction();
                break;
            case 6 :
                goto end;
            default:
                cout<<"\n\nEntered choice is invalid,\"TRYu AGAIN\"";
            }
        }
    }
    else
    {
        cout<<"\nInvalid Account Selection";
    }
    end:
    cout<<"\nThank You for Banking with us..";
 }
int main()
{   
     mainpage();
    fun();
    return 0;
}
void login()
{
        int count;
        string user,pass,u,p;
        system("cls");
        cout<<"please enter the following details"<<endl;
        cout<<"USERNAME :";
        cin>>user;
        cout<<"PASSWORD :";
        cin>>pass;
        ifstream input("database.txt");
        while(input>>u>>p)
        {
                if(u==user && p==pass)
                {
                        count=1;
                        system("cls");
                }
        }
        input.close();
        if(count==1)
        {
                cout<<"\nHello"<<user<<endl<<"\n<LOGIN SUCCESSFUL>\nThanks for logging in..\n";
                cin.get();
                cin.get();
                choice();
        }
        else
        {
                cout<<"\nLOGIN ERROR\nPlease check your username and password\n";
                fun();
        }
}
void registr()
{
        string reguser,regpass,ru,rp;
        system("cls");
        cout<<"Enter the username :";
        cin>>reguser;
        cout<<"\nEnter the password :";
        cin>>regpass;
        ofstream reg("database.txt",ios::app);
        reg<<reguser<<' '<<regpass<<endl;
        system("cls");
        cout<<"\nRegistration Sucessful\n";
        fun();
}
