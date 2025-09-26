#include <stdio.h>

int main(void) {
    int digit_count[10] = {0};  
    long n;

    printf("Entrez un nombre : ");
    scanf("%ld", &n);

    if (n < 0) {
        n = -n;
    }


    if (n == 0) {
        digit_count[0] = 1;
    }

    
    while (n > 0) {
        int digit = n % 10;
        digit_count[digit]++;
        n /= 10;
    }

    
    printf("Chiffre :     ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", i);
    }
    printf("\n");

    
    printf("Occurrences : ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", digit_count[i]);
    }
    printf("\n");

    return 0;
}






