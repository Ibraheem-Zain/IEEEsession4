# include <stdio.h>

int *before_max(int arr[],int *ptr);
int max2;

int main (){
    int numElements,*ptr = &numElements;

    printf ("enter the number of elements:\n");
    scanf ("%d",ptr);
    
    int arr[*ptr];
    int *ptr1 = &arr[0];
    printf ("enter the elements:\n");
    for(int i = 0; i< *ptr; ++i){
        printf ("element-%d: ",i+1);
        scanf ("%d",ptr1);
        ptr1++;
    }

    int *ptr2 = before_max (arr,ptr);
    printf ("the second largest element is: %d\n",*ptr2);
}

int *before_max(int arr[],int *ptr){
     int max1;
     int *ptr1 = &max1;
     int *ptr2 = &max2;
     *ptr1 = arr[0];
     for (int i = 1; i < *ptr; ++i){
        if (arr[i] > *ptr1){
            *ptr2 = *ptr1;
            *ptr1 = arr[i];          
        }
        else if (arr[i] > *ptr2 && arr[i] != *ptr1){
            *ptr2 = arr[i];
        }
     }
     return &max2;
}