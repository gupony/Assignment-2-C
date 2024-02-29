#include <stdio.h>

int main()
{
    int temperatures[7], max, min; // Array to store the week's temperatures, and variables for max and min temperatures
    float average = 0.0;           // For calculating the average temperature

    // Ask for the user's input on weekly temperatures
    printf("🌡️ Welcome to the Cozy Temperature Analyzer! 🌡️\n");
    printf("Please enter the temperatures for a snuggly week, one day at a time:\n");

    for (int i = 0; i < 7; i++)
    {
        // Loop to gather daily temperatures
        printf("Day %d's temperature: ", i + 1);
        scanf("%d", &temperatures[i]); // Scan each temperature
        average += temperatures[i];    // Add to total for average calculation

        // Determine the max and min temperatures as we go
        if (i == 0 || temperatures[i] > max)
            max = temperatures[i];
        if (i == 0 || temperatures[i] < min)
            min = temperatures[i];
    }
    average /= 7; // Calculate the average temperature

    // Present the weather summary
    printf("\n📊 Here's your weekly weather wrap-up! 📊\n");
    printf("Hottest day: %d°C - let's hit the beach! 🏖️\n", max);
    printf("Coldest day: %d°C - perfect for hot cocoa! ☕\n", min);
    printf("Average temperature: %.2f°C - just right for light sweaters! 🧥\n", average);

    return 0;
}
