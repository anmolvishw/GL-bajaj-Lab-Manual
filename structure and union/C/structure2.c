#include <stdio.h>
#include <string.h>

#define NUM_PLAYERS 50
#define NUM_TEAMS 5

struct cricket {
    char player_name[50];
    char team_name[50];
    float batting_average;
};

void print_team_wise_list(struct cricket players[], int num_players) {
    for (int i = 0; i < NUM_TEAMS; i++) {
        printf("Team %d:\n", i + 1);
        for (int j = 0; j < num_players; j++) {
            if (players[j].team_name[0] == 'A' + i) { // Assuming team names are 'A', 'B', 'C', etc.
                printf("Player: %s, Batting Average: %.2f\n", players[j].player_name, players[j].batting_average);
            }
        }
        printf("\n");
    }
}

int main() {
    struct cricket players[NUM_PLAYERS] = {
        {"Player1", "A", 45.5}, {"Player2", "A", 50.2}, {"Player3", "B", 33.4}, // Add more players as needed
        // ...
    };

    print_team_wise_list(players, NUM_PLAYERS);

    return 0;
}
