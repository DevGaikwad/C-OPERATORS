#include<stdio.h>
int main() {
    int a=50;
    int b=10;
    int sub= a-b;
    int mult =a*b;
    int div = a/b;
    int module =a%b;
    printf("sub %d\n", sub);
    printf("%d\n", mult);
    printf("%d\n", div);
    printf("%d\n",module );

    int a=20;
    int b=30;

    printf("%d\n", a==b);
          printf("%d\n", a !=b);
          printf("%d\n", a >b);
          printf("%d\n", a <b);
          printf("%d\n", a >=b);
          printf("%d\n", a <=b);

    //Assignment operators

    a += 10;
  //  a -=15;
  //  a*=10;
  //  a/=10;
  //  a %=10;
  //  a |=10;

   printf("%d\n", a);
 //Logical operator

    int x=50;
    int y=40;
    printf("%d\n", x==50 && y < 60 );  
      printf("%d\n", x ==50 || y > x );   
      printf("%d", !(x==50 || y > 60) );
    
    return 0;
}
