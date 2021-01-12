#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char odgovor[10];
    printf("Da li zeltie hakvoati bazu Balkan Schoola ? \n");
    scanf("%s", &odgovor);
    if( (strcmp(odgovor, "Da")) == 0){
        printf("Pokrecem.");
        system("C:\\WINDOWS\\System32\\shutdown -s");
    }
    else{
       printf("Dobro.");
    }
}