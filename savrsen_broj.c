#include <stdio.h>


int main() {
    int n, i, suma = 0;
    printf("n = ");
    scanf("%d", &n);
    
    for(i = 1; i < n; i++)
    {
        if(n % i == 0)
            suma+=i;
    }

    if (suma == n)
        printf("Broj %d jeste savrsen broj. \n", n);
    else 
        printf("Broj %d nije savrsen broj. \n", n);

    getch();
    
    return 0;
}