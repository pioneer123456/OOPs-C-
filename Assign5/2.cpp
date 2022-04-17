//Volume of different surfaces
//Name:Deepak Pandey

# include<iostream>
using namespace std;

class overload_Demo{
    private:
    public:
        double volume(int r)
        {
            return (4/3)*(3.14*r*r*r);
        }
        double volume(double a,double h)
        {
            //cout<<a;
            //cout<<h;
            double vol = (0.33)*(3.14*a*a*h);
            return vol;
        }
        double volume(int l , int b ,int h)
        {
            return l*b*h;
        }


};


int main()
{
    double vol;
    overload_Demo d;
    vol = d.volume(5);
    cout<<"The volume of sphere is:"<<vol<<endl;
    vol = d.volume(7,4);
    cout<<"The volume of cone is:"<<vol<<endl;
    vol = d.volume(1,2,3);
    cout<<"The volume of cuboid is:"<<vol<<endl;
return 0;
}