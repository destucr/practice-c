#include <stdio.h>

int main() {
    int radius;

    printf("Input the radius of a circle: ");
    // input should add '&' keyword because it change the variable 
    scanf("%i", &radius); //address-of operator 

    // double is float data type it means could understand angka koma
    double area = 3.14159 * (radius * radius);
    printf("the area of %i radius is :%f\n",radius, area);
    return 0;
}