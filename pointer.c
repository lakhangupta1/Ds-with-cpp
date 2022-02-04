#include<stdio.h>
void main(){
    char a[]={"GOD"};
 char *p;
    p=a;
    ++*p;
    printf("%d%s",sizeof(a),p);
}