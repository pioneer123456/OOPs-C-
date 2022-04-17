//To find all pairs of elements in an 
//Array whose sum is equal to a given number :
//Name:Deepak Pandey
#include <iostream>
using namespace std;
void findPairs(int a[],int n,int sum)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==sum)
            {
                cout<<"("<<a[i]<<","<<a[j]<<")"<<endl;
            }
        }
    }
}
int main()
{
    int n,sum;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter the sum: ";
    cin>>sum;
    findPairs(a,n,sum);
    return 0;
}