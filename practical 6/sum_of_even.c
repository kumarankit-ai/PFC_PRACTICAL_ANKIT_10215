//sum of even number
//Name- Ankit kumar prajapati 
// ERP - 10215
#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        if(i % 2 != 0)
            continue;
        sum += i;
    }

    printf("Sum of even numbers = %d", sum);
    return 0;
}
