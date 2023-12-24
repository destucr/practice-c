#include <stdio.h>
#include <string.h>

int main (){
    int number[4] = {1, 2, 3, 4};
    char name[] = "ahok";
    char *b = &name[0];
    

    printf("nilai pointer b ke name[0]: %p\n", *b);

    printf("nilai name[0]  adalah: %c\n", name[0]);

    memcpy(&name[0], "a", 1);

    printf("nilai name[0] setelah diubah  adalah: %c\n", name[0]);
    printf("nilai pointer b setelah diubah: %p\n", *b);
    // printf("array of 0 is : %i\n", number[0]);
    return 0;
}