//Make above program for 5 customers (Use Array of Objects)
// Name: Deepak Pandey
#include <bits/stdc++.h>
using namespace std;
class ele_bill{
private:
   string name;
   long int Pnumber;
   int nunits;
   float amount;
   void calc_amt()
   {
      if (nunits<=50)
      {

         amount = 0;
      }
      else if (50<nunits<=150)
      {
         amount = 0.80*nunits;
      }
      else if (150<nunits<=350)
      {
         amount = 1.00*nunits;
      }
      else
      {
         amount = 1.20*nunits;
      }
   }
public:
   void accept(string Cname,long int pnum,int nunit)
   {
      name = Cname;
      Pnumber = pnum;
      nunits = nunit;
      calc_amt();

   }
   void display()
   {
      cout<<"Name:"<<name<<endl;
      cout<<"Phone number:"<<Pnumber<<endl;
      cout<<"No of units:"<<nunits<<endl;
      cout<<"Amount:"<<amount<<endl;
   }

};
int main()
{
   ele_bill dir[2];
   string Cname;
   long int pnum;
   int nunit;
   for(int i=0;i<2;i++)
   {
      cout<<"Enter the name:";
      cin >> ws;
      getline(cin,Cname);
      cout<<"Enter phone number:";
      cin>>pnum;
      cout<<"Enter the units:";
      cin>>nunit;
      dir[i].accept(Cname,pnum,nunit);

   }
   for(int i=0;i<2;i++)
   {
      dir[i].display();

   }

return 0;
}