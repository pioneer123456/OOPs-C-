// create a class to called numdemo with following data members
# include <iostream>
using namespace std;
class numdemo
{
    private:
        int num1,num2;
    public:
        void getdata()
        {
            cout<<"Enter the 2 numbers";
            cin>>num1>>num2;
        }
        void show()
        {
            cout<<"num1:"<<num1<<endl;
            cout<<"num2:"<<num2<<endl;
        }
        void swap()
        {
            int temp;
            temp = num1;
            num1 = num2;
            num2 = temp;
        }
};
int main()
{
    numdemo n;
    n.getdata();
    n.show();
    n.swap();
    n.show();

}