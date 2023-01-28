#include<iostream>
#include<fstream>
#include<cctype>
#include<iomanip>
using namespace std;

class account
{
    int acno;
    char name[50];
    int deposit;
    char type;
public:
    void create_account();   //function to create account 
    void show_account();        //function to display account 
    void modify();             //function to addd data  
    void dep(int);              //
    void draw(int);
     void report() const;    //function to show data in tabular format
    int retacno() const;    //function to return account number
    int retdeposit() const; //function to return balance amount
    char rettype() const;   //function to return type of account
};  

void account :: create_account(){
    cout<<"\n Enter the Account no.: ";
    cin>> acno;
    cout<<"\n Enter the Name of Account holder : ";
    cin.ignore();
    cin.getline(name ,50);
    cout<<"\nEnter Type of the account (C/S): ";
    cin>>type;
    type=toupper(type);
    cout<<"\nEnter The Initial amount(>=500 for Saving and >=1000 for current ) : ";
    cin>>deposit;
    cout<<"\n\n\nAccount Created..";
}

void account::show_account() const
{
    cout<<"\nAccount No. : "<<acno;
    cout<<"\nAccount Holder Name : ";
    cout<<name;
    cout<<"\nType of Account : "<<type;
    cout<<"\nBalance amount : "<<deposit;
}

void account::modify()
{
    cout<<"\nAccount No. : "<<acno;
    cout<<"\nModify Account Holder Name : ";
    cin.ignore();
    cin.getline(name,50);
    cout<<"\nModify Type of Account : ";
    cin>>type;
    type=toupper(type);
    cout<<"\nModify Balance amount : ";
    cin>>deposit;
}


