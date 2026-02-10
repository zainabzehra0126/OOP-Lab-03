#include <iostream>
#include <string>
using namespace std;

class WeekDays {
private:
    string Days[7];
    int CurrentDay;

    void initializeDays() {
        Days[0] = "Sunday";
        Days[1] = "Monday";
        Days[2] = "Tuesday";
        Days[3] = "Wednesday";
        Days[4] = "Thursday";
        Days[5] = "Friday";
        Days[6] = "Saturday";
    }

public:
    WeekDays() {
        initializeDays();
        CurrentDay = 0;
    }

    WeekDays(int day) {
        initializeDays();
        CurrentDay = day % 7;
    }

    string getCurrentDay() {
        return Days[CurrentDay];
    }

    string getNextDay() {
        return Days[(CurrentDay + 1) % 7];
    }

    string getPreviousDay() {
        return Days[(CurrentDay + 6) % 7];
    }

    string getNthDayFromToday(int N) {
        return Days[(CurrentDay + N) % 7];
    }
};

int main() {
    WeekDays d(23);
    cout << "The current day is:  " << d.getCurrentDay() << endl;
    cout <<  "The next day is:  " << d.getNextDay() << endl;
    cout <<  "The previous day was:  " << d.getPreviousDay() << endl;
    cout << "Day 23 days from today will be: " << d.getNthDayFromToday(20) << endl;
    return 0;
}

