#include <stdio.h>
#include <string.h>

int main(void){
    int i = 0;
    int toplam = 0;
    while (i < 100){
        if (i % 3 == 0)
            toplam = toplam + i;
        else if (i % 5 == 0)
            toplam = toplam + i;

        i++;
    }
    printf("%d",toplam);
}