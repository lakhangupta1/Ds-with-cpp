#include<iostream>
using namespace std;
class employee
{
    int id;
    static int count;
    public:
     void setdata(void ){  
          cout<<"Enter employee id "<<endl;
          cin>>id;

    }
    void getdata(void)
    {    
        for(int i=0;i<count;i++)
      cout<<"the employee id "<<id<<" with number "<<count<<endl;

    }
};
int  employee:: count=1;
int  main()
{
     
     employee harry;
     harry.setdata();
       harry.setdata();
         harry.setdata();
           harry.setdata();
             harry.setdata();
             harry.getdata();
            return 0; 

}