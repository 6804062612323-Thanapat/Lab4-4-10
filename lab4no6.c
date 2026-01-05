#include <stdio.h>

int main() {
    char c;
    int n;

    scanf(" %c %d", &c, &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%c", c);
        }
        printf("\n");
    }
    return 0;
}