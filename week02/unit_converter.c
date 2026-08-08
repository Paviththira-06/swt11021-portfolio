#include <stdio.h>

int main()
{
    // Conversion factors
    const double KM_TO_MILES = 0.621371;
    const double KM_TO_METRES = 1000.0;
    const double KM_TO_CENTIMETRES = 100000.0;

    const double CELSIUS_TO_FAHRENHEIT = 9.0 / 5.0;
    const double CELSIUS_TO_KELVIN = 273.15;

    // Variables
    double kilometres;
    double celsius;

    double miles;
    double metres;
    double centimetres;

    double fahrenheit;
    double kelvin;

    // Read distance
    printf("Enter distance in kilometres: ");
    scanf("%lf", &kilometres);

    // Convert distance
    miles = kilometres * KM_TO_MILES;
    metres = kilometres * KM_TO_METRES;
    centimetres = kilometres * KM_TO_CENTIMETRES;

    // Display distance conversions
    printf("\nDistance Conversions\n");
    printf("----------------------------\n");
    printf("Miles       : %.2f\n", miles);
    printf("Metres      : %.2f\n", metres);
    printf("Centimetres : %.2f\n", centimetres);

    // Read temperature
    printf("\nEnter temperature in Celsius: ");
    scanf("%lf", &celsius);

    // Convert temperature
    fahrenheit = (celsius * CELSIUS_TO_FAHRENHEIT) + 32.0;
    kelvin = celsius + CELSIUS_TO_KELVIN;

    // Display temperature conversions
    printf("\nTemperature Conversions\n");
    printf("----------------------------\n");
    printf("Fahrenheit : %.2f\n", fahrenheit);
    printf("Kelvin     : %.2f\n", kelvin);

    return 0;
}
