#include <stdio.h>
#include <string.h>

struct vegetable {
    char name[50];
    float rate;
};

void sortByName(struct vegetable veg[], int n) {
    struct vegetable temp;
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (strcmp(veg[i].name, veg[j].name) > 0) {
                temp = veg[i];
                veg[i] = veg[j];
                veg[j] = temp;
            }
        }
    }
}

void sortByRate(struct vegetable veg[], int n) {
    struct vegetable temp;
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (veg[i].rate > veg[j].rate) {
                temp = veg[i];
                veg[i] = veg[j];
                veg[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter number of vegetables: ");
    scanf("%d", &n);
    struct vegetable veg[n];

    for (int i = 0; i < n; i++) {
        getchar(); 
        printf("\nEnter vegetable name: ");
        fgets(veg[i].name, sizeof(veg[i].name), stdin);
        veg[i].name[strcspn(veg[i].name, "\n")] = '\0'; 

        printf("Enter rate for %s: ", veg[i].name);
        scanf("%f", &veg[i].rate);
    }

    printf("\nSorting vegetables by Name:\n");
    sortByName(veg, n);
    for (int i = 0; i < n; i++) {
        printf("%s - %.2f\n", veg[i].name, veg[i].rate);
    }

    printf("\nSorting vegetables by Rate:\n");
    sortByRate(veg, n);
    for (int i = 0; i < n; i++) {
        printf("%s - %.2f\n", veg[i].name, veg[i].rate);
    }

    return 0;
}
