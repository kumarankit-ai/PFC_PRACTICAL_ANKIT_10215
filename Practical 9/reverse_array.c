//Sum of digit
//Name- Ankit kumar prajapati 
// ERP - 10215


#include <stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    printf("Original array: ");
    for(int i=0; i<n; i++) printf("%d ", arr[i]);

   
    for(int i=0; i<n/2; i++) {
        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }

    printf("\nReversed array: ");
    for(int i=0; i<n; i++) printf("%d ", arr[i]);
    return 0;
}

//OUTPUT:
// Original array: 1 2 3 4 5
// Reversed array: 5 4 3 2 1