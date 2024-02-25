#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Employee {
    char name[50];
    int id;
    float wage_per_hour;
    float total_hours_worked;
    float total_wage;
    struct Employee *next;
};

struct Employee *head = NULL;

void add_employee();
void delete_employee();
void view_details();
void display_menu();

int main() {
    while (1) {
        int choice;
        display_menu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_employee();
                break;
            case 2:
                delete_employee();
                break;
            case 3:
                view_details();
                break;
            case 4:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid option. Please try again.\n");
        }
    }
    return 0;
}

// Function to display the menu
void display_menu() {
    printf("\nMenu:\n");
    printf("1. Add an employee\n");
    printf("2. Delete an employee\n");
    printf("3. View details of an employee\n");
    printf("4. Exit\n");
}

// Function to add an employee to the list
void add_employee() {
    struct Employee *temp = (struct Employee *)malloc(sizeof(struct Employee));
    printf("Enter employee name: ");
    scanf("%s", temp->name);
    printf("Enter employee ID: ");
    scanf("%d", &temp->id);
    printf("Enter wage per hour: ");
    scanf("%f", &temp->wage_per_hour);
    printf("Enter total hours worked: ");
    scanf("%f", &temp->total_hours_worked);
    temp->total_wage = temp->wage_per_hour * temp->total_hours_worked;
    temp->next = NULL;

    if (head == NULL) {
        head = temp;
    } else {
        struct Employee *current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = temp;
    }
    printf("Employee added successfully.\n");
}

// Function to delete an employee from the list
void delete_employee() {
    int id;
    printf("Enter employee ID to delete: ");
    scanf("%d", &id);

    struct Employee *current = head;
    struct Employee *prev = NULL;

    if (current != NULL && current->id == id) {
        head = current->next;
        free(current);
        printf("Employee deleted successfully.\n");
        return;
    }

    while (current != NULL && current->id != id) {
        prev = current;
        current = current->next;
    }

    if (current == NULL) {
        printf("Employee not found.\n");
        return;
    }

    prev->next = current->next;
    free(current);
    printf("Employee deleted successfully.\n");
}

// Function to view details of an employee
void view_details() {
    int id;
    printf("Enter employee ID to view details: ");
    scanf("%d", &id);

    struct Employee *current = head;
    while (current != NULL) {
        if (current->id == id) {
            printf("Name: %s\n", current->name);
            printf("ID: %d\n", current->id);
            printf("Wage per hour: %.2f\n", current->wage_per_hour);
            printf("Total hours worked: %.2f\n", current->total_hours_worked);
            printf("Total wage: %.2f\n", current->total_wage);
            return;
        }
        current = current->next;
    }
    printf("Employee not found.\n");
}

