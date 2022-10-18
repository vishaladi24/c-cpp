#include<iostream>
using namespace std;
class bank
{
    private:
        int acc_no;
        char name;
        long balance;
    public:
        void open_acc()
        {
            cout<<"Enter Customer's Account number: \t";
            cin>>acc_no;
            cout<<"Enter Customer's Name: \t";
            cin>>name;
            cout<<"Enter Account Balance: \t";
            cin>>balance;
        }
        int search(int a)
        {
            if(acc_no == a)
                enquire();
                return 1;
            return 0;
        }
        void enquire()
        {
            cout<<"Account Number: "<<acc_no<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Account Balance: "<<balance<<endl;
        }
        void deposit()
        {
            long amount;
            cout<<"Enter amount to deposit into Account Number"<<endl;
            cin>>amount;
            balance += amount;
            cout<<amount<<" Rupees have been successfully deposited"<<endl;
            cout<<"Current Balance: "<<balance<<endl;
        }
        void withdraw()
        {
            long amount;
            cout<<"Enter amount to withdraw from Account Number"<<acc_no<<endl;
            cin>>amount;
            if(amount>balance)
                cout<<"Insufficicent Balance"<<endl;
            balance -= amount;
            cout<<amount<<" Rupees have been successfully withdrawn"<<endl;
            cout<<"Current Balance: "<<balance<<endl;
        }
};
int main()
{
    bank b[4];
    int a,found=0;
    for(int i=0;i<4;i++)
        b[i].open_acc();
    int c;
    do
    {
        cout<<endl<<"1. Search for Account"<<endl<<"2. Enquire Account Details"<<endl<<"3. Deposit"<<endl<<"4. Withdraw"<<endl<<"5. Exit"<<endl;
        cout<<"Input your choice"<<endl;
        cin>>c;
        switch(c)
        {
            case 1:
                cout<<"Enter Account Number: "<<endl;
                cin>>a;
                for(int i=0;i<4;i++)
                {
                    found = b[i].search(a);
                    if(found==0)
                        break;
                    else
                    {
                        cout<<"No Record Found"<<endl;
                        break;
                    }
                }
            case 2:
                for(int i=0;i<4;i++)
                    b[i].enquire();
                    break;
            case 3:
                cout<<"Enter Account Number: "<<endl;
                cin>>a;
                for(int i=0;i<4;i++)
                {
                    found = b[i].search(a);
                    if(found)
                    {  
                        b[i].deposit();
                        break;
                    }
                    else
                        cout<<"No Record Found"<<endl;
                        break;
                }
            case 4: 
                cout<<"Enter Account Number: "<<endl;
                cin>>a;
                for(int i=0;i<4;i++)
                {
                    found = b[i].search(a);
                    if(found)
                    {
                        b[i].withdraw();
                        break;
                    }
                    else
                        cout<<"No Record Found"<<endl;
                        break;
                }
            case 5:
                cout<<"Thank You for visiting!"<<endl;
                break;
            default:
                cout<<"Wrong Choice"<<endl;
        }
    }
    while(c!=5);
}
#include <iostream>
using namespace std;
// class
class Bank {
private:
    int acno;
    char name[30];
    long balance;
public:
    void OpenAccount()
    {
        cout << "Enter Account Number: ";
        cin >> acno;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter  Balance: ";
        cin >> balance;
    }
    void ShowAccount()
    {
        cout << "Account Number: " << acno << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
    void Deposit()
    {
        long amt;
        cout << "Enter Amount U want to deposit? ";
        cin >> amt;
        balance = balance + amt;
    }
    void Withdrawal()
    {
        long amt;
        cout << "Enter Amount U want to withdraw? ";
        cin >> amt;
        if (amt <= balance)
            balance = balance - amt;
        else
            cout << "Less Balance..." << endl;
    }
    int Search(int);
};
int Bank::Search(int a)
{
    if (acno == a) {
        ShowAccount();
        return (1);
    }
    return (0);
}
// main code
int main()
{
    Bank C[3];
    int found = 0, a, ch, i;
    for (i = 0; i <= 2; i++) {
        C[i].OpenAccount();
    }
    do {
        // display options
        cout << "\n\n1:Display All\n2:By Account No\n3:Deposit\n4:Withdraw\n5:Exit" << endl;
        // user input
        cout << "Please input your choice: ";
        cin >> ch;
        switch (ch) {
        case 1: // displating account info
            for (i = 0; i <= 2; i++) {
                C[i].ShowAccount();
            }
            break;
        case 2: // searching the record
            cout << "Account Number? ";
            cin >> a;
            for (i = 0; i <= 2; i++) {
                found = C[i].Search(a);
                if (found)
                    break;
            }
            if (!found)
                cout << "Record Not Found" << endl;
            break;
        case 3: // deposit operation
            cout << "Account Number To Deposit Amount? ";
            cin >> a;
            for (i = 0; i <= 2; i++) {
                found = C[i].Search(a);
                if (found) {
                    C[i].Deposit();
                    break;
                }
            }
            if (!found)
                cout << "Record Not Found" << endl;
            break;
        case 4: // withdraw operation
            cout << "Account Number To Withdraw Amount? ";
            cin >> a;
            for (i = 0; i <= 2; i++) {
                found = C[i].Search(a);
                if (found) {
                    C[i].Withdrawal();
                    break;
                }
            }
            if (!found)
                cout << "Record Not Found" << endl;
            break;
        case 5: // exit
            cout << "Have a nice day" << endl;
            break;
        default:
            cout << "Wrong Option" << endl;
        }
    } while (ch != 5);
    return 0;
}