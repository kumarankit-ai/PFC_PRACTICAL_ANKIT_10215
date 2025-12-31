//Sum of digit
//Name- Ankit kumar prajapati 
// ERP - 10215

#include <stdio.h>
int main() {
    int arr[3][3] = {{5, 8, 2}, {9, 1, 7}, {4, 6, 3}};

    for(int i=0; i<3; i++) {
        int rowSum = 0;
        for(int j=0; j<3; j++) {
            rowSum += arr[i][j];
        }
        printf("Sum of row %d = %d\n", i+1, rowSum);
    }
    return 0;
}

//OUTPUT:
// Sum of row 1 = 15
// Sum of row 2 = 17
// Sum of row 3 = 13