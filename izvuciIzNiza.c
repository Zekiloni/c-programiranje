#include <stdio.h>
int main() {
     int niz[100], n,sem=0;
     int i, j, k;

     printf("Upisi maksimalni broj elemenata u nizu: ");
     scanf("%d",&n);
     printf("Upisi %d elemente niza :\n", n);

     for(i = 0; i < n; i++)
     {
          printf("Element - %d : ", i);
          scanf("%d", &niz[i]);
     }

     printf("\nUnikatni elementi u nizu su (koji se ne ponavljaju): \n");

     for(i = 0; i < n; i ++)
     {
          sem = 0;
          for(j = 0,k = n; j < k + 1; j ++)
          {
               if (i != j)
               {
                    if(niz[i] == niz[j])
                    {
                         sem ++;
                    }
               }
          }
          if(sem == 0)
          {
               printf("%d ",niz[i]);
          }
     }
     printf("\n\n");
}