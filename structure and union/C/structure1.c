#include <stdio.h>
#include <string.h>

#define MAX_HOTELS 100

typedef struct {
    char name[50];
    char address[100];
    int grade;
    float room_charge;
    int number_of_rooms;
} Hotel;

void print_hotels_by_grade(Hotel hotels[], int count, int grade) {
    Hotel sorted_hotels[MAX_HOTELS];
    int sorted_count = 0;

    // Filter hotels by grade
    for (int i = 0; i < count; i++) {
        if (hotels[i].grade == grade) {
            sorted_hotels[sorted_count++] = hotels[i];
        }
    }

    // Sort hotels by room charge
    for (int i = 0; i < sorted_count - 1; i++) {
        for (int j = i + 1; j < sorted_count; j++) {
            if (sorted_hotels[i].room_charge > sorted_hotels[j].room_charge) {
                Hotel temp = sorted_hotels[i];
                sorted_hotels[i] = sorted_hotels[j];
                sorted_hotels[j] = temp;
            }
        }
    }

    // Print sorted hotels
    for (int i = 0; i < sorted_count; i++) {
        printf("Name: %s\n", sorted_hotels[i].name);
        printf("Address: %s\n", sorted_hotels[i].address);
        printf("Grade: %d\n", sorted_hotels[i].grade);
        printf("Room Charge: %.2f\n", sorted_hotels[i].room_charge);
        printf("Number of Rooms: %d\n\n", sorted_hotels[i].number_of_rooms);
    }
}

int main() {
    Hotel hotels[MAX_HOTELS] = {
        {"Hotel A", "123 Street", 3, 150.0, 50},
        {"Hotel B", "456 Avenue", 3, 120.0, 30},
        {"Hotel C", "789 Boulevard", 4, 200.0, 40},
        {"Hotel D", "101 Road", 3, 180.0, 20}
    };

    int grade_to_print = 3;
    print_hotels_by_grade(hotels, 4, grade_to_print);

    return 0;
}

