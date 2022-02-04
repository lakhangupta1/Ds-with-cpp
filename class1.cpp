#include<iostream>
#include<string>
using namespace std;
class human
{
    public:
    string name ;
    void introduce()
    {
        cout<<"hi i am "<<name<<endl;
    }
};
int main()
{   
    human *anil=new human();
    anil->name="lakhan gupta";
    anil->introduce();
    return 0;

}