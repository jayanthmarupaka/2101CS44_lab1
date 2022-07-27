#include <stdio.h>
//#include <stdbool.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;
    }
}
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}
void bubbleSort (int arr[], int n) // Arr is an array of size N.
{
    for ( int i=0; i<=n-1;i++)// N elements => (N-1) pass
    {
    // Swap adjacent elements of Arr[1:(N-I)]such that
    // largest among { Arr[1], Arr[2], ..., Arr[N-I] } reaches to Arr[N-I]
        //bool noSwap = true; // Check occurrence of swapping in inner loop
        int flag =0;
        for ( int j=0;j<=n-1;j++ ){ // Execute the pass
        {
            if ( arr [j] > arr[j+1] )
            {
                swap( &arr[j], &arr[j+1] );
                flag=1;
            }
        }
        if (flag=0) // exit the loop
            break;
    }
}}

int main()
{
    int k,n;
    printf("enter the option(1 2 3 4 5): ");
    scanf("%d",&k);
    printf("size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of array:\n");
    for(int i=0;i<n;i++){
       scanf("%d",&a[i]);
    }
    switch(k){
        case 1:
        insertionSort(a,n);
        break;
        case 2:
        selectionSort(a,n);
        break;
        case 3:
        bubbleSort(a,n);
        break;
        default:
        printf("Invalid");


    }
  for(int i=0;i<n;i++){
    printf("%d",a[i]);
  }
    return 0;
}
