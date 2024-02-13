#include<stdio.h>
void main (){
    int a,b,gcd;
    scanf("%d %d",&a,&b);
    for (int i=1; a<=i && b<=i; i++){
 if ( a%i == 0 && b%i == 0){
        gcd=i;
   }}
   printf("The GDC of %d and %d is :%d" ,a ,b ,gcd);

    }