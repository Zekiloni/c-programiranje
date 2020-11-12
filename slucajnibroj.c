#include<stdio.h>    
#include<stdlib.h>  

int main(){  
    int n, m;    
    
    system ("cls");  // cisti konzolu
    printf("Upisite minimalnu cifru: \n");    
    scanf("%d", &n);   

    printf("Upisite maksimalnu cifru: \n");  
    scanf("%d", &m); 

    printf("broj: %d", slucajniBroj(n, m));
   
    getch();
    
    return 0;  
}  

int slucajniBroj(int min, int max)
{
   return min + rand() % (max + 1 - min);
}