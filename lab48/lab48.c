# include <stdio.h>

int main (){
    int num1,num2;
    int *p = &num1;
    int *q = &num2;

    printf ("enter the frist number: \n");
    scanf ("%d",&(*p));
    printf ("enter the second number: \n");
    scanf ("%d",&(*q));
    int sum = (*p) + (*q);

    printf ("the sum of entered numbers is: %d\n",sum);
}