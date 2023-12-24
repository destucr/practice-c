#include <stdio.h>

int main() {
    int radius;

    // input should add '&' keyword because it change the variable 
    scanf("%i", &radius); //address-of operator 

    printf("\nradius is :%i\n", radius);
    return 0;
}