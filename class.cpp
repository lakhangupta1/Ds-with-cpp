#include<iostream>
#include<string>
using namespace std;
class HumanBeing
{
    public:
    string name ;
    void   introduce()
    {
        cout<<"hi i am "<<name<<endl;
    }
};
int main()
{
    HumanBeing anil;
    anil.name="lakhan gupta";
    anil.introduce();

}