//program to implement class student with following members
//Name: Deepak Pandey
#include <iostream>
using namespace std;
class student
{
    private:
        int rollno;
        string name;
        float sub1,sub2,sub3;
        float per;
        char grade;
    public:
        void getdata()
        {
            cout<<"Enter the rollno,name,sub1,sub2,sub3";
            cin>>rollno>>name>>sub1>>sub2>>sub3;
        }
        void calper()
        {
            per = (sub1+sub2+sub3)/3;
            if(per>=90)
                grade = 'A';
            else if(per>=80)
                grade = 'B';
            else if(per>=60)
                grade = 'C';
            else if(per>=40)
                grade = 'D';
            else
                grade = 'F';
        }
        void display()
        {
            cout<<"Rollno:"<<rollno<<endl;
            cout<<"Name:"<<name<<endl;
            cout<<"Per:"<<per<<endl;
            cout<<"Grade:"<<grade<<endl;
        }


};
int main()
{
    student s;
    s.getdata();
    s.calper();
    s.display();

}