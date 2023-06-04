#include <stdio.h>
#include <stdlib.h>


int main() {
    char name[10];

    printf("Insert your name: ");
    scanf("%s", &name);

    printf("Hello %s, how are you?", name);

    return 0;
}
