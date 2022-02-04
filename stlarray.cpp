#include<iostream>
#include<array>
using namespace std;
int main(){
    int basicarray[]={1,2,3,4};
    array<int,4>a={1,2,3,4};          //this is for the stl array in which predefine int #include<array>
    int size=a.size();
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<endl;
    }
}