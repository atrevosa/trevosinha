#include <stdio.h>

int main (){

     int num1, num2;
     int soma, mult, subt, div;

     //entrada de dados
printf("Entre com o primeiro número: \n");
scanf("%d", &num1);
printf("Entre com o segundo número: \n");
scanf("%d", &num2);

    //operação
     soma = num1 + num2;
     subt = num1 - num2;
     mult = num1 * num2;
     div = num1 / num2; 

//operação com dados

printf("A soma dos números é: %d \n", soma);
printf("A subtração dos números é: %d \n", subt);
printf("A multiplicação dos números é: %d \n", mult);
printf("A divisão dos números é: %d \n", div);
            
   
    return 0;

}
