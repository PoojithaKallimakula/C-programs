#include<stdio.h>
int main(){
    int age;
    printf("enter the age");
    scanf("%d",&age);
    (age>=18)?(printf("eligible to vote")):(printf("not eligible to vote"));
    return 0;
}
