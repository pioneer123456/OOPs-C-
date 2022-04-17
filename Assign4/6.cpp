//Create a class called Time
//Name: Deepak Pandey
# include<iostream>
using namespace std;
class timee{
    int h,m,s;
    public:
    timee()
    {
        h=0;
        m=0;
        s=0;
    }
    timee(int h,int m,int s)
    {
        this->h = h;
        this->m = m;
        this->s = s;
    }
    void display()
    {
        cout<<"Time: "<<h<<":"<<m<<":"<<s<<endl;
    }
    timee add_time(timee obj1,timee obj2)
    {
        
        s+=obj1.s+obj2.s;
        m+=obj1.m+obj2.m;
        h+=obj1.h+obj2.h;
        if(s>=60)
        {
            s-=60;
            m+=1;
        }
        if(m>=60)
        {
            m-=60;
            h+=1;
        }
        if(h>24)
        {
            h=h-24;
        }
        return *this;
    }


};
int main()
{
    timee ob1;
    timee ob3(12,45,13);
    timee ob2(12,30,30);
    ob1.display();
    ob3.display();
    ob2.display();
    ob1 = ob1.add_time(ob2,ob3);
    ob1.display();

return 0;
}