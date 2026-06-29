#include <stdio.h>

struct Ticket {
    int ticket_id;
    char destination[50];
    int seat_no;
    float fare;
};

int main() {
    int n;
    printf("--- Ticket Booking System ---\n");
    printf("Enter number of tickets to book: ");
    scanf("%d", &n);

    struct Ticket t[n];

    // take reservation details for every passenger row by row
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Ticket %d:\n", i + 1);
        printf("Enter Ticket ID: ");
        scanf("%d", &t[i].ticket_id);
        printf("Enter Destination: ");
        scanf(" %[^\n]", t[i].destination);
        printf("Enter Seat Number: ");
        scanf("%d", &t[i].seat_no);
        printf("Enter Total Fare: ");
        scanf("%f", &t[i].fare);
    }

    printf("\n================ BOOKING SUMMARIES ================\n");
    printf("ID\tDestination\t\tSeat No\t\tFare\n");
    printf("---------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%-20s\t%d\t\tRs. %.2f\n", t[i].ticket_id, t[i].destination, t[i].seat_no, t[i].fare);
    }

    return 0;
}