#include <stdio.h>
#define PI 3.14

int main(int argc, char *argv[])
{
    int radius;
    float circumference;

    printf("\nEnter radius value : ");
    scanf("%d", &radius);
    circumference = 2 * PI * radius;
    printf("Circumference of Circle : %.2f\n", circumference);

    return 0;
}
