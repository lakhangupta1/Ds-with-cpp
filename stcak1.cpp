#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int >st;
    
    st.push(5);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(6);
    st.push(7);
    st.push(8);
    st.push(9);
    int n=st.size();
    int t=n/2;
    while(--t){
        st.pop();
    }
    cout<<st.top()<<" ";



    return 0;
}