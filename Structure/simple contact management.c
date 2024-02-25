#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct contact {
    char name[50];
    char Ph_no[15];
    struct contact *link;
} s;

s *head = NULL;
s* add_contact();
void delete_contact(char *r);
void view_details(char *r);
void view_all();

int main() {
    while (1) {
        int choice;
        char name[50];

        printf("\nMenu:\n");
        printf("1. Add Contact\n");
        printf("2. Delete Contact\n");
        printf("3. View Details\n");
        printf("4. View All Contacts\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                head = add_contact();
                break;
            case 2:
                printf("Enter the name to delete: ");
                scanf("%s", name);
                delete_contact(name);
                break;
            case 3:
                printf("Enter the name to view details: ");
                scanf("%s", name);
                view_details(name);
                break;
            case 4:
                view_all();
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice. Please enter a number between 1 and 5.\n");
        }
    }

    return 0;
}

s* add_contact() {
    s *temp = (s*)malloc(sizeof(s));
    if (temp == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    printf("Enter name: ");
    scanf("%s", temp->name);
    printf("Enter phone number: ");
    scanf("%s", temp->Ph_no);
    temp->link = NULL;

    if (head == NULL) {
        head = temp;
    } else {
        s *ptr = head;
        while (ptr->link != NULL) {
            ptr = ptr->link;
        }
        ptr->link = temp;
    }

    printf("Contact added successfully.\n");
    return head;
}

void delete_contact(char *r) {
    if (head == NULL) {
        printf("Contact list is empty.\n");
        return;
    }

    s *prev = NULL;
    s *curr = head;

    while (curr != NULL) {
        if (strcmp(curr->name, r) == 0) {
            if (prev == NULL) {
                head = curr->link;
            } else {
                prev->link = curr->link;
            }
            printf("Contact '%s' deleted successfully.\n", r);
            free(curr);
            return;
        }
        prev = curr;
        curr = curr->link;
    }

    printf("Contact '%s' not found.\n", r);
}

void view_details(char *r) {
    s *ptr = head;
    while (ptr != NULL) {
        if (strcmp(ptr->name, r) == 0) {
            printf("Name: %s\n", ptr->name);
            printf("Phone Number: %s\n", ptr->Ph_no);
            return;
        }
        ptr = ptr->link;
    }
    printf("Contact '%s' not found.\n", r);
}

void view_all() {
    if (head == NULL) {
        printf("Contact list is empty.\n");
        return;
    }

    printf("\nAll Contacts:\n");
    s *ptr = head;
    while (ptr != NULL) {
        printf("Name: %s, Phone Number: %s\n", ptr->name, ptr->Ph_no);
        ptr = ptr->link;
    }
}

