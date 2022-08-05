#include<iostream>
#include<stack>
using namespace std;
void middle(stack<int>&st,int totalsize){
    if((totalsize/2)+1==st.size())
    {
        cout<<"element is->"<<st.top()<<endl;
        return ;
    }
    int elemt=st.top();
    st.pop();
    middle(st,totalsize);
    st.push(elemt);
  



}
int main(){


    stack<int>st;
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);
    st.push(9);
    middle(st,st.size());


    return 0 ;

}