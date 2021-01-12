#include <stdio.h>

int main( int argc, char *argv[] )
{
    int broj, j;
    scanf("%d", &broj);
    for(int i = 1; i <= broj; i++) {
        for(j = 2; j <= broj/2; j++ ) {
            if(broj % j == 0)
            { return 0; }
        }
        printf(" broj %d \n", j);
    }
}
