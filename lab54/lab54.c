# include <stdio.h>

void order (int arr[],int *ptr);

int main (){
    int numElement,*ptr=&numElement;
    printf ("enter the number of elements:\n");
    scanf ("%d",ptr);

    int arr[*ptr];
    int *ptr1 = &arr[0];
    printf ("enter the elements:\n");
    for (int i=0; i<numElement; ++i){
        printf ("element-%d: ",i+1);
        scanf("%d",ptr1);
        ++ ptr1;
    }

    order (arr,ptr);

}

void order (int arr[],int *ptr){
    int i,j;
    int *ptr1 =&i;
    int *ptr2 =&j;

    for (*ptr1 = 0; *ptr1 < *ptr-1; ++ *ptr1){
        for (*ptr2 =0; *ptr2 < *ptr-1; ++ *ptr2){
            if ( arr [*ptr2]>arr [*ptr2+1]){
                int backup = arr[*ptr2];
                arr[*ptr2] = arr[*ptr2+1];
                arr[*ptr2+1] = backup;
            }
        }
    }

    printf("the right order is: ");
    for (*ptr1= 0; *ptr1 < *ptr; ++ *ptr1){
        printf("%d ",arr[*ptr1]);
    }
}