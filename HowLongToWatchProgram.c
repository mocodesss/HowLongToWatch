#include <stdio.h>

int main()
{
    // Declare variables
    int trueLength;
    float watchSpeed, newLength;

    // Discover and set video's true length in total minutes
    printf("Enter video's true length in total minutes: ");
    scanf("%d", &trueLength);

    // Discover and set users watch speed
    printf("Enter speed you'll watch in: ");
    scanf("%f", &watchSpeed);

    // Equation
    newLength = trueLength / watchSpeed;

    printf("It will take you %.2f minutes to watch if done at %.2f speed.", newLength, watchSpeed);
    return 0;
}