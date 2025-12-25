//1.Print numbers from a to b
//Name- Ankit kumar prajapati 
// ERP - 10215
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter a and b: ");
    scanf("%d%d",&a,&b);

    for(int i = a; i <= b; i++) {
        printf("%d ", i);
    }
    return 0;
}
