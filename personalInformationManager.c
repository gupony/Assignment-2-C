#include <stdio.h>

typedef struct
{
    char name[100];   // Person's name
    int age;          // Person's age
    char contact[20]; // Person's contact number
} Person;

void displayPersonInfo(Person p)
{
    // Function to display person's information
    printf("\n🌸 Meet Our Lovely Person! 🌸\n");
    printf("Name: %s - like a main character in a story! 📘\n", p.name);
    printf("Age: %d - a wonderful age to be! 🎂\n", p.age);
    printf("Contact: %s - let's stay connected! 📱\n", p.contact);
}

int main()
{
    Person person; // Variable to store personal information

    // Prompt user for personal info
    printf("💌 Let's input some personal information! (Don't worry, it's just between us) 💌\n");
    printf("Name: ");
    scanf("%s", person.name); // Read name
    printf("Age: ");
    scanf("%d", &person.age); // Read age
    printf("Contact Number: ");
    scanf("%s", person.contact); // Read contact number

    displayPersonInfo(person); // Call the display function

    return 0;
}
