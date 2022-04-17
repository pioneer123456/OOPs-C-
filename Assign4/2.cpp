//Make above program for 5 customers (Use Array of Objects)
// Name: Deepak Pandey
#include <bits/stdc++.h>
using namespace std;
class product{
private:
   int pid;
   string pname;
   float pcp,psp,margin;
   string Remark;
public:
   void getdetails(int pid, string pname,float pcp,float psp)
   {
      product::pid = pid;
      product::pname = pname;
      product::pcp = pcp;
      product::psp = psp;
      set_remark();

   }
   void set_remark()
   {
       margin = psp-pcp;
      if (margin>0)
        Remark.append("Profit");
      else
        Remark.append("Loss");
   }
   void setdetails()
   {
      cout<<"Product id:"<<pid<<endl;
      cout<<"Product name:"<<pname<<endl;
      cout<<"Selling Price:"<<psp<<endl;
      cout<<"Cost price:"<<pcp<<endl;
      cout<<"Margin:"<<margin<<endl;
      cout<<"remark:"<<Remark<<endl;
   }

};
int main()
{
   product dir[2];
   int pid;
   string pname;
   float pcp,psp;
   for(int i=0;i<2;i++)
   {
      cout<<"Enter the Product id:";
      cin >> pid;
      cout<<"Enter Product Name:";
      cin>>pname;
      cout<<"Enter the cost price:";
      cin>>pcp;
      cout<<"Enter the Selling price:";
      cin>>psp;
      dir[i].getdetails(pid,pname,pcp,psp);

   }
   for(int i=0;i<2;i++)
   {
      dir[i].setdetails();

   }

return 0;
}