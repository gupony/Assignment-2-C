#include <stdio.h>

int main()
{
    int grade; // Variable to store the student's grade

    // introduction and grade input request
    printf("✨ Let's find out your grade classification! ✨\n");
    printf("Enter your grade (0-100): ");
    scanf("%d", &grade); // Read the grade from user input

    // Use if-else statements to classify the grade
    printf("You've earned a ");
    if (grade < 50)
    {
        // Encouragement even in failure
        printf("Fail - but remember, every setback is a setup for a comeback! 💪\n");
    }
    else if (grade < 60)
    {
        // Acknowledging passing effort
        printf("Pass - solid effort, you're doing great! 🌟\n");
    }
    else if (grade < 70)
    {
        // Celebrating merit
        printf("Merit - fantastic work, you're shining bright! ✨\n");
    }
    else
    {
        // Applauding distinction
        printf("Distinction - absolutely stellar performance, you're a superstar! 🌈\n");
    }

    return 0;
}
