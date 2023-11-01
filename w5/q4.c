#include <stdio.h>
#include <math.h>

int main(void){

    int firstSwitch, secondSwitch, thirdSwitch;
    printf("******************************\n");
    printf("1. Camera               2. GPS\n");    
    printf("******************************\n");
    scanf("%d", &firstSwitch);

    if (firstSwitch == 1)
    {
            printf("******************************\n");
            printf("1. Front               2. Bottom\n");    
            printf("******************************\n");
            scanf("%d", &secondSwitch);
            if (secondSwitch==1){
                    printf("******************************\n");
                    printf("1. ON               2. OFF\n");    
                    printf("******************************\n");
                    scanf("%d", &thirdSwitch);
                    if (thirdSwitch==1)
                            printf("Front camera is ON\n");
                    else if (thirdSwitch==2)
                            printf("Front camera is OFF\n");
                    else 
                            printf("Invalid operation\n");
                    }
            else if (secondSwitch==2){
                    printf("******************************\n");
                    printf("1. ON               2. OFF\n");    
                    printf("******************************\n");
                    scanf("%d", &thirdSwitch);
                    if (thirdSwitch==1)
                        printf("Bottom camera is ON\n");
                    else if (thirdSwitch==2)
                        printf("Bottom camera is OFF\n");
                    else 
                        printf("Invalid operation\n"); 
                    }

            }
    else if (firstSwitch==2){
            printf("******************************\n");
            printf("1. ON               2. OFF\n");    
            printf("******************************\n");
            scanf("%d", &thirdSwitch);
            if (thirdSwitch==1)
                printf("GPS is ON\n"); 
            else if (thirdSwitch==2)
                printf("GPS is OFF\n");
            else 
                printf("Invalid operation\n");
            }
    return 0;
}

    
