#include <stdio.h>

int main() {
    int num;
    int tab;

    printf("Digite um número:\n");
    scanf("%d", &num);

    for (tab = 1; tab <= 10; tab++) {
        printf("%d x %d = %d\n", num, tab, num * tab);
    }

    return 0;
}
