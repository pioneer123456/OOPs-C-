//C++ Program to create class SwapDemo
#include <bits/stdc++.h>
using namespace std;

class swapDemo{
    int num;
    string str;
    public:
    void set_Data(int a, string s)
    {
        num=a;
        str=s;

    }
    void show()
    {
        cout<<"Number: "<<num<<endl;
        cout<<"String: "<<str<<endl;
    }
    void swap_Data(swapDemo &obj)
    {
        int temp = num;
        num = obj.num;
        obj.num = temp;
        string temp1 = str;
        str = obj.str;
        obj.str = temp1;
    }

};

int main()
{
    swapDemo ob1,ob2;
    ob1.set_Data(10,"Hello");
    ob2.set_Data(20,"Sam");
    ob1.show();
    ob2.show();
    ob1.swap_Data(ob2);
    ob1.show();
    ob2.show();

return 0;
}