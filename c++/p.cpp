#include<fstream.h>
#include<stdlib.h>
#include<iomanip.h>
#include<conio.h>
 
const int MAX = 100;
 
enum bool{_false, _true};
 
class Cbank{
    private:
        int accNo;
        char name[20];
        float bal;
    public:
        Cbank() : accNo(100){}
        void getAcc(int );
        bool accPresent(int );
        void saveBal(int, float );
        void dispAcc() const;
        void dispAll() const;
    };
 
void Cbank :: getAcc(int i){
    accNo += i;
    cout<<"\n Enter Name: ";
    cin>>name;
    cout<<"\n Enter Amount for opening Acc.: ";
    cin>>bal;
    }
 
 
 
bool Cbank :: accPresent(int _acnt){
    if(accNo == _acnt)
        return _true;
    else
        return _false;
    }
 
void Cbank :: saveBal(int type, float _amt){
    if(type == 2){      // Deposit.
        bal += _amt;
        cout<<"\n Balance Updated.";
        }
    else if(type == 3){ // Withdrawl.
        if(bal >= _amt){
            bal -= _amt;
            cout<<"\n Balance Updated.";
            }
        else
            cout<<"\n Not Enough Funds on Account, SORRY !!";
        }
    }
 
void Cbank :: dispAcc() const{
    cout<<"\n Account Information:-";
    cout<<"\n ~~~~~~~~~~~~~~~~~~~";
    cout<<"\n Account No.: "<<accNo;
    cout<<"\n Holders Name: "<<name;
    cout<<"\n Balance: "<<bal;
    }
 
void Cbank :: dispAll() const{
    cout<<endl<<setw(8)<<accNo<<setw(20)<<name<<setw(20)<<bal;
    }
 
void main(){
    int ch, i, _tot = 0;
    int _acc;
    float _amt;
    char nx;
    bool found;
    Cbank *Obank = new(Cbank[MAX]);
    fstream fstr;
    fstr.open("Bank.txt", ios::in | ios::nocreate);
    if(fstr){
        while(fstr){
            fstr.read((char *) &Obank[_tot], 
sizeof(Obank[_tot]));
            _tot++;
            }
        _tot -= 2;
        }
    fstr.close();
    // Data Retrieved form Disk.
    while(1){
        clrscr();
        cout<<"\n BANK AUTOMATION";
        cout<<"\n ~~~~~~~~~~~~~~~";
        cout<<"\n 1 -> Create Account.";
        cout<<"\n 2 -> Deposit Money.";
        cout<<"\n 3 -> Withdrawl Money.";
        cout<<"\n 4 -> Balance Inqury.";
        cout<<"\n 5 -> Display Accounts.";
        cout<<"\n 6 -> Exit.";
        cout<<"\n\n Enter your choice: ";
        cin>>ch;
        clrscr();
        switch(ch){
            case 1: // Create Acc.
                while(_tot < MAX){
                    cout<<"\n Account No.: "<<_tot+1;
                    Obank[_tot].getAcc(_tot);
                    cout<<"\n Want to add more (y/n): ";
                    cin>>nx;
                    _tot++;
                    if(nx == 'n')
                        break;
                    }
                break;
            case 2: // Deposit Money.
                found = _false;
                cout<<"\n Enter Account No: ";
                cin>>_acc;
                for(i=0; i<=_tot; i++){
                    if(Obank[i].accPresent(_acc)){
                        found = _true;
                        break;
                        }
                    }
                if(!found){
                    cout<<"\n Account Not Found.";
                    break;
                    }
                else{
                    cout<<"\n Enter Amount to Deposit: ";
                    cin>>_amt;
                    Obank[i].saveBal(ch, _amt);
                    }
                break;
            case 3: // Withdrawl Money.
                found = _false;
                cout<<"\n Enter Account No: ";
                cin>>_acc;
                for(i=0; i<=_tot; i++){
                    if(Obank[i].accPresent(_acc)){
                        found = _true;
                        break;
                        }
                    }
                if(!found){
                    cout<<"\n Account Not Found.";
                    break;
                    }
                else{
                    cout<<"\n Enter Amount to Withdrawl:";
                    cin>>_amt;
                    Obank[i].saveBal(ch, _amt);
                    }
                break;
            case 4: // Balance Inquiry.
                found = _false;
                cout<<"\n Enter Account No: ";
                cin>>_acc;
                for(i=0; i<=_tot; i++){
                    if(Obank[i].accPresent(_acc)){
                        found = _true;
                        break;
                        }
                    }
                if(!found){
                    cout<<"\n Account Not Found.";
                    break;
                    }
                else{
                    Obank[i].dispAcc();
                    }
                break;
            case 5: // Display Acc.
                cout<<"\n Account Information:-";
                cout<<"\n ~~~~~~~~~~~~~~~~~~~";
                cout<<"\n ACC No."<<setw(20)
    <<"NAME"<<setw(20)<<"BALANCE";
                cout<<"\n``````````````````````````````````
  ``````````````````````````````````";
                for(i=0; i<_tot; i++)
                    Obank[i].dispAll();
                break;
            case 6: // Exit;
                fstr.open("Bank.txt", ios::out);
                for(i=0; i<=_tot; i++)
                    fstr.write((char *) &Obank[i], 
sizeof(Obank[i]));
                fstr.close();
                // Data Saved to Disk.
                delete []Obank;
                exit(1);
            default:
                cout<<"\n Enter Appropriate Choice.";
            } // end of switch.
        getch();
        } // end of while.
    } // end of main.