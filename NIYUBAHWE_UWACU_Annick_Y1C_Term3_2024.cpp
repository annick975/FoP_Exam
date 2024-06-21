#include <stdio.h>

// Define the structure animal
struct animal {
    int age;
    char name[80];
    char gender;
    char place[80];
};

// Function to get values for an animal
void getValues(struct animal *a, const char *animalName) {
    printf("Enter details for %s:\n", animalName);
    printf(" Enter Age: ");
    scanf("%d", &a->age);
    printf("Enter Name: ");
    scanf(" %[^\n]s", a->name); 
    printf(" Enter Gender: ");
    scanf(" %c", &a->gender);
    printf("Enter Place: ");
    scanf(" %[^\n]s", a->place); 
}

// Function to output values of an animal
void outputValues(struct animal a, const char *animalName) {
    printf("\nDetails for %s:\n", animalName);
    printf("Age: %d\n", a.age);
    printf("Name: %s\n", a.name);
    printf("Gender: %c\n", a.gender);
    printf("Place: %s\n", a.place);
}

int main() {
  
    struct animal dog, cow;

    
    getValues(&dog, "dog");

   
    getValues(&cow, "cow");

   
    outputValues(dog, "dog");


    outputValues(cow, "cow");

    return 0;
}
