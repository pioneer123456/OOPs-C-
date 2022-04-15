//Write a program based on the above criteria to input name, address, amount of purchase and the type of purchase (L for Laptop and D for Desktop) by a customer. Compute and print the net amount to be paid by a customer along with his name and address.
//(Hint: Discount = (discount rate / 100) * amount of purchase, Net amount = amount of purchase – discount)
# include<iostream>
using namespace std;
int main(){
    string name;
    string address;
    int purchase;
    char type;
    float discount;
    float net;
    cout<<"Enter your name: ";
    getline(cin,name);
    cout<<"Enter your address: ";
    getline(cin,address);
    cout<<"Enter your purchase amount: ";
    cin>>purchase;
    cout<<"Enter your purchase type: ";
    cin>>type;
    switch (type)
    {
        case 'L':
        if (purchase<=25000)
        {
            discount=0;
        }
        else if (purchase>25000 && purchase<=57000)
        {
            discount=0.5*(purchase);
        }
        else if (purchase>57001 && purchase<=100000)
        {
            discount=0.75*(purchase);
        }
        else if (purchase>100000)
        {
            discount=.1*(purchase);
        }
        {
            discount=0.2*(purchase-1000000);
        }
    }
    {
    
    
    default:
        break;
    }
    net=purchase-discount;
    cout<<"Your net amount is: "<<net<<endl;




}
