//arrange all characters in following order.Digit + Uppercase + Lowercase + Special Characters
#include<iostream>
using namespace std;
int main()
{
    string s,s2;
    cout<<"Enter a string: ";
    getline(cin,s);
    int n=sizeof(s);
    for(auto i:s)
    {
        if(i>='0' && i<='9')
            s2.push_back(i);
    }
    for(auto i:s)
    {
        if(i>='A' && i<='Z')
            s2.push_back(i);
    }
    for(auto i:s)
    {
        if(i>='a' && i<='z')
            s2.push_back(i);
    }
    for(auto i:s)
    {
        if(i>=32 && i<=47 || i>=58 && i<=64 || i>=91 && i<=96 || i>=123 && i<=126)
            s2.push_back(i);
    }
    cout<<s2<<endl;

}