#include <iostream>
#include <string>
using namespace std;

class FootballPlayer {
private:
    string playerName;
    string position;
    int goalCount;

public:
    FootballPlayer() {
        playerName = "No one";
        position = "Benchwarmer";
        goalCount = 0;
    }


    FootballPlayer(string name, string position = "Midfielder", int goals = 10) {
        playerName = name;
        position = position;
        goalCount = goals;
    }

    FootballPlayer(const FootballPlayer& other) {
        playerName = other.playerName;
        position = other.position;
        goalCount = other.goalCount;
    }

    void scoreGoals(int goals) {
        goalCount += goals;
    }

    void displayProfile() {
        cout << "Player Name: " << playerName << endl;
        cout << "Position: " << position << endl;
        cout << "Goals Scored: " << goalCount << endl;
        cout << "Status: they’re about to win the Ballon d'Or!" << endl;
        cout << endl;
    }
};

int main() {
    FootballPlayer p1;
    FootballPlayer p2("Lionel Messi", "Forward", 800);
    FootballPlayer p3("Christiano Rolando");
    FootballPlayer p4 = p2;

    p1.scoreGoals(2);
    p2.scoreGoals(5);
    p3.scoreGoals(3);
    p4.scoreGoals(1);

    p1.displayProfile();
    p2.displayProfile();
    p3.displayProfile();
    p4.displayProfile();

    return 0;
}

