#include <stdio.h>

int main(void) {

    int hr, cr;

    printf("Ener hiest rainfall: \n");
    scanf("%d", &hr);

    printf("Ener current rainfall: \n");
    scanf("%d", &cr);

    if (cr > hr) {
        printf("Current rainfall is the hiest rainfall ever!\n");
    }

    if ( cr <= hr) {
        printf("Current rainfall is not the hiest railfall!\n");
    }
}