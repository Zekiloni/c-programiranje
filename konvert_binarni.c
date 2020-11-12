#include<stdio.h>    
#include<stdlib.h>  

int main(){  
    int a[10], n, i;    
    
    system ("cls");  // cisti konzolu
    printf("Upisite zeljeni broj: \n");    
    scanf("%d", &n);    
    int broj = n;

    for(i = 0; n > 0; i++)    
    {    
        a[i] = n % 2;    
        n = n / 2;    
    }   

    printf("Broj %d u binarnom obliku je \n", broj);    
    for(i = i - 1; i >= 0; i--)    
    {    
        printf("%d", a[i]);    
    }    

    getch();
    
    return 0;  
}  