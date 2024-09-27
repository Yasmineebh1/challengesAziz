#include<stdio.h>

int main(){
    int age;

    printf("entrer votre age: ");
    scanf("%d",&age);

    if(age >= 18)
        printf("vous etes eligible pour voter");
    else
        printf("vous n\'\etes pas eligible pour voter");

}