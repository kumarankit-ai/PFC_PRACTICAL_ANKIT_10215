//Sum of digit
//Name- Ankit kumar prajapati 
// ERP - 10215


#include <stdio.h>
int main() {
    int arr[6] = {12, 45, 2, 67, 34, 9};
    int n = 6;
    int max = arr[0], min = arr[0];

    for(int i=1; i<n; i++) {
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }

    printf("Max = %d\nMin = %d\n", max, min);
    return 0;
}

//OUTPUT:
// Max = 67
// Min = 2