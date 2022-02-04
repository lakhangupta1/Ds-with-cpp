#include<iostream>
#include<string>
using namespace std;
class human{
    private:
    int age1=0 ;
    string name1="noname" ;
    public:
    human()
    {   cout<<"constructure without name and age "<<endl;
        cout<<"the age is "<<age1<<endl;
        cout<<"the name is "<<name1<<endl;
    }
    human(string name )
    {    
        cout<<"constructure only with name "<<endl;
        cout<<"the age is "<<age1<<endl;
        name1=name;
        cout<<"the name is "<<name1<<endl;
        cout<<endl;
        
    }
    human(string name1="nomae" ,int age1=0 )
    {    cout<<"constructer the with anme and"<<endl;
      //cout<<"the name is "<<name<<endl<<"the age is "<<age1<<endl;
    }
    void display()
    {
        cout<<name1<<endl<<age1;
    }
};
int main()
{
   human any("alkhan ",35);
   any.display();
}