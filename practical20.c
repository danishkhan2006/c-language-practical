#include <stdio.h>
#include <string.h>

struct Person {
    char name[MAX_NAME_LENGTH];
    int age;
    char address[MAX_ADDRESS_LENGTH];
};

void input_person(struct Person* p) {
    printf("Enter name: ");
    getchar();  
    fgets(p->name, MAX_NAME_LENGTH, stdin);
    p->name[strcspn(p->name, "\n")] = '\0';  

    printf("Enter age: ");
    scanf("%d", &p->age);

    printf("Enter address: ");
    getchar(); 
    fgets(p->address, MAX_ADDRESS_LENGTH, stdin);
    p->address[strcspn(p->address, "\n")] = '\0';  
}

void print_people(struct Person people[], int num_people) {
    for (int i = 0; i < num_people; i++) {
        printf("\nPerson %d:\n", i + 1);
        printf("Name: %s\n", people[i].name);
        printf("Age: %d\n", people[i].age);
        printf("Address: %s\n", people[i].address);
    }
}

int main() {
    int num_people;


    printf("Enter the number of people: ");
    scanf("%d", &num_people);


    if (num_people < 1 || num_people > MAX_PEOPLE) {
        printf("Invalid number of people! Please enter a number between 1 and %d.\n", MAX_PEOPLE);
        return 1; 
    }

    struct Person people[MAX_PEOPLE];

    for (int i = 0; i < num_people; i++) {
        printf("\nEnter details for person %d:\n", i + 1);
        input_person(&people[i]);
    }


    printf("\nList of People:\n");
    print_people(people, num_people);

    return 0;
}
