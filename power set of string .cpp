#include<iostream>
using namespace std;
void power(string s ,int i, string op){
    if(i==s.length()){
        cout<<op<<" ";
        return;
    }
    power(s,i+1,op);
    op.push_back(s[i]);
    power(s,i+1,op);
}
int main(){
    string  s="abc";
    string  op="";
    int i=0;
    power(s,0,op);
    return 0;

}
