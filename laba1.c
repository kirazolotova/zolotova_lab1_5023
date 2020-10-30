#include <stdio.h>

int main()
{ 
  int a = 0 , b = 1 , c = 1 , n = 2;
    while (c <= 1000 )  
      {
       c = a + b ;
       a = b ;
       b = c ;
       n++ ;
    

   }
       printf ( "%d" , n ) ;
    return 0 ;
 }
 