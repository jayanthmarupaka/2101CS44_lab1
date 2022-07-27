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

void merge(int arr[], int l, int m, int r)
{
int i, j, k;
int n1 = m - l + 1;
int n2 = r - m;
int L[n1], R[n2];
for (i = 0; i < n1; i++)
L[i] = arr[l + i];
for (j = 0; j < n2; j++)
R[j] = arr[m + 1+ j];
i = 0;
j = 0;
k = l;
while (i < n1 && j < n2)
{
if (L[i] <= R[j])
{
arr[k] = L[i];
i++;
}
else
{
arr[k] = R[j];
j++;
}
k++;
}
while (i < n1)
{
arr[k] = L[i];
i++;
k++;
}
while (j < n2)
{
arr[k] = R[j];
j++;
k++;
}}
void mergeSort(int arr[], int l, int r)
{
if (l < r)
{
int m = l+(r-l)/2;
mergeSort(arr, l, m);
mergeSort(arr, m+1, r);
merge(arr, l, m, r);
}
}



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
        case 4:
        mergeSort(a,0,n-1);
        break;
        default:
        printf("Invalid");


    }
  for(int i=0;i<n;i++){
    printf("%d",a[i]);
  }
    return 0;
}
