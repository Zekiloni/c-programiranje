
#include<stdio.h>    
#include<stdlib.h>  

int main(){  
    int n, m, sum;    
    
    system ("cls");  // cisti konzolu
    printf("Upisite prvu cifru: \n");    
    scanf("%d", &n);   

    printf("Upisite drugu cifru: \n");  
    scanf("%d", &m); 

    sum = n + m;
    n = m;
    m = sum - n;
    printf("N je postao M: %d, M je Postao N", n, m);
   
    getch();
    
    return 0;  
}  
