//Using the switch statement, write a menu driven program
//(i) To check and display whether a number input by the user is a composite number or not (A number is said to be a composite, if it has one or more than one factors excluding 1 and the number itself)
# include <iostream>
using namespace std;
int main()
{
    int n,choice,l,count;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Enter your choice: ";
    cin>>choice;

    switch (choice)
    { 
        case 1:
    int i;
    count=0;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count>0)
    {
        cout<<"The number is composite";
    }
    else
    {
        cout<<"The number is not composite";
    }

    break;
    case 2:
    //smallest digit of an integer
    l = n%10;
    n=n/10;
    while(n!=0)
    {
        if(n%10<l)
        {
            l=n%10;
        }
        n=n/10;
    }
    cout<<"The smallest digit is: "<<l;
    break;
    default:
    cout<<"Invalid choice";
    }
   
    return 0;
}