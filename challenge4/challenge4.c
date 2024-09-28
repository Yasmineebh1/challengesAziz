#include<stdio.h>

int main(){
    int t[10],i,a,maxim,minim;


        
    for(i = 0;i < 5;i++){
        printf("entrer entier nr %d:", i+1);
        scanf("%d",&t[i]);
    }
    maxim = t[0];
   
    for(i = 1;i < 5; i++){
        if(maxim > t[i]){
            maxim = t[i];
            
        }
       
        
    }
     printf("le plus grand est:%d\n",maxim);
     for(i = 1;i < 5; i++){
        if(minim < t[i]){
            minim = t[i];
            
        }
       
        
    }
     printf("le plus petit est:%d",minim);
   