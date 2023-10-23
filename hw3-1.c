#include <stdio.h>

int main() {
    int num;
    int Prime = 1; // 預設為質數


    scanf("%d", &num);

    if (num <= 1) {
        Prime = 0;  // 1和負數不是質數
    } else {
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                Prime = 0;  // 如果能整除，則不是質數

            }
        }
    }

    if (Prime) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
