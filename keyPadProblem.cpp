#include<iostream>
using namespace std;
void genrate(int index,string input,string output,string map[]){
    if(index==input.size()){
        cout<<output<<" ";
        return ;
    }
    int x=input[index]-'0';
    string val=map[x];
    if(val==""){
        genrate(index+1,input,output,map);
    }
    else{
           for(int i=0;i<val.size();i++){
            genrate(index+1,input,output+val[i],map);
           }
    }

}
int main(){
    string input;
    cin>>input;
    string output="";
    string map[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    genrate(0,input,output,map);

    return 0;

}
