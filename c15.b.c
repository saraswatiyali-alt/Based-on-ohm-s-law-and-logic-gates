//Digital Logic Gate Simulator
#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two binary inputs (0 or 1): ");
    scanf("%d %d", &a, &b);

    if ((a != 0 && a != 1) || (b != 0 && b != 1))
    {
        printf("Invalid input\n");
        return 1;
    }

    printf("AND Gate = %d\n", a & b);
    printf("OR Gate  = %d\n", a | b);
    printf("XOR Gate = %d\n", a ^ b);
    printf("NAND Gate = %d\n", !(a & b));
    printf("NOR Gate = %d\n", !(a | b));
    printf("NOT A = %d\n", !a);

    return 0;
}
