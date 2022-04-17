//by maintaining the sorted order i.e. fill A with first p smallest elements and fill B with remaining elements.
//Name:Deepak Pandey
#include<iostream>
using namespace std;
void sort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}

void arraysort(int a[],int n,int b[],int p)
{
    int A[n+p];
    for(int i=0;i<n;i++)
        A[i]=a[i];
    for(int i=n;i<n+p;i++)
        A[i]=b[i-n];
    sort(A,n+p);
    for(int i=0;i<n;i++)
        a[i]=A[i];
    for(int i=n;i<n+p;i++)
        b[i-n]=A[i];
}
int main()
{
    int n,p;
    cout<<"Enter the number of elements: ";
    cin>>n>>p;
    int a[n],b[p],A[n+p];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<p;i++)
        cin>>b[i];
    arraysort(a,n,b,p);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    for(int i=0;i<p;i++)
        cout<<b[i]<<" ";
    return 0;
}