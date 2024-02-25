#include <stdio.h>
#include <string.h>

struct test_struct {
    char task[26]; // 24 characters
    int done_or_empty;
};

struct test_struct a[10];   // Array of Tasks

void add_task();
void view_task();
void done();
void delete_task();
void reset();

int main() {
    reset(); // Initialize the to-do list

    while (1) {
        int choice;
        printf("\nMenu:\n");
        printf("1. Add a task\n");
        printf("2. View to-do list\n");
        printf("3. Mark a task as done\n");
        printf("4. Delete a task\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_task();
                break;
            case 2:
                view_task();
                break;
            case 3:
                done();
                break;
            case 4:
                delete_task();
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice. Please enter a number between 1 and 5.\n");
        }
    }

    return 0;
}

void add_task() {
    int i;
    for (i = 0; i < 10; i++) {
        if (a[i].done_or_empty == 1) {
            printf("Enter task description : ");
            scanf(" %[^\n]", a[i].task);
            a[i].done_or_empty = 0;
            printf("Task added successfully.\n");
            return;
        }
    }
    printf("To-do list is full. Delete a task to add a new one.\n");
}

void view_task() {
    printf("\nTo-do List:\n");
    for (int i = 0; i < 10; i++) {
        if (a[i].done_or_empty == 0) {
            printf("%d. %s\n", i + 1, a[i].task);
        }
    }
}

void done() {
    int task_num;
    printf("Enter the task number to mark as done: ");
    scanf("%d", &task_num);

    if (task_num < 1 || task_num > 10) {
        printf("Invalid task number. Please enter a number between 1 and 10.\n");
        return;
    }

    if (a[task_num - 1].done_or_empty == 0) {
        a[task_num - 1].done_or_empty = 2;            // Mark as done
        printf("Task %d marked as done.\n", task_num);
    } else {
        printf("Task %d is already empty.\n", task_num);
    }
}

void delete_task() {
    int task_num;
    printf("Enter the task number to delete: ");
    scanf("%d", &task_num);

    if (task_num < 1 || task_num > 10) {
        printf("Invalid task number. Please enter a number between 1 and 10.\n");
        return;
    }

    if (a[task_num - 1].done_or_empty == 0) {
        a[task_num - 1].done_or_empty = 1;              // Mark as empty
        printf("Task %d deleted.\n", task_num);
    } else {
        printf("Task %d is already empty.\n", task_num);
    }
}

void reset() {
    for (int i = 0; i < 10; i++) {
        strcpy(a[i].task, "");
        a[i].done_or_empty = 1;                           // Empty
    }
    printf("To-do list has been reset.\n");
}
