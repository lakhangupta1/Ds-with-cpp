#include<iostream> 
using namespace std;
int main(){
    int i,j,n;
    cout<<"ENter the number ";
    cin>>n;
    i=1;
    int  value;
    while(i<=n){
        j=1;
        value=i;
       while(j<=i){
            cout<<" "<<value--;
            j++;
       }
       i++;
       cout<<"\n";
    }
}  
// also we can write;;;;;
/*


  i=1;
  while(i<=n){
      j=1;
      while(j<=i){
          cout<<i-j+1;
          j++;

      }
      cout<<endl;
      i++;
  }