//Sum of digit
//Name- Ankit kumar prajapati 
// ERP - 10215


#include <stdio.h>
int main() {
    int arr[7] = {10, 3, 5, 8, 12, 7, 6};
    int n = 7, sum = 0;

    for(int i=0; i<n; i++) {
        if(arr[i] % 2 == 0) sum += arr[i];
    }

    printf("Sum of even elements = %d\n", sum);
    return 0;
}

//OUTPUT:
// Sum of even elements = 36