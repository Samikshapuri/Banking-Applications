#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class bank
{
public:
int accountno;
string name;
char type;
float deposit;
public:
void createaccount(void);
void showinfo(void);
void withdraw(void);
void dep(void);
void display(void);
void deleterecord(void);
void report(void);
};
void bank::createaccount(void)
    {
        cout<<"Enter the account number: "<<endl;
        cin>>accountno;
        cout<<"Enter the name of the account holder: "<<endl;
        cin>>name;
        cout<<"Enter the type of account(C/S): "<<endl;
        cin>>type;
        cout<<"Enter the initial amount (>=500 for saving or >=1000 for current) "<<endl;
        cin>>deposit;
        cout<<"Your account has been successfully created !"<<endl;
    }
    void bank::showinfo(void)
    {
            cout<<"Account number : "<<accountno<<endl;
            cout<<"Name of the account holder: "<<name<<endl;
            cout<<"Type of account: "<<type<<endl;
            cout<<"The current balance: "<<deposit<<endl;
        }
    void bank::withdraw(void)
    {
        int x;
        cout<<"Enter the amount to withdraw: "<<endl;
        cin>>x;
        deposit-=x;
        cout<<"Record updated."<<endl;    
    }
    void bank::dep(void)
    {
        int x;
        cout<<"Enter the amount to deposit: "<<endl;
        cin>>x;
        deposit+=x;
        cout<<"Record updated."<<endl;
    }
    void bank::display(void)
    {
            cout<<"Account number: "<<accountno<<endl;
            cout<<"Name of the account holder: "<<name<<endl;
            cout<<"Type of account: "<<type<<endl;
            cout<<"The net amount in the account: "<<deposit<<endl;
            cout<<"********************************************************************************************************"<<endl;
        }
    void bank::deleterecord(void)
    {
        accountno=0;
        name= " ";
        type=' ';
        deposit= 0;
        cout<<"Account number: "<<accountno<<endl;
        cout<<"Name of the account holder: "<<name<<endl;
        cout<<"Type of account :"<<type<<endl;
        cout<<"Deposit amount: "<<deposit<<endl;
    }
    void bank::report(void) 
    {
	cout<<accountno<<setw(10)<<" "<<name<<setw(10)<<" "<<type<<setw(6)<<deposit<<endl;
    }
    int main()
    {
    bank b;
    char ch;
    int accountno;
    string name;
    char type;
    float deposit;
    do
    {
    cout<<"Enter 1 to create an account in YES Bank! "<<endl;
    cout<<"Enter 2 to show the information just entered in your account."<<endl;
    cout<<"Enter 3 to withdraw money from your account."<<endl;
    cout<<"Enter 4 to deposit money in your account."<<endl;
    cout<<"Enter 5 to check the information in your account after withdrawing or depositing."<<endl;
    cout<<"Enter 6 to delete the record."<<endl;
    cout<<"Enter 7 to read the record of all the persons."<<endl;
    cout<<"Enter 8 to exit."<<endl;
    cout<<"Enter your choice: "<<endl;
    cin>>ch;
    switch(ch)
    {
        case '1':
        {
        b.createaccount();
        break;
        }
        case '2':
        {
        b.showinfo();
        break;
        }
        case '3':
        {
        b.withdraw();
        break;
        }
        case '4':
        {
        b.dep();
        break;
        }
        case '5':
        {
        b.display();
        break;
        }
        case '6':
        {
        b.deleterecord();
        break;
        }
        case '7':
        {
            b.report();
            break;
        }
    }
    }while(ch!='8');
    return 0;
}