//special 2 digit no
# include <iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter the number: ";
    cin>>n;
    int f, l;
    f= n/10;
    l= n%10;
    
    if(((f+l) + (f*l)) == n)
    {
        cout<<"The number is special";
    }
    else
    {
        cout<<f<<l;
        cout<<"The number is not special";
    }

}