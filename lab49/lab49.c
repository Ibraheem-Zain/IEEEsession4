# include <stdio.h>

int *sumfun (int*num1,int*num2);
int sum;

int main (){
    int num1,num2;
    int *sum;
    printf ("enter two numbers to get the sum for:\n");
    scanf("%d %d",&num1,&num2);
    
    sum = sumfun (&num1,&num2);
    printf ("the sum of entered numbers is: %d\n",*sum);
}

int *sumfun (int *num1,int *num2){
    sum = *num1 + *num2;
    return &sum;
}