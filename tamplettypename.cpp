#include<iostream>
using namespace std;
template<typename x>
x abso(x n){
    return (n<0)?-n:n;
}
int main(){
    int i=5;
    int j=-5;
    double d1=-122;
    double long k=-45.9;
    cout<<" i= "<<abso(i)<<endl;
    cout<<" j= "<<abso(j)<<endl;
    cout<<" d1= "<<abso(d1)<<endl;
    cout<<" k= "<<abso(k)<<endl;
   // cout<<" i= "<<abso(i)<<endl;


   return 0;

}