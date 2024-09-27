#include<stdio.h>

int main(){
    int t[100],i,a,max;

    
    for(i = 0; i < 5; i++){
         printf("entrer entier %d:",i+1);
            scanf("%d",&t[i]);}

    
        for(i = 0; i < 5; i++)
        {
            if(t[i + 1] > t[i]){
                printf("le plus petit est %d",t[i]);
                break;
                
            }
            else
                printf("le plus grand est %d",t[i]);
        }

}
