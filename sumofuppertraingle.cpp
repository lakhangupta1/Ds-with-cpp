#include<iostream>
using namespace std;
int sumofupper(int a[3][3]);
int sumof_lower(int a[3][3]);
int main(){
  
  int a[3][3];
  for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
          cin>>a[i][j];
      }
  }

int sum=sumofupper(a);
cout<<sum<<"  this is sum of upper  "<<endl;

int sumoflower=sumof_lower(a);
cout<<sumoflower<<" this is sum of lower"<<endl;

    return 0;

}
int sumofupper(int a[3][3]){
    int sum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<=i;j++){
          sum+=a[i][j];
        }
    }
    return sum;
}
int sumof_lower(int a[3][3]){
    int sum=0;
    for(int i=0;i<3;i++){
        for(int j=i;j<3;j++){
            sum+=a[i][j];
        }
    }
    return sum;

}