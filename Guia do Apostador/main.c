#include <stdio.h>
#include <stdlib.h>

int main()
{
    int R, B, total = 0, n, C, Nf, i=1,Result, W=0,L=0,Br= 0;
    
    printf("Boa sorte e jogue com atencao!!!!\n");
    while(i!=0){
    C = 1;
     while(C<=5){
         printf("Digite o %d numero:\n", C);
         scanf("%d", &n);
         total = total + n;
         C++;
     }
     printf("Digite o ultimo numero sorteado:\n");
     scanf("%d",&Nf);
        if(total%2 == 0 && Nf%2 == 0){
            printf("!!!ATENÇÃO!!!\n");
            printf("Soma: %d\n", total);
            printf("APOS %d\nJOGAR NO ----> VERMELHO\nCOM PROTECAO NO BRANCO\nMAX 2 GALES!!!!!\n",Nf);
            printf("Win: 1\nLoss:2\nBranco:3\n");
            scanf("%d", &Result);
                if(Result==1){
                    W++;
                }
                    else{
                        if(Result==2){
                            L++;
                        }
                            else{
                                if(Result==3){
                                    Br++;
                                }
                            }
                    }
        }
            else{
                if(total%2 == 1 && Nf%2 == 1){
                    printf("!!!ATENCAO!!!\n");
                    printf("Soma: %d\n", total);
                    printf("APOS %d\nJOGAR NO ----> PRETO COM PROTECAO NO BRANCO\nMAX 2 GALES!!!!!\n\n",Nf);
                    printf("Win: 1\nLoss:2\nBranco:3\n");
                    scanf("%d", &Result);
                        if(Result==1){
                            W++;
                        }
                            else{
                                if(Result==2){
                                    L++;
                                }
                                    else{
                                        if(Result==3){
                                            Br++;
                                        }
                                    }
                            }
                }
                    else{
                        printf("Soma: %d\n", total);
                        printf("\nANALIZAR TENDÃŠNCIA DA ROLETA!!!!!\n");
                    }
            }
        printf("Deseja continuar operando? \nSIM - 1\nNAO - 0\n");
        scanf("%d", &i);
        total = 0;
        n = 0;
            if(i==0){
                printf("!!!!RESULTADO DAS ENTRADAS!!!!\n");
                printf("Win: %d\nBranco: %d\nLoss: %d\n",W,Br,L);
                break;
            }
}

    return 0;
}


