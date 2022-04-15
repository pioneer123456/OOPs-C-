//Q1: Write a C++ program to input Name, Personal account number, annual taxable income and compute the tax according to   the given conditions and display the output.
//Name:Deepak Pandey
# include<iostream>
using namespace std;
int main() 
{
    float tax;
    int income;
    string name;
    int account;
    cout<<"Enter your name: ";
    getline(cin,name);
    cout<<"Enter your personal account number: ";
    cin>>account;
    cout<<"Enter your annual taxable income: ";
    cin>>income;
    if(income<=250000)
    {
        tax=0;
    }
    else if(income>250000 && income<=300000)
    {
        tax=0.1*(income-250000);
    }
    else if(income>300000 && income<=400000)
    {
        tax=5000+0.2*(income-300000);
    }
    else if(income>400000)
    {
        tax= 25000+0.3*(income-400000);
    }
    cout<<"Your tax is: "<<tax<<endl;

}