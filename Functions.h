#include "Class_Customer.h"
map<int,Customer> customerData;

/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*/
void readAtmDetails()
{
    fileEdit.open("Atm_Data.txt",ios::in);
    int deno,number,temp;
    string temp2;
    while(fileEdit>>deno>>number>>temp>>temp2)
        atmData[deno]=number;
    fileEdit.close();
}
/*---------------------------------------------------------------------------------------------------------------------------*/
void writeAtmDetails()
{
    fileEdit.open("Atm_Data.txt",ios::out);
    map<int,int>::iterator i = atmData.begin();
    while(i!=atmData.end())
    {
        fileEdit.width(20);fileEdit.fill(' ');
        fileEdit<<left<<i->first;
        fileEdit.width(20);fileEdit.fill(' ');
        fileEdit<<i->second;
        fileEdit<<(i->first)*(i->second)<<" ₹"<<endl;
        i++;
    }
    fileEdit.close();
}
/*---------------------------------------------------------------------------------------------------------------------------*/
void printAtmData()
{
    map<int,int>::iterator i = atmData.begin();
    while(i!=atmData.end())
    {
        cout.width(20);cout.fill(' ');
        cout<<left<<i->first;
        cout.width(20);cout.fill(' ');
        cout<<i->second;
        cout<<"Rs."<<(i->first)*(i->second)<<endl;
        i++;
    }
}
/*---------------------------------------------------------------------------------------------------------------------------*/
void readCustomerDetails()
{
    fileEdit.open("Customer_Data.txt",ios::in);
    int acc,pin,bal;
    string name,temp;
    while(fileEdit>>acc>>name>>pin>>bal>>temp)
    {
        customerData[acc].storeData(name,pin,bal);
    }
    fileEdit.close();
}
/*---------------------------------------------------------------------------------------------------------------------------*/
void writeCustomerDetails()
{
    fileEdit.open("Customer_Data.txt",ios::out);
    map<int,Customer>::iterator i = customerData.begin();
    while(i!=customerData.end())
    {
        fileEdit.width(20);fileEdit.fill(' ');
        fileEdit<<left<<i->first;
        i->second.writeData();
        fileEdit<<" ₹"<<endl;
        i++;
    }
    fileEdit.close();
}
/*---------------------------------------------------------------------------------------------------------------------------*/
void updateCash()
{
    int temp;
    system("cls");
    cout<<"Enter Number of 2000 Rupee notes to be added:"<<endl;
    cin>>temp;
    atmData[2000]+=temp;
    cout<<"Enter Number of 500 Rupee notes to be added:"<<endl;
    cin>>temp;
    atmData[500]+=temp;
    cout<<"Enter Number of 100 Rupee notes to be added:"<<endl;
    cin>>temp;
    atmData[100]+=temp;
}
/*---------------------------------------------------------------------------------------------------------------------------*/
void displayDetails()
{
    system("cls");
    cout.width(20);cout.fill(' ');
    cout<<left<<"Account Number";
    cout.width(20);cout.fill(' ');
    cout<<"Account Holder";
    cout.width(21);cout.fill(' ');
    cout<<"Pin"<<"Balance"<<endl<<endl;
    map<int,Customer>::iterator i = customerData.begin();
    while(i!=customerData.end())
    {
        cout.width(20);cout.fill(' ');
        cout<<left<<i->first;
        i->second.display();
        i++;
    }
    cout<<endl<<endl;
}
/*---------------------------------------------------------------------------------------------------------------------------*/
bool checkAccount(int a)
{
    map<int,Customer>::iterator check = customerData.begin();
    while(check!=customerData.end())
    {
        if(check->first==a)
            return true;
        check++;
    }
    return false;
}
/*---------------------------------------------------------------------------------------------------------------------------*/
void transfer(int acc)
{
    system("cls");
    int amount,recieve,pin;
    cout<<"Transfer Amount must be from Rs.1000 to Rs.10000 Only"<<endl<<endl;
    cout<<"Enter the amount to Transfer: ";
    cin>>amount;
    if(amount > customerData[acc].getBalance())
    {
        cout<<"Not enough cash"<<endl;
        return;
    }
    if(amount>10000 || amount < 1000)
    {
        cout<<"Cannot Transfer That Much Money"<<endl;
        return;
    }
    cout<<"Enter the Account number of the Recipient"<<endl;
    cin>>recieve;
    if(checkAccount(recieve)==true)
    {
        cout<<"Enter Your pin: ";
        cin>>pin;
        if(customerData[acc].verify(pin)==true)
        {
            cout<<"Success"<<endl<<endl;
            customerData[acc].updateBalance(-amount);
            customerData[recieve].updateBalance(amount);
            return;
        }
        else
        {
            cout<<"The Pin You have entered is incorrect"<<endl<<endl;
            return ;
        }
    }
    cout<<"Account Does not Exist"<<endl<<endl;
    return;
}
/*---------------------------------------------------------------------------------------------------------------------------*/
void withdrawMoney(int acc)
{
    int pin,amount;
    cout<<"Enter Your pin: ";
    cin>>pin;
    if(customerData[acc].verify(pin)==false)
    {
        cout<<"Incorrect Pin"<<endl<<endl;
        return;
    }
    system("cls");
    cout<<"Only Rs.10000 can be Withdrawn in a Single Transaction"<<endl<<endl;
    cout<<"Enter the amount to be Withdrawn: ";
    cin>>amount;
    if(amount%100 !=0)
    {
        cout<<"Must Be a Multiple of 100"<<endl<<endl<<endl;
        return;
    }
    else if(amount>10000)
    {
        cout<<"Amount to Large"<<endl;
        return;
    }
    else if(amount>customerData[acc].getBalance())
    {
        cout<<"You don't Have Enough Money"<<endl;
        return;
    }
    else
    {

        int h,tt,fh,temp=amount;
        if(amount>=5000)
        {
            tt=amount/2000;
            amount-=tt*2000;
            fh=amount/500;
            amount-=fh*500;
            h=amount/100;
            amount-=100*h;
        }
        else
        {
            if(amount>=3000)
            {
                amount-=2000;
                tt=1;
            }
            if(amount>=1000)
            {
                amount-=500;
                fh=1;
            }
            h=amount/100;
            amount-=h*100;
        }
        if(atmData[2000]<tt || atmData[500]<fh || atmData[100]<h)
        {
            cout<<"There are No Proper Denominations in the ATM"<<endl<<endl;
            return;
        }
        customerData[acc].updateBalance(-temp);
        atmData[2000]-=tt;
        atmData[500]-=fh;
        atmData[100]-=h;
    }

}
/*---------------------------------------------------------------------------------------------------------------------------*/
void atmProcess(int acc)
{
    int temp;
    while(1)
    {
        writeCustomerDetails();
        cout<<"Press 1 to Check Balance"<<endl;
        cout<<"Press 2 to Withdraw Money"<<endl;
        cout<<"Press 3 to Transfer Money"<<endl;
        cout<<"Press 4 to go Back";
        cin>>temp;
        switch(temp)
        {
        case 1:
            system("cls");
            cout<<"The Balance in your Account is: Rs."<<customerData[acc].getBalance()<<endl<<endl<<endl;
            break;
        case 2:
            withdrawMoney(acc);
            break;
        case 3:
            transfer(acc);
            break;
        case 4:
            return;
        default:
            break;
        }
    }
}
/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*/
/*---------------------------------------------------------------------------------------------------------------------------*/

