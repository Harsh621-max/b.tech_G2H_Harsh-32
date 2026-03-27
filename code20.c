#include <stdio.h>

int main() {
    int num, n, qsum, r;

    printf("Armstrong Numbers from 1 to 100 are: ");
    for (num = 1; num <= 100; num++) {
        qsum = 0;
        n = num;

  
        
        while (n != 0) {
            r = n % 10;
           
            qsum = qsum + (r * r * r); 
            n = n / 10;
        }

        
        if (num == qsum) {
            printf("%d ", num);
        }
    }

    printf("\n");
    return 0;
}
