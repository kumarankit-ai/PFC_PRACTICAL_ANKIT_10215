//Sum of digit
//Name- Ankit kumar prajapati 
// ERP - 10215

#include <stdio.h>
int main() {
    int arr[3][3] = {{5, 8, 2}, {9, 1, 7}, {4, 6, 3}};
    int sum = 0;

    for(int i=0; i<3; i++) {
        sum += arr[i][i];  
    }

    printf("Sum of diagonal elements = %d\n", sum);
    return 0;
}

//OUTPUT:
// Sum of diagonal elements = 9