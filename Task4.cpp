#include <iostream>
#include <string>
using namespace std;

class CricketPlayer {
private:
    string name;
    int jerseyNumber;
    double battingAverage;
    int matchesPlayed;

public:
    CricketPlayer(string name, int jerseyNumber, double battingAverage) {
        this->name = name;
        this->jerseyNumber = jerseyNumber;
        this->battingAverage = battingAverage;
        this->matchesPlayed = 1;
    }

    CricketPlayer& improveAverage(int runs) {
        battingAverage += runs * 0.05;
        return *this;
    }

    void playMatch(int runsScored) {
        battingAverage = ((battingAverage * matchesPlayed) + runsScored) / (matchesPlayed + 1);
        matchesPlayed++;
    }

    void displayPlayerStats() {
        cout << "Player Name: " << name << endl;
        cout << "Jersey Number: " << jerseyNumber << endl;
        cout << "Batting Average: " << battingAverage << endl;
        cout << "Commentary: This batting average is more consistent than weather or Karachi!" << endl;
        cout << endl;
    }
};

int main() {
    CricketPlayer babar("Babar Azam", 56, 90.1);
    CricketPlayer Rizwan("Muhammad Rizwan", 52, 56.2);
    CricketPlayer Saim("Saim Ayub", 63, 34.5);

    babar.playMatch(102);
    babar.improveAverage(50).improveAverage(30);
    babar.displayPlayerStats();

    Rizwan.playMatch(88);
    Rizwan.improveAverage(40);
    Rizwan.displayPlayerStats();

    Saim.playMatch(0);
    Saim.improveAverage(60);
    Saim.displayPlayerStats();

    return 0;
}

