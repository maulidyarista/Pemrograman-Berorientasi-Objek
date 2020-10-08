//Tugas 1 Pemrograman Berorientasi Objek (Bank Account)
//MAULIDYA RISTA YUNIAR 057

#include<iostream>
using namespace std;

class Account{
    char Name[50];
    float balance;
    int getAccountBalance;

public:
    Account()
    {
        balance=0.0;
    }
void input();
void deposit();
void credit();
void debit();
void display();

};

void Account::input()
{
    cout<<"\n Enter All Information: ";
    cout<<"\n Enter Name : ";
    cin>>Name;
    cout<<"\n Enter Amount to Deposit: ";
    cin>>getAccountBalance;
}
void Account::deposit()
{

    float deposit;
    cout<< "\n Deposit: ";
    cout<< "\n Enter Amount to Deposit  : ";
    cin>>deposit;
    cout<< "\n You have entered in      : "<<deposit<<endl;
    getAccountBalance+=deposit;
}
void Account::credit()
{
    float credit;
    cout<< "\n Apply for Credit         : ";
    cout<< "\n Enter Amount You Want To : ";
    cin>>credit;
    credit+=getAccountBalance;
}
void Account::debit()
{
    float amount;
    cout<<"\n Debit: ";
    cout<<"\n Enter amount to Withdraw: ";
    cin>>amount;
    getAccountBalance-=amount;
}
void Account::display()
{
    cout<< "\n Account Details ";
    cout<< "\n Name of Depositor        : "<<Name<<endl;
    cout<< "\n Your Current Balance is  : "<<balance<<endl;
}
int main()
{
    Account bd;
    int choice=1;
    while(choice!=0){
        cout<< "\n 1. Create New Account. \n 2. Deposit. \n 3. Credit. \n 4. Debit. \n 5. See Account Status.\nEnter 0 for Exit "<<endl;
        cout<< "\nEnter Choice : ";
        cin>> choice;
        switch(choice){
        case 0: bd.display();
        cout<<"\n Accounts: ";
        break;
        case 1: bd.input();
        break;
        case 2: bd.deposit();
        break;
        case 3: bd.credit();
        break;
        case 4: bd.debit();
        break;
        case 5: bd.display();
        break;
        default: cout<< "Invalid option : "<<endl;
        }
    }
}
