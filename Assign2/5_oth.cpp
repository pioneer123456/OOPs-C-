# include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string";
    getline(cin,s);
    char prev;
    for(int i =0; i<s.length();i++)
    {
        if(s[i] == s[i+1])
        {
            s.erase(i,1);
            i--;
        }
        

    }
    cout<<s;

}