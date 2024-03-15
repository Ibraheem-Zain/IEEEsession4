# include <stdio.h>

int *shift (int arr[],int *size);

int main (){
   int size = 0,*ptr = &size;
   printf ("enter the number of elements:\n");
   scanf ("%d",ptr);

   int arr[*ptr];
   int *arrptr = &arr[0];
   printf ("enter the elements:\n");
   for (int i = 0; i < *ptr; ++i){
      printf ("element-%d: ",i+1);
      scanf ("%d",arrptr);
      ++arrptr;
   }

   arrptr = &arr[0];
   printf ("the values before shifting are:\n");
   for (int i = 0; i < *ptr; ++i){
      printf ("element %d = %d\n",i+1,*arrptr);
      ++arrptr;
   }

   arrptr = shift (arr,ptr);

   printf ("the values after shifting are:\n");
   for (int i = 0; i < *ptr; ++i){
      printf ("element %d = %d\n",i+1,*arrptr);
      ++arrptr;
   }

}

int *shift (int arr[],int *size){
     int *arrptr = &arr[0];
     int backup = *arrptr;
     for (int i = 1; i < *size; ++i){
         *arrptr = *arrptr+1;
         ++arrptr;
     }
     arr[*size-1] = backup;
     arrptr = &arr[0];
     return arrptr;
}