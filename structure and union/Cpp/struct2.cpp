#include <iostream>
#include <string>
using namespace std;

#define NUM_PLAYERS 50
#define NUM_TEAMS 5

struct Cricket {
    string player_name;
    string team_name;
    float batting_average;
};

void print_team_wise_list(Cricket players[], int num_players) {
    for (int i = 0; i < NUM_TEAMS; i++) {
        cout << "Team " << char('A' + i) << ":" << endl;
        for (int j = 0; j < num_players; j++) {
            if (players[j].team_name[0] == 'A' + i) { // Assuming team names are 'A', 'B', 'C', etc.
                cout << "Player: " << players[j].player_name << ", Batting Average: " << players[j].batting_average << endl;
            }
        }
        cout << endl;
    }
}

int main() {
    Cricket players[NUM_PLAYERS] = {
        {"Player1", "A", 45.5}, {"Player2", "A", 50.2}, {"Player3", "B", 33.4}, // Add more players as needed
        // ...
    };

    print_team_wise_list(players, 3); // Adjust the number of players as needed

    return 0;
}