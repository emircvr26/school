#include <stdio.h>
#include <math.h>

int main(void){

    int firstSwitch, secondSwitch, thirdSwitch;
    printf("******************************\n");
    printf("1. Camera               2. GPS\n");    
    printf("******************************\n");
    scanf("%d", &firstSwitch);

    switch (firstSwitch)
    {
        case 1:
            printf("******************************\n");
            printf("1. Front               2. Bottom\n");    
            printf("******************************\n");
            scanf("%d", &secondSwitch);
            switch (secondSwitch){
                case 1:
                    printf("******************************\n");
                    printf("1. ON               2. OFF\n");    
                    printf("******************************\n");
                    scanf("%d", &thirdSwitch);
                    switch (thirdSwitch){
                        case 1:
                            printf("Front camera is ON\n");
                            break;
                        case 2:
                            printf("Front camera is OFF\n");
                            break;
                        default:
                            printf("Invalid operation\n");
                            break;
                    }
                    break;
                case 2:
                    printf("******************************\n");
                    printf("1. ON               2. OFF\n");    
                    printf("******************************\n");
                    scanf("%d", &thirdSwitch);
                    switch (thirdSwitch){
                        case 1:
                            printf("Bottom camera is ON\n");
                            break;
                        case 2:
                            printf("Bottom camera is OFF\n");
                            break;
                        default:
                            printf("Invalid operation\n");
                            break;
                    }
                    break;

            }
            break;
        case 2:
            printf("******************************\n");
            printf("1. ON               2. OFF\n");    
            printf("******************************\n");
            scanf("%d", &thirdSwitch);
            switch (thirdSwitch){
                case 1:
                    printf("GPS is ON\n");
                    break;
                case 2:
                    printf("GPS is OFF\n");
                    break;
                default:
                    printf("Invalid operation\n");
                    break;
            }
            break;
    }

    return 0;
}