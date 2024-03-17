#include <stdio.h>

int main() {
    int miles;
    float calculation;

    printf("Enter miles: ");
    scanf("%d",&miles);

    calculation = miles*1.609;

    printf("Distance of %d miles in kilometer is %2.2f",miles,calculation);
    return 0;
}
