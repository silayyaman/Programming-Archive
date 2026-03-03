#include <stdio.h>

int main(){
    float x1, x2, Result;
    char Islem;

    do{
        printf("Select the operation (+, -, /, *), press 'a' to exit: ");
        scanf(" %c", &Islem);

        if(Islem == 'a') {
            printf("Program terminated!\n");
            break;
        }

        if(Islem != '+' && Islem != '-' && Islem != '*' && Islem != '/') {
            printf("Invalid operation! Please try again.\n");
            continue;
        }

        printf("Enter two numbers: ");
        scanf("%f %f", &x1, &x2);

        switch(Islem){
            case '+':
                Result = x1 + x2;
                printf("Result: %.2f\n", Result);
                break;
            case '-':
                Result = x1 - x2;
                printf("Result: %.2f\n", Result);
                break;
            case '/':
                if (x2 != 0) {
                    Result = x1 / x2;
                    printf("Result: %.2f\n", Result);
                }else{
                    printf("Error: Undefined (Division by zero).\n");
                }
                break;
            case '*':
                Result = x1 * x2;
                printf("Result: %.2f\n", Result);
                break;
        }
    } while (1);
    return 0;
}
