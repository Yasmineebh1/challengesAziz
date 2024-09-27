#include<stdio.h>

int main(){
    int i, n;

    printf("entrer un nombre: ");
    scanf("%d",&n);

    // while(n / 2 || n / n-1){
    //     printf("c\'\est pas un nombre premier");
    // }

        if(n / 2 && n / n-1)
            while(n % 2 != 0)
                printf("ce n\'\est pas un nombre premier");
        else
            printf("c\'\est  un nombre premier");

    }