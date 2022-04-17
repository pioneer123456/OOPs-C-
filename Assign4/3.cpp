//Name: Deepak Pandey
//Create a class called tollboth
#include <iostream>
using namespace std;

class tollboth{
    unsigned int car_no;
    double toll_amount;
    public:
    tollboth(unsigned int car_no,double toll_amount){
        this->car_no=car_no;
        this->toll_amount=toll_amount;
    }
    void paying_car()
    {
        car_no+=1;
        toll_amount+=0.5;
    }
    void non_paying_car()
    {
        car_no+=1;
    }
    
    void display(){
        cout<<"Car no: "<<car_no<<endl;
        cout<<"Toll amount: "<<toll_amount<<endl;
    }


};

int main()
{
//This program should allow the user to push one key to count a paying car , and another to count a non paying car. Pushing the ‘E’ key should cause the program to print out the total number of cars and total cash and then exit.
 tollboth obj(0,0);
    char ch;
    while(1)
    {
        cout<<"Enter the car type: ";
        cin>>ch;
        if(ch=='P')
        {
            obj.paying_car();
        }
        else if(ch=='N')
        {
            obj.non_paying_car();
        }
        else if(ch=='E')
        {
            obj.display();
            break;
        }
        else
        {
            cout<<"Invalid input"<<endl;
        }
    }
}