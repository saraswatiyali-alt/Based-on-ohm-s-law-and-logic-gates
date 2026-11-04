//Ohm's Law Calculator
#include <stdio.h>

int main()
{
    float voltage, current, resistance;

    printf("Enter Voltage (V): ");
    scanf("%f", &voltage);

    printf("Enter Current (A): ");
    scanf("%f", &current);

    if (current != 0)
    {
        resistance = voltage / current;
        printf("Resistance = %.2f Ohms\n", resistance);
    }
    else
    {
        printf("Current cannot be zero!\n");
    }

    return 0;
}
