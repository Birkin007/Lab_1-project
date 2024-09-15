#include <stdio.h>
#include <string.h>

void sova() {
    printf("The specific structure of the body allows the bird to turn its head 270 degrees.\n");
}

int main() {
    char command[10];

    printf("Enter a command: ");
    scanf("%s", command);

    if (strcmp(command, "sova") == 0) {
        sova();
    } else {
        printf("Это у вас фотоаппарат? А я думала сова..\n");
    }

    return 0;
}
