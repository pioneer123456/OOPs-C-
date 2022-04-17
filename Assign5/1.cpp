//Write a C++ program to create a class called StaticDemo and overload funcDemo() static member function.
//Deepak Pandey
# include <bits/stdc++.h>
using namespace std;
class StaticDemo{
    private:
    string s;
    static int count;
    static int count_p;
    public:
    //Function to calculate reverse of a string
    static string reverse(string s)
    {
        string rev ="";
        for(int i=s.length()-1;i>=0;i--)
        {
            rev.push_back(s[i]);
        }
        cout<<"Reverse of the string is:"<<rev<<endl;
        return rev;
    }
    //Function to check if a string is palindrome or not
    static int ispalin(string word)
    {
            string temp;
            temp = reverse(word);
            if(word==temp)
                return 1;
            else
                return 0;
    }
    //Function to truncate string to  number of words   
    static void funcDemo(string s,int n)
    {
       for(int i=0;i<s.length();i++)
        {
            if(s.at(i) == ' ')
                count++;
            if (count == n)
            {
                s.erase(i);
                break;
            }
        }
        cout<<"new truncated string is "<<s<<endl;
    }
    //No of palindrome in given string
    static void funcDemo(string s)
    {
        string word;
        for(auto x:s)
        {
            if(x == ' ')
            {
                count_p += ispalin(word);
                word.clear();
            }
            else 
                word = word+x;
            }
            count_p += ispalin(word);
        cout<<"No of palindrome in given string is "<<count_p<<endl;
        }
    //chop a string into chunks of a given length. 
    static void funcDemo(int a,string s)
    {   
        cout<<"The chopped string is:";
        string temp;
        int i;
        for(i=0 ;i<s.length()-a;i+=a)
        {
            temp+=s.substr(i,a)+" ";
        }
        temp+=s.substr(i,a);
       cout<<temp;
    }


};
int StaticDemo::count = 0;
int StaticDemo::count_p = 0;


int main()
{
    string s;
    int n;
    cout<<"Enter the string"<<endl;
    getline(cin,s);
    cout<<"Enter the number"<<endl;
    cin>>n;
    StaticDemo::funcDemo(s,n);
    StaticDemo::funcDemo(s);
    StaticDemo::funcDemo(2,s);
    //cout<<"No of palindrome in given string is "<<StaticDemo::count_p<<endl;
    return 0;


}