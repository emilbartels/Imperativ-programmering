#include <stdio.h>
#include <math.h>

//Prototype af scan_data function
int scan_data(char *operator_pointer, double *operand_pointer, int *quit);

//Prototype af do_next_op
void do_next_op(char operator, double operand, double *akkumulator);

//Prototype af run_calculation function
void run_calculation(char operator, double operand, double *akkumulator_pointer, int *quit);


//main function
int main(void){
    int quit = 0;
    double akkumulator = 0.0, hoejre_operand;
    char operator;
    while(quit != 1){
        run_calculation(operator, hoejre_operand, &akkumulator, &quit);
    }
    printf("Det sidste resultat er følgende: %lf\n", akkumulator);
    return 0;
}


//scan data function
int scan_data(char *operator_pointer, double *operand_pointer, int *quit){
    printf("Enter operator: ");
    scanf(" %c", operator_pointer);

//Brug af if-statement for at vælge hvornår operator er unære eller binære.
    if(*operator_pointer == '+' || *operator_pointer == '-' || *operator_pointer == '*' || *operator_pointer == '/' || *operator_pointer == '^'){
        printf("Enter operand: ");
        scanf(" %lf", operand_pointer);  
        return 0;
    }
    else if(*operator_pointer == '#' || *operator_pointer == '%' || *operator_pointer == '!'){
        *operand_pointer = 0.0;
        return 0;
    }
    else if(*operator_pointer == 'q'){
        *quit = 1;
        return 1;
    }
    else{
        printf("Du har indtastet forkert operator\n");
        return 0;
    }
    
}

void do_next_op(char operator, double operand, double *akkumulator_pointer){
    switch(operator){
//Cases for binære operator
        case '+':
            *akkumulator_pointer = *akkumulator_pointer + operand;
            break;
        case '-':
            *akkumulator_pointer = *akkumulator_pointer - operand;
            break;
        case '*':
            *akkumulator_pointer = *akkumulator_pointer * operand;
            break;
        case '/':
            if(operand == '0'){
                *akkumulator_pointer = *akkumulator_pointer;
            }
            else{
                *akkumulator_pointer = *akkumulator_pointer / operand;
            }
            
            break;
        case '^':
            *akkumulator_pointer = pow(*akkumulator_pointer, operand);
            break;
//cases for unære operator
        case '#':
            if(*akkumulator_pointer < 0){
                *akkumulator_pointer = *akkumulator_pointer;
            }
            else{
            *akkumulator_pointer = sqrt(*akkumulator_pointer);
            }
            break;
        case '%':
                *akkumulator_pointer = (-1 * *akkumulator_pointer);
            break;
        case '!':
            *akkumulator_pointer = 1 / *akkumulator_pointer;
            break;
    }
}


void run_calculation(char operator, double operand, double *akkumulator_pointer, int *quit){
    scan_data(&operator, &operand, quit);
    do_next_op(operator, operand, akkumulator_pointer);
    printf("\nResultet er følgende: %lf\n", *akkumulator_pointer);
}