#include "equation_operation.h"
#include "calculator_arithmetic.h"
#include "calc_bmi_area.h"
#include "roots_cubes.h"


/* Status of the operation requested */
#define VALID   (1)
#define INVALID (0)

/* Calculator operation requested by user*/
unsigned int calculator_operation = 0;

/* Operands on which calculation is performed */
int calculator_operand1 = 0;
int calculator_operand2 = 0;
int calculator_operand3= 0;
//double calculator_operand4= 0;


/* Valid operations */
enum operations{ ADD=1, SUBTRACT, MULTIPLY, DIVIDE, EXIT };

/* Display the menu of operations supported */
void calculator_menu(void);
/* Verifies the requested operations validity */
int valid_operation(int operation);


/* Start of the application */
int main(int argc, char *argv[])
{
    printf("\n****Calculator****\n");
    /*while(1)
    {
        calculator_menu();
        //equation();
    }*/
}

void calculator_menu(void)
{
    printf("\nAvailable Operations\n");
    printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. bmi\n6. areac\n7. arear\n8. areas\n 9. equation\n 10. square\n 11. cube\n 12. squareroot\n 13.cubroot\n 14. Exit");
    printf("\n\tEnter your choice\n");
   
     //__fpurge(stdin);
    scanf("%d", &calculator_operation);

    if(EXIT == calculator_operation)
    {
        printf("\nThank you. Exiting the Application\n");
        exit(0);
    }

    
        
    
    switch(calculator_operation)
    {
        case ADD:
            printf("\n\t%d + %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            sum(calculator_operand1, calculator_operand2));
            
           // __fpurge(stdin);
            getchar();
            break;
        case SUBTRACT:
            printf("\n\t%d - %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            sub(calculator_operand1, calculator_operand2));
            
           // __fpurge(stdin);
            getchar();
            break;
        case MULTIPLY:
            printf("\n\t%d * %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            mul(calculator_operand1, calculator_operand2));
            
          //  __fpurge(stdin);
            getchar();
            break;
        case DIVIDE:
            printf("\n\t%d / %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            divide(calculator_operand1, calculator_operand2));
            
           // __fpurge(stdin);
            getchar();
            break;
        case 5:
                 bmi(calculator_operand1, calculator_operand2);
                break;
        case 6:
                 areac(calculator_operand1);
                break;
        case 7:
                arear(calculator_operand1, calculator_operand2);
                break;
        case 8:
                 areas(calculator_operand1);
                break;
        case 9:
                 equation(calculator_operand1,calculator_operand2,calculator_operand3);
                 break;
        case 10:
                square(calculator_operand1);
                break;
        case 11:
                 cube(calculator_operand1);
                break;
        case 12:
                squarroot(calculator_operand1);
                break;
        case 13:
                cubroot(calculator_operand1);
                break;

        
        case 14:
            exit(0);
            break;
        default:
            printf("\n\t---It should never come here---\n");
    }
}

int valid_operation(int operation)
{
    /* Check if the operation is a valid operation */
    return ((ADD <= operation) && (EXIT >= operation)) ? VALID: INVALID;
}





