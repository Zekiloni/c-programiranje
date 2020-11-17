#include <stdio.h>

#include <math.h>

int main( int argc, char *argv[] )
{
    long int H ;
    int zcifra ,c ,p ;
    printf("Unesite H>1000 i c \n");
    scanf("%ld ", &H);
    scanf("%d", &c);
    while (H>=1000)
    {
       while (H!=0){
           zcifra = H % 10;
           if(zcifra == c){
               p = 1;
               break;
           }
           H = H / 10;
       }
       if (p == 1){
           printf("C se sadrzi u broju ");
       }
       else{
           printf("C se ne sadrzi u broju");
       }
    }

    return 0;
}