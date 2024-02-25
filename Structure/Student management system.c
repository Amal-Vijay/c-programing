#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct marks {
    float science;
    float maths;
    float social_science;
    float art;
};

struct student {
    char name[50];
    int roll_number;
    struct marks marks;
    float total_marks;
    struct student* next;
};

struct student* head = NULL;

struct student* add_student();
void delete_student(int roll_number);
void view_details(int roll_number);

int main() {
    int option;

    while (1) {
        printf("\nStudent Management System Menu:\n");
        printf("1. Add a student\n");
        printf("2. Delete a student\n");
        printf("3. View details of a student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                head = add_student();
                break;
            case 2:
                {
                    int roll;
                    printf("Enter the roll number of the student to delete: ");
                    scanf("%d", &roll);
                    delete_student(roll);
                    break;
                }
            case 3:
                {
                    int roll;
                    printf("Enter the roll number of the student to view details: ");
                    scanf("%d", &roll);
                    view_details(roll);
                    break;
                }
            case 4:
                printf("Exiting the program...\n");
                exit(0);
            default:
                printf("Invalid option! Please choose a valid option.\n");
        }
    }

    return 0;
}

// Function to add a student
struct student* add_student() {
    struct student* new_student = (struct student*)malloc(sizeof(struct student));
    if (new_student == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    printf("Enter student name: ");
    scanf(" %[^\n]", new_student->name);
    printf("Enter roll number: ");
    scanf("%d", &new_student->roll_number);
    printf("Enter marks for Science: ");
    scanf("%f", &new_student->marks.science);
    printf("Enter marks for Maths: ");
    scanf("%f", &new_student->marks.maths);
    printf("Enter marks for Social Science: ");
    scanf("%f", &new_student->marks.social_science);
    printf("Enter marks for Art: ");
    scanf("%f", &new_student->marks.art);

    // Calculate total marks
    new_student->total_marks = new_student->marks.science + new_student->marks.maths + new_student->marks.social_science + new_student->marks.art;

    new_student->next = NULL;

    if (head == NULL) {
        head = new_student;
    } else {
        struct student* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_student;
    }

    printf("Student added successfully!\n");

    return head;
}

// Function to delete a student
void delete_student(int roll_number) {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }

    struct student* temp = head;
    struct student* prev = NULL;

    // If the node to be deleted is the first node
    if (temp != NULL && temp->roll_number == roll_number) {
        head = temp->next;
        free(temp);
        printf("Student with roll number %d deleted successfully!\n", roll_number);
        return;
    }

    // Search for the student to delete
    while (temp != NULL && temp->roll_number != roll_number) {
        prev = temp;
        temp = temp->next;
    }

    // If student not found
    if (temp == NULL) {
        printf("Student with roll number %d not found!\n", roll_number);
        return;
    }

    // Remove the node from the linked list
    prev->next = temp->next;
    free(temp);
    printf("Student with roll number %d deleted successfully!\n", roll_number);
}

// Function to view details of a student
void view_details(int roll_number) {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }

    struct student* temp = head;
    while (temp != NULL) {
        if (temp->roll_number == roll_number) {
            printf("Name: %s\n", temp->name);
            printf("Roll Number: %d\n", temp->roll_number);
            printf("Marks in Science: %.2f\n", temp->marks.science);
            printf("Marks in Maths: %.2f\n", temp->marks.maths);
            printf("Marks in Social Science: %.2f\n", temp->marks.social_science);
            printf("Marks in Art: %.2f\n", temp->marks.art);
            printf("Total Marks: %.2f\n", temp->total_marks);
            return;
        }
        temp = temp->next;
    }

    printf("Student with roll number %d not found!\n", roll_number);
}

