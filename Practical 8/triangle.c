// Right angled triangle
//Name- Ankit kumar prajapati 
// ERP - 10215
#include <stdio.h>

void triangle(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter height: ");
    scanf("%d", &n);

    triangle(n);
    return 0;
}
