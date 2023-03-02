#include <stdio.h>

int main(void) 
{
    char n1[] = "123456789";
    char n2[] = "987654321";
    char r[20];

    char *result = infinite_add(n1, n2, r, sizeof(r));
    if (result) 
    {
        printf("The result is: %s\n", result);
    } else 
    {
        printf("The result cannot be stored in the buffer.\n");
    }

    return 0;
}
