#include <stdio.h>

int main(void)
{
    double miles;
    scanf("%lf", &miles);
    printf("%.6lf", (miles*0.621371));
    return 0;
}

/*Petra, Rémi and their families went hiking in the mountains together and realized that distances are measured in different units in France and the United States. To help them convert between units, please write a program that reads a decimal number representing a distance in kilometers and that prints out the corresponding distance in miles with 6 decimal places. 

You may use the fact that one kilometer equals 0.621371 miles. 

*/

/*
Hint 1 :
Remember you can use the format specifier %.#lf to print a double with # decimal places.

*/

//Class solution
#include <stdio.h>

int main(void) {

    double distance, milesToKm;

    milesToKm = .621371;

    scanf("%lf", &distance);

    printf("%.6lf", distance * milesToKm);

    return(0);
}
