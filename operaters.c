#include<stdio.h>
int main() {
  /*  int m =45;
    int s=45;
    int add= m+s;
    printf("Sum =%d\n", add);*/

    /*float a =15.95;
    float b =26.5;
    float Result =a + b;
    printf(" result is=%f", Result);*/

    /*int a=50;
    int b=10;
    int sub= a-b;
    int mult =a*b;
    int div = a/b;
    int module =a%b;
    printf("sub %d\n", sub);
    printf("%d\n", mult);
    printf("%d\n", div);
    printf("%d\n",module );*/


          int a =50;
          int b =40;
         /* printf("%d\n", a==b);
          printf("%d\n", a !=b);
          printf("%d\n", a >b);
          printf("%d\n", a <b);
          printf("%d\n", a >=b);
          printf("%d\n", a <=b);*/
   // out o(zero) indicates false value or  1(one) indicates true value.

       // ASSINGNMENT OPERATORS//

   //a += 10;
   //a -=15;
   //a*=10;
   //a/=10;
   //a %=10;
   //a |=10;
   

   //printf("%d\n", a);
   //printf("%d\n", a);
   // printf("%d\n", a);
   //printf("%d\n", a);
   //printf("%d", a);


         // LOGICAL OPERATORS     && || !  //

     // printf("%d\n", a==50 && b < 60 );  // writes true if bothe values are true else false.
      //printf("%d\n", a ==50 || b > a );   // write true any of them is true.
      //printf("%d", !(a==50 || b > 60) ); /* reverse the value if it is true it writes false. 
                                           // a=50 true and b < a is also true it shows out 0(zero) change any one value a==40 out come 1 (true)*/

                                        //UNIORY OPERATORS   ( SIZEOF)//
     /* printf("%d\n", sizeof(a));
      printf("%d\n", sizeof(b));
      float mark = 80.80;
      char me ='D';                                                                     
      double bal =4545;
      printf("%d\n", sizeof(mark));
      printf("%d\n", sizeof(me));
      printf("%d\n", sizeof(bal));*/


               // increment(++) & deciment(--)  - type 1 post incr   & pre incr// 
              /* printf("%d\n", a++);    //out 50
                printf("%d", a);   */    // out51
               // printf("%d\n", a--);   //out 50
               // printf("%d", a);       // out 49
               

               
                 // Bitwise oper &,|,^,>>,<<, !  to find binary --- 128,64,32,16,8,4,2,1
                 int d=20;
                 int e=30;
                  printf("%d\n", d & e);  // add only equal values

            printf("%d\n", d | e); //add all valuse

            printf("%d\n", d ^ e);  //add != valuse 

            printf("%d\n", d >> e);  // left shift by 30 because you take e 30

            printf("%d\n", d << e); // rigth shiftby 30 because you take e 30

          printf("%d\n", (~e));
               

                    

    return 0;
}