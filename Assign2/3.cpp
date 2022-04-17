#include<iostream>
using namespace std;
int main(){
string s;
int lo=0 ,up=0,vov=0,dig=0;
getline(cin,s);
int l=sizeof(s);
for(int i=0;i<l;i++)
{
    if(s[i]>='a' && s[i]<='z')
        lo++;
    if(s[i]>='A' && s[i]<='Z')
        up++;
    if(s[i]>='0' && s[i]<='9')
        dig++;
    if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
        vov++;
}
cout<<"Lowercase letters: "<<lo<<endl;
cout<<"Uppercase letters: "<<up<<endl;
cout<<"Digits: "<<dig<<endl;
cout<<"Vowels: "<<vov<<endl;
return 0;

}