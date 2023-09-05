#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;

void displayTime(int hour, int minutes, int seconds) {
    if (hour < 10) cout << "0";
    cout << hour << ":";
    if (minutes < 10) cout << "0";
    cout << minutes << ":";
    if (seconds < 10) cout << "0";
    cout << seconds << endl;
}

void TwelveHourFormat() {
    int hour = 1, minutes = 0, seconds = 0;

    while (true) {
        system("cls");
        seconds++;

        if (seconds == 60) {
            minutes++;
            seconds = 0;

            if (minutes == 60) {
                hour++;
                minutes = 0;

                if (hour == 13) {
                    hour = 1;
                }
            }
        }

        displayTime(hour, minutes, seconds);
        Sleep(1000);
    }
}

void MilitaryHourFormat() {
    int hour = 1, minutes = 0, seconds = 0;

    while (true) {
        system("cls");
        seconds++;

        if (seconds == 60) {
            minutes++;
            seconds = 0;

            if (minutes == 60) {
                hour++;
                minutes = 0;

                if (hour == 24) {
                    hour = 0;
                }
            }
        }

        displayTime(hour, minutes, seconds);
        Sleep(1000);
    }
}

int main() {
    TwelveHourFormat();
    MilitaryHourFormat();
    return 0;
}
