//write a program to get Two number from user and subract Them  and identify it is odd number
#include<stdio.h>
int getNumberFromUser(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    return n;
}
int subractTheNumbers(int n,int m){
    return n-m;
}
void identifyOddNumber(int z){
    if(z%2==0){
        printf("Given Number is not odd");
    }
    else{
        printf("Given Number is odd ");
    }
}
void main(){
    int n=getNumberFromUser();
    int m=getNumberFromUser();
    int z=subractTheNumbers(n,m);
    printf("Answer is %d\n",z);
    identifyOddNumber(z);
}
