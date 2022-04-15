//program to input an string and count occurance of each character
# include <iostream>
# include <algorithm>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string:";
    getline(cin,s);
    int alpha[26]={0};
    transform(s.begin(),s.end(),s.begin(),::tolower);
    for(int i = 0; i<s.length();i++)
    {
        alpha[s[i]-'a']++;
    }
    for(int i=0;i<s.length();i++)
    {
        //cout<<alpha[i];
        if(alpha[s[i]-'a']!=0)
        {
            cout<<s[i]<<":"<<alpha[s[i]-'a'];
            alpha[s[i]-'a']=0;
        }
    }

}