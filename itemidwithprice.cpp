#include<iostream>
using namespace std;
class shoap{
    int itemid[100];
    int itemprice[100];
    int counter=0;
    public:
   void setitem(void);
   void display(void);


};
void shoap::display(void)
{
    int i;
    for(i=0;i<counter;i++)
    {
        cout<<"The item Id="<<itemid[i]<<".  price is="<<itemprice[i]<<endl;
        
    }
}
void shoap::setitem()
{
        cout<<"Enter the item Id"<<endl;
        cin>>itemid[counter];
        cout<<"Enter the item price"<<endl;
        cin>>itemprice[counter];
        counter++;
    
}

int main()
{     
    shoap lakhan;
    int i;
    for(i=0;i<5;i++)
    {
        lakhan.setitem();
    }
    lakhan.display();

}