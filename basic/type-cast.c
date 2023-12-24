// type casting is a way to change data type by using (dataType) e.g (int), (double)
// in C, it cant automatically change a data type.
// For example variable [int foo] assigned to [double bar]. doesnt make foo auto become double
#include <stdio.h>

int main(){
    printf("the number of eggs: ");

    int eggs;
    scanf("%i", &eggs);

    double dozen = (double) eggs / 12; // type casting only affect the first thing on its right i.e only eggs

    printf("Number of eggs is: %f\n", dozen);
}