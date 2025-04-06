#include <stdio.h>
#include <math.h>
//Jogom da Adivinhação Numerica
int main(){ 
    int num, chute;
        printf("Pense em um numero de 1 a 1023\n");
        printf("Agora me diga ele para que o programa tente adivinhar:\n");
        scanf("%d", &num);
        while(1){
            int min =1 , max = 1023;
            for (int i = 0; i < 10; i++){
                
                chute = (min + max)/2;
                char sinal;
                printf("O seu numero e >, < ou = a %d\n", chute );
                scanf("%s", &sinal);
                if(sinal == '='){
                    printf("adivinhei o numero %d em %d tentativas\n", chute, i + 1);
                    break;
                }
                else if (sinal == '<'){
                  max = chute -1; 
                }
                else if(sinal =='>'){
                  min = chute + 1;

                }
                if(i == 9){
                    printf("Infelizmente nao consegui adivinhar\n");
                }  
            }
            printf("Pense em um numero de 1 a 1023\n");
            printf("Agora me diga ele para que o programa tente adivinhar:(Flag numero menor que 1)\n");
            scanf("%d", &num);
            if (num<1)
            {
               break;
            }  
        }
}
