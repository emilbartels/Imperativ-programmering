#include <stdio.h>
#include <math.h>

//Prototype af binaryChar function
void binaryChar(char *operator, int *binary_char);

//Prototype af scan_data function
void scan_data(char *operator, double *operand, int *binary_char);

//main function
int main(void){
    int binary_char = 0;
    double akkumulator = 0.0, hoejre_operand;
    char operator;

    scan_data(&operator, &hoejre_operand, &binary_char);

    return 0;
}


//scan data function
void scan_data(char *operator, double *operand, int *binary_char){
//Scan af operator
    printf("Enter operator: ");
    scanf(" %c", &*operator);

//Tjekker om det er en unære operator. 
    binaryChar(operator, binary_char);

//sætter operand = 0.0 hvis der er en unære operator
if(*binary_char == 1){
    printf("Enter operand: ");
    scanf(" %lf", &*operand);
    }

else{
    *operand = 0.0;
}
}

/*
Du skal også have en funktion, do_next_op, som udfører den påkrævede operation: 
do_next_op skal have to input parametre (operator og operand) foruden akkumulatoren, 
som både skal kunne bruges til input og output (og som derfor skal være en pointer). 
Operanden ignoreres for unære operatorer. 
*/
void do_next_op(char operator, double operand, double *akkumulator, int *binary_char){
//Tjekker om der er unære eller binære operator
    binaryChar(operator, *binary_char);
}


void run_calculation(){

}


void binaryChar(char *operator, int *binary_char){
    //brug af if-statement til at tjekke om operator er binær, hvor variable binary_char bliver 1 hvis true
    if(*operator == '+' || *operator == '-' || *operator == '*' || *operator == '/' || *operator == '^'){
        *binary_char = 1;
    }
    //Sætter binary_char = 0, for at vise at operator ikke er binary, og dermed unære.
    else if(*operator == '#' || *operator == '%' || *operator == '!' || *operator == 'q'){
        *binary_char = 0;
    }
}