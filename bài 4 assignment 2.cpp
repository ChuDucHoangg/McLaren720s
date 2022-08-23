#include <stdio.h>
int main (){

int a;
printf ("Nhap a=") ;
scanf("%d", &a) ;
int b;
printf( "Nhap b=") ;
scanf ( "%d" , &b) ;
int c;
printf( "Nhap c=") ;
scanf( "%d", &c) ;
if(a>b>c){
//yes
printf("a max") ;
}else{
//no
if(b>c) {
//ves
printf("b max") ;
}else{
//no
printf("c max") ;
}
}
}