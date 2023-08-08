#include <stdio.h>

void down(void);
void rise(void);

int main(void)
{
    char value;
    printf("has bitcoin rose or got down in value?:");
    scanf("%c", &value);
    if (value == 'r' || value == 'R')
    {
        rise();
    }
    else if (value == 'd' || value == 'D')
    {
        down();
    }
}

void down(void)
{
    float oldPrice;
    float PercentDown;
    printf("what was the previous bitcoin price?: ");
    scanf("%f", &oldPrice);
    printf("down by how many percent?: ");
    scanf("%f", &PercentDown);
    float newPrice = oldPrice * PercentDown;
    printf("the new value of decreased bitcoin value is: %f", newPrice);
}

void rise(void)
{
    float oldPrice;
    float PercentRise;
    printf("what was the previous bitcoin price?: ");
    scanf("%f", &oldPrice);
    printf("rise by how many percent?: ");
    scanf("%f", &PercentRise);
    float newPrice = oldPrice * PercentRise;
    printf("the new value of increased bitcoin value is: %f", newPrice);
}
