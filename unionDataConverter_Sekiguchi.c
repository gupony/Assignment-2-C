#include <stdio.h>

union Data
{
    int i;   // Integer data
    float f; // Float data
};

int main()
{
    union Data data; // Union variable to store either int or float
    int choice;      // User's choice for the type of data to enter

    // Invite to the magical world of data conversion
    printf("🎈 Welcome to the Magical Data Converter! 🎈\n");
    printf("What type of data are we transforming today? 🤔\n");
    printf("1 for Integer, 2 for Float: ");
    scanf("%d", &choice); // Read the choice

    if (choice == 1)
    {
        // Integer input
        printf("Enter your integer: ");
        scanf("%d", &data.i); // Read integer
        // Display conversion results
        printf("Int: %d, as a Float: %.2f - Magic! ✨\n", data.i, (float)data.i);
    }
    else if (choice == 2)
    {
        // Float input
        printf("Enter your float: ");
        scanf("%f", &data.f); // Read float
        // Display conversion results
        printf("Float: %.2f, as an Int: %d - Amazing! 🌟\n", data.f, (int)data.f);
    }
    else
    {
        // Handling invalid choice
        printf("Oh no, it seems like we've got a bit of a mix-up. Let's try again! 🌈\n");
    }

    return 0;
}
