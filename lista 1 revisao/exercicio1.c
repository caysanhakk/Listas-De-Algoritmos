#include <stdio.h> 

int main(){
    float altura; 
    printf("Digite a altura: \n");
    scanf("%f", &altura); 
    if(altura <= 1.50){
        printf("A pessoa eh: muito baixa\n"); 
    }else{
        if(alt >1.50 && alt <= 1.60){
        printf("O individuo e: baixa\n"); 
        }else{
            if(altura > 1.60 && altura <= 1.80){
                printf("A pessoa eh: mediana\n"); 
            }else{
                printf("A pessoa eh: alta\n"); 
            }
        }
    }
          
    return 0; 
}
