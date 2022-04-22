#include<iostream>
#include<map>
#include<vector>
#include<fstream>
using namespace std;
fstream fileEdit;
map<int,int> atmData;


class Customer
{
    string name;
    int pin;
    int balance;
    public:
    void storeData(string a,int b, int c)
    {
        name=a;
        pin=b;
        balance=c;
    }
    void writeData()
    {
        fileEdit.width(20);fileEdit.fill(' ');
        fileEdit<<name;
        fileEdit.width(20);fileEdit.fill(' ');
        fileEdit<<pin;
        fileEdit<<balance;
    }
    void display()
    {
        cout.width(20);cout.fill(' ');
        cout<<left<<name;
        cout.width(20);cout.fill(' ');
        cout<<pin;
        cout<<" Rs."<<balance<<endl;
    }
    bool verify(int a)
    {
        if(a==pin)
            return true;
        return false;
    }
    int getBalance()
    {
        return balance;
    }
    void updateBalance(int a)
    {
        balance+=a;
    }
};
