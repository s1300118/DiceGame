#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char name[50];
    printf("What is your name?\n");
    scanf("%s",&name);
    printf("Hello, %s\n",name);
    srand(time(NULL));
    int total = 0;
    int tmp;
    printf("Rolling dice...\n");
    for (int i = 1; i <= 2; i++) {
        tmp = rand() % 6 + 1;
        printf("Dice %d: %d\n", i, tmp);
        total += tmp;
    }
    printf("Total value: %d\n", total);
    if(total>7)printf("%s won!\n",name);
    else printf("%s lost!\n",name);
    
    return 0;
}