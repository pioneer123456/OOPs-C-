//Write a C++  program to input two numbers and check whether they are twin prime numbers or not
//Name: Deepak Pandey
# include<iostream>
using namespace std;
bool isprime(int n)
{
    if (n==1)
    {
        return false;
    }
    for(int i= 2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

bool istwprime(int n, int m )
{
    if(isprime(n) && isprime(m) && abs(n-m)==2)
        return true;
    return false;
}

int main()
{
    int n01,n02,i,j,count =0;
    cout<<"Enter the first number: ";
    cin>>n01;
    cout<<"Enter the second number: ";
    cin>>n02;
    
    if(istwprime(n01,n02))
        cout<<"The numbers are twin prime numbers";
    else
        cout<<"The numbers are not twin prime numbers";


return 0;
}