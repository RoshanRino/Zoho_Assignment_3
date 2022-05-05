#include "Class_Customer.h"
//map<int,Customer> customerData;

/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*/
void readData()
{
    Machine::MachineDatas AtmData;
    fstream input("Atm_Data.bin", ios::in | ios::binary);
    AtmData.ParseFromIstream(&input);
    for (auto iter = AtmData.mdata().begin(); iter != AtmData.mdata().end(); iter++)
        atmData[iter->denomination()] = iter->count();

    UserData::Users customer;
    fstream input2("User_Data.bin", ios::in | ios::binary);
    customer.ParseFromIstream(&input2);
    for (auto iter = customer.users().begin(); iter != customer.users().end(); iter++)
        customerData[iter->accountnumber()].storeData(iter->name(), iter->pin(),iter->balance());
}
void writeData()
{
    Machine::MachineDatas AtmData;
    map<int, int>::iterator i = atmData.begin();
    while (i != atmData.end())
    {
        Machine::MachineData* ptr;
        ptr = AtmData.add_mdata();
        ptr->set_denomination(i->first);
        ptr->set_count(i->second);
        i++;
    }
    fstream output("Atm_Data.bin", ios::out | ios::trunc | ios::binary);
    AtmData.SerializeToOstream(&output);
    Customer::writeData();
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

        int h=0,tt=0,fh=0,temp=amount;
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
        writeData();
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

