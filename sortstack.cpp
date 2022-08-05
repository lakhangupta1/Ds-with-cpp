#include<iostream>
#include<stack>
using namespace std;
void sortstack(stack<int>&st,int item){
    if(st.empty()==true){
        st.push(item);
        return;

    }
    int element;
    if(st.top()>item){
         element=st.top();
        st.pop();
        sortstack(st,item);
    }
    else{
        st.push(item);
        return ;
    }
    st.push(element);
}
void sstack(stack<int>&st){
    if(st.empty()==true)
    return ;
    int item=st.top();
    st.pop();
    sstack(st);
    sortstack(st,item);
}
int main(){
    stack<int >st;
    st.push(3);
    st.push(2);
    st.push(1);
    st.push(8);
    st.push(6);
    st.push(0);

    sstack(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;


}