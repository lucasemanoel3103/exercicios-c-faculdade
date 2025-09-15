#include <stdio.h>

int main(){
    int nota;

    printf("Digite a sua nota: ");
    scanf("%d", &nota);

    if(nota >= 90){
        printf("Você tirou nota A!\n");
    }else if(nota >= 80 && nota <= 90){
        printf("Você tirou nota B!\n");
    }else if(nota >= 70 && nota <= 80){
        printf("Você tirou nota C!\n");
    }else{
        printf("Você tirou nota D!");
    }
}