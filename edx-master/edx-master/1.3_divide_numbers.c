#include <stdio.h>
int main(void) {
    double f;
    scanf("%lf", &f);
    printf("%.1lf", f*(9.0/5.0)+32.0);
    return 0;
}

/*When Rémi came to the US (to visit Petra to make this MOOC) he brought his favorite cookie recipe! When trying to bake the cookies he realized that ovens in the US show temperature in degrees Fahrenheit, but the cookie recipe called for a temperature in degrees Celsius. We need your help!

Please write a C-program that reads a decimal number representing a temperature in degrees Celsius and prints out the corresponding temperature in degrees Fahrenheit with 1 decimal place. Here is the conversion formula:

Temperature (°F) = Temperature (°C) × 9.0 / 5.0 + 32.0 
*/ 

Hint 1 :
Remember that the formatting of your output is important - be sure that you are printing one decimal place!

Hint 2 :
Make sure you are using the double datatype for accurate conversions!

    Class solution ----
#include <stdio.h>

int main(void) {

    double celsius;
    double fahrenheit;

    scanf("%lf", &celsius);

    fahrenheit = celsius * 9.0/5.0 + 32;

    printf("%.1lf", fahrenheit);

    return 0;
}

