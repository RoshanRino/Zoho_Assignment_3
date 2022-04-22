#include "Functions.h"
int main()
{
    readAtmDetails();
    readCustomerDetails();
    int input;
    while(1)
    {
        writeAtmDetails();
        cout<<"Press 1 to Load Cash in ATM"<<endl;
        cout<<"Press 2 to Show Customer Details"<<endl;
        cout<<"Press 3 to Show ATM operations"<<endl;
        cout<<"Press 4 to Check ATM balance"<<endl;
        cout<<"Press 5 to Exit"<<endl;
        cin>>input;
        switch(input)
        {
        case 1:
            updateCash();
            break;
        case 2:
            displayDetails();
            break;
        case 3:
            int acc,pin;
            system("cls");
            cout<<"Enter Your Account Number: ";
            cin>>acc;
            cout<<"Enter Your Pin: ";
            cin>>pin;
            if(customerData[acc].verify(pin))
            {
                cout<<"Login In success"<<endl<<endl;
                atmProcess(acc);
            }
            else
                cout<<"Incorrect Pin Try Again"<<endl<<endl;
            break;
        case 4:
            system("cls");
            cout.width(20);cout.fill(' ');
            cout<<left<<"Denomination";
            cout.width(20);cout.fill(' ');
            cout<<"Number"<<"value"<<endl;
            printAtmData();
            cout<<endl;
            cout.width(43);cout.fill(' ');
            cout<<right<<"Total Amount : Rs."<<atmData[2000]*2000+atmData[500]*500+atmData[100]*100;
            cout<<endl<<endl<<endl;
            break;
        case 5:
            return 0;
        default:
            break;
        }
    }
}
