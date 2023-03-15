#include <stdio.h>
#include <math.h>

double roundToInteger(double number) {
    return floor(number + 0.5);
}

double roundToTenths(double number) {
    return floor(number * 10 + 0.5) / 10.0;
}

double roundToHundredths(double number) {
    return floor(number * 100 + 0.5) / 100.0;
}

double roundToThousandths(double number) {
    return floor(number * 1000 + 0.5) / 1000.0;
}

int main() {
    double x;
    printf("Enter a number: ");
    scanf("%lf", &x);
    
    printf("Original value: %lf\n", x);
    printf("Rounded to integer: %lf\n", roundToInteger(x));
    printf("Rounded to tenths: %lf\n", roundToTenths(x));
    printf("Rounded to hundredths: %lf\n", roundToHundredths(x));
    printf("Rounded to thousandths: %lf\n", roundToThousandths(x));
    
    return 0;
}
