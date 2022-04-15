# include<iostream>
using namespace std;
int main()
{
    string s,s2="";
    cout<<"Enter the string";
    getline(cin,s);
    char prev;
    for(auto it = s.begin();it!=s.end();it++)
    {
        if(prev == *it)
        {
            s.erase(it);
            it--;
        }
        else{
            prev = *it;
        }

    }
    cout<<s;


}