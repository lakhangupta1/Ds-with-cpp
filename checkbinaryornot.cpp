#include<iostream>
#include<string>
using namespace std;
class binary
{  
   string s;
   public:
   void getting()
   {
       cout<<"Enter the string"<<endl;
       cin>>s;
   }
   void ons_complement();
   void display();
};
void binary::display()
{
    int i;
    for(i=0;i<s.length();i++)
    {
        cout<<" "<<s.at(i);
    }
}
void binary::ons_complement()
{
    int i;
    for(i=0;i<s.length();i++)
    {
        if(s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else 
        {
            s.at(i)='0';
        }
    }
}
int main()
{   
    binary lakhan;
    lakhan.getting();
    lakhan.ons_complement();
    lakhan.display();

}