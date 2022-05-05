#include<iostream>
#include<map>
#include<vector>
#include<fstream>
#include "Machine.pb.h"
#include "users.pb.h"
using namespace std;
fstream fileEdit;
map<int,int> atmData;
class Customer;
map<int, Customer> customerData;


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
    static void writeData()
    {
        UserData::Users people;
        map<int, Customer>::iterator i = customerData.begin();
        while (i != customerData.end())
        {
            UserData::User* ptr =people.add_users();
            ptr->set_accountnumber(i->first);
            ptr->set_name(i->second.name);
            ptr->set_balance(i->second.balance);
            ptr->set_pin(i->second.pin);
            i++;
        }
        fstream output2("User_Data.bin", ios::out | ios::trunc | ios::binary);
        people.SerializeToOstream(&output2);
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
