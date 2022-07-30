#include<stdio.h>
int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     int empNo,hours;
     float perHourRate,salary;
     scanf("%d%d%f",&empNo,&hours,&perHourRate);
     salary = hours * perHourRate;
     printf("NUMBER = %d",empNo);
     printf("\nSALARY = U$ %.2f",salary);
     printf("\n");
    return 0;
}
