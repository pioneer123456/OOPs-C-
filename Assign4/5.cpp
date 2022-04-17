// To create class called Bank
//Name: Deepak Pandey
#include <iostream>
using namespace std;
static int count;
class Bank{
    public:
    string dname;
    string add;
    int accno;
    double balance;
    
    //Generate a unique account number for each depositor
//For first depositor, account number will be 1001, for second depositor it will be 1002 and so on
    Bank()
    {
        accno=1001+count;
        count++;
    }
    void set_detail()
    {
        cout<<"Enter the depositor name: ";
        cin>>dname;
        cout<<"Enter the address: ";
        cin>>add;
        cout<<"Enter the balance: ";
        cin>>balance;
    }
    void deposit(double amount)
    {
        balance+=amount;
    }
    void withdraw(double amount)
    {
        balance-=amount;
    }
    void display()
    {
        cout<<"Name: "<<dname<<endl;
        cout<<"Address: "<<add<<endl;
        cout<<"Account number: "<<accno<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
    void change_address(string address)
    {
        add=address;
    }
};

int main()
{
    int n,choice,accno,amt;
    string address;
    
    cout<<"Enter the number of depositors: ";
    cin>>n;
    Bank obj[n];
    cout<<"Enter the choice: "<<endl;
    cout<<"1. Details"<<endl;
    cout<<"2. Display"<<endl;
    cout<<"3. Change address"<<endl;
    cout<<"4. Deposit"<<endl;
    cout<<"5. Withdraw"<<endl;
    cout<<"6. Exit"<<endl;
    
    while (1)
    {
    cin>>choice;
    switch(choice)
    {
        case 1:
            for(int i=0;i<n;i++)
                obj[i].set_detail();
        break;
        case 2:
            for(int i=0;i<n;i++)
                obj[i].display();
        break;
        case 3:
            cout<<"Enter the account number to change to deposit : ";
            cin>>accno;
            cout<<"Enter the new address: ";
            cin>>address;
            for(int i=0;i<n;i++)
            {
                 if(obj[i].accno==accno)
                    obj[i].change_address(address);
            }
        break;
        case 4:
            cout<<"Enter the account number to change to deposit : ";
            cin>>accno;
            cout<<"Enter the amount to deposit: ";
            cin>>amt;
            for(int i=0;i<n;i++)
            {
                 if(obj[i].accno==accno)
                    obj[i].deposit(amt);
            }
        break;
        case 5:
            cout<<"Enter the account number to change to withdraw : ";
            cin>>accno;
            cout<<"Enter the amount to withdraw: ";
            cin>>amt;
            for(int i=0;i<n;i++)
            {
                 if(obj[i].accno==accno)
                    obj[i].withdraw(amt);
            }
        break;
        case 6:
            cout<<"Exiting"<<endl;
            goto exit_loop;

        break;
    }
    }
    exit_loop:;

    
return 0;
}