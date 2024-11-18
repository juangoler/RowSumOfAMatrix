#include <stdio.h>

int main() {
    int matriz[4][8], somalinha[4] = {0};

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 8; j++) {
            scanf("%d", &matriz[i][j]);
            somalinha[i] += matriz[i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 8; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("Soma da linha %d: %d\n", i+1, somalinha[i]);
    }

    return 0;
}
