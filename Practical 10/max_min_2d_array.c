//Sum of digit
//Name- Ankit kumar prajapati 
// ERP - 10215

#include <stdio.h>
int main() {
    int arr[3][3] = {{5, 8, 2}, {9, 1, 7}, {4, 6, 3}};
    int max = arr[0][0], min = arr[0][0];

    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            if(arr[i][j] > max) max = arr[i][j];
            if(arr[i][j] < min) min = arr[i][j];
        }
    }

    printf("Max = %d\nMin = %d\n", max, min);
    return 0;
}

//OUTPUT:
// Max = 9
// Min = 1