# include <stdio.h>

void fill_array (void);

int main (){

    fill_array ();

}
void fill_array (void){
    int i;
    int numElements;
    int *ptr = &numElements;
    printf ("enter the number of elements:\n");
    scanf ("%d",ptr);

    int arr[*ptr];
    int *indexNum = &arr[0];
    printf ("enter the elements:\n");
    for (i=0; i<*ptr; ++i){
        printf ("element-%d: ",i+1);
        scanf("%d",indexNum);
        indexNum++;
    }

    indexNum = &arr[0];
    printf("the elements you entered are: ");
    for (i= 0; i < *ptr; ++i){
        printf("%d ",*indexNum);
        indexNum++;
    }
    printf ("\n");
}