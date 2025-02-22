class Cricket {
    String playerName;
    String teamName;
    float battingAverage;

    Cricket(String playerName, String teamName, float battingAverage) {
        this.playerName = playerName;
        this.teamName = teamName;
        this.battingAverage = battingAverage;
    }
}

public class struct2 {
    static final int NUM_PLAYERS = 50;
    static final int NUM_TEAMS = 5;

    public static void printTeamWiseList(Cricket[] players, int numPlayers) {
        for (int i = 0; i < NUM_TEAMS; i++) {
            System.out.println("Team " + (char)('A' + i) + ":");
            for (int j = 0; j < numPlayers; j++) {
                if (players[j].teamName.charAt(0) == 'A' + i) { // Assuming team names are 'A', 'B', 'C', etc.
                    System.out.println("Player: " + players[j].playerName + ", Batting Average: " + players[j].battingAverage);
                }
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        Cricket[] players = {
            new Cricket("Player1", "A", 45.5f), new Cricket("Player2", "A", 50.2f), new Cricket("Player3", "B", 33.4f), // Add more players as needed
            // ...
        };

        printTeamWiseList(players, 3); // Adjust the number of players as needed
    }
}