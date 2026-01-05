#include <stdio.h>

int main (void)
{
int i;
i = 1;
//for (int i = 1; i <= 3; i++) {
while (i <= 3) {
    printf("Row %d: ", i);
    for (int j = 1; j<= 5; j++)
        printf("%3d", j);
    printf("\n");
    i++;
    }
return 0;
}