#include <stdio.h>
int fibonacci ( int n )
{  
    if ( n ==1 || n == 2)
      return 1;
    return  fibonacci ( n -1 ) + fibonacci ( n -2 ) ;
}
int main()

{
    int n ;
    printf ( "Введите n = ") ;
    scanf ( "%d" , &n ) ;
   for ( int i = 1; i <= n; i++) {
       printf ( " %d;" , fibonacci(i));
   }
printf( "\n") ;
return 0 ;

}