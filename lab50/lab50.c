# include <stdio.h>

void max (int *ptr1,int *ptr2);

int main (){
    int num1,*ptr1=&num1;
    int num2,*ptr2=&num2;
    printf ("enter the frist numbers:\n");
    scanf ("%d",ptr1);
    printf ("enter the second numbers:\n");
    scanf ("%d",ptr2);

    max(ptr1,ptr2);
}

void max (int *ptr1,int *ptr2){
     if (*ptr1 > *ptr2){
        printf ("%d is the maximum number.\n",*ptr1);
     }
     else{
        printf ("%d is the maximum number.\n",*ptr2);
     }
}