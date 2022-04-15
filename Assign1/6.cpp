// Evil no:
//Name: Deepak Pandey

# include<iostream>
using namespace std;
void to_bin(int n, int arr[])
{
    int rem,i=0;
    while(n>0)
    {
        arr[i] = n%2;
        n= n/2;
        i++;
    }
}
int main()
{
    int arr[32] = {0};
    int n,count=0;
    cin>>n;
    to_bin(n,arr);
    for(int i=0;i<32;i++)
    {
        if(arr[i]==1)
            count++;
    }
    if(count%2==0)
        cout<<"It is an evil no";
    else
        cout<<"Not an evil no.";

return 0;
}