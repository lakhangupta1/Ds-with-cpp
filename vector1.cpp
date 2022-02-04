#include<iostream>
#include<vector>
using namespace std;
int main(){
        

    vector<int>v;
    v.push_back(1);  
    v.push_back(2);  
    v.push_back(3);  
    v.push_back(4);       
    cout<<"capacity of vector is "<<v.capacity()<<endl;
    cout<<"2 an element of vector "<<v.at(2)<<endl;
    cout<<"size of vector-"<<v.size()<<endl;
    cout<<"front element is ->"<<v.front()<<endl;
    cout<<"last element is ->"<<v.back()<<endl;
 //   cout<<"poped element is "<<v.pop_back()<<endl;   

    cout<<"---------------------------------------"<<endl;
    cout<<"poped element is the "<<endl;
    for(int i:v){
            cout<<i<<endl;

    }
    cout<<"before clear of vector "<<endl;
    cout<<v.size()<<endl;
    v.clear();
    cout<<"after the clear of vector  "<<v.size()<<endl;
    return 0; 
}