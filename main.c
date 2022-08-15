#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float a;

  printf("Insira o seu peso em quilos: ");
  scanf("%f", &a);

  float b;
  
  printf("Insira sua altura em metros: ");
  scanf("%f", &b);

  float c = a / (b*b);

  if(c <= 18.4){
    printf("Você está abaixo do peso");
  } else if(c <= 24.9){
    printf("Peso normal");
  }else if(c <= 29.9){
    printf("Você está com sobre peso");
  }else if(c <= 34.9){
    printf("Você está com obesidade Grau 1");
  }else if(c <= 39.9){
    printf("Você está com obesidade Grau 2");
  }else{
    printf("Você está com obesidade Grau 3");
  }
  
  return 0;
}