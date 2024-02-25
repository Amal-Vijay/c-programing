#include <stdio.h>
#include <stdlib.h>
int seats[60];
void initializeSeats() {
    for (int i = 0; i < 60; i++) {
        seats[i] = '0';
    }
}

void displaySeats() {
    int limit=0;
    printf("\nSeats:\n\n");
    for (int i = 0; i < 60; i++) {
        printf("%2d\t",i+1);
        limit++;
        if (limit==5){
            printf("\n");
    limit=0;
    }
}
}
void bookSeat(int seat_no) {
    if (seat_no < 1 || seat_no > 60) {
        printf("Invalid seat number.\n");
        return;
    }

    if (seats[seat_no - 1] == '1') {
        printf("Seat already booked.\n");
    } else {
        seats[seat_no - 1] = '1';
        printf("Seat booked successfully.\n");
    }
}

void cancelBooking(int seat_no) {
    if (seat_no < 1 || seat_no > 60) {
        printf("Invalid seat number.\n");
        return;
    }

    if (seats[seat_no - 1] == '0') {
        printf("No booking found for this seat.\n");
    } else {
        seats[seat_no - 1] = '0';
        printf("Booking canceled successfully.\n");
    }
}

int main() {
    int choice, seat_no;

    initializeSeats();

    do {
        printf("\n1. Display Seats\n");
        printf("2. Book Seat\n");
        printf("3. Cancel Booking\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displaySeats();
                break;
            case 2:
                printf("Enter seat number (1-60): ");
                scanf("%d", &seat_no);
                bookSeat(seat_no);
                break;
            case 3:
                printf("Enter seat number (1-60): ");
                scanf("%d", &seat_no);
                cancelBooking(seat_no);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
