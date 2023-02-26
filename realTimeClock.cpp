#include <iostream>
#include<cstdlib>
#include<windows.h>
using namespace std;



int TwelveHourFormat(int hour, int minutes, int seconds) {
	 

	while (true) {
		
		system("cls");
		seconds++;

		if (seconds == 60) {
			minutes++;
			seconds = 0;

			if (minutes == 60) {
					hour++;
					minutes = 0;
			}
			if (hour == 13) {
				hour = 1;
			}
			
		}
		if (hour < 10 && minutes < 10 && seconds < 10) {
			cout << "0" << hour << ":0" << minutes << ":0" << seconds << endl;
		}
		else if (hour < 10 && minutes < 10 && seconds >= 10){
			cout << "0" << hour << ":0" << minutes << ":" << seconds << endl;
		}
		else if (hour < 10 && minutes >= 10 && seconds < 10) {
			cout << "0" << hour << ":" << minutes << ":0" << seconds << endl;
		}
		else if (hour < 10 && minutes >= 10 && seconds >= 10) {
			cout << "0" << hour << ":" << minutes << ":" << seconds << endl;
		}
		else if (hour > 10 && minutes < 10 && seconds < 10) {
			cout  << hour << ":0" << minutes << ":0" << seconds << endl;
		}
		else if (hour >= 10 && minutes > 10 && seconds < 10) {
			cout << hour << ":" << minutes << ":0" << seconds << endl;
		}
		else {
			cout << hour << ":" << minutes << ":" << seconds << endl;
		}
		
		Sleep(1000);
	}
	
}
int MilitaryHourFormat(int hour, int minutes, int seconds) {
	while (true) {

		system("cls");
		seconds++;

		if (seconds == 60) {
			minutes++;
			seconds = 0;

			if (minutes == 60) {
				hour++;
				minutes = 0;
			}
			if (hour == 25) {
				hour = 0;
			}

		}
		if (hour < 10 && minutes < 10 && seconds < 10) {
			cout << "0" << hour << ":0" << minutes << ":0" << seconds << endl;
		}
		else if (hour < 10 && minutes < 10 && seconds >= 10) {
			cout << "0" << hour << ":0" << minutes << ":" << seconds << endl;
		}
		else if (hour < 10 && minutes >= 10 && seconds < 10) {
			cout << "0" << hour << ":" << minutes << ":0" << seconds << endl;
		}
		else if (hour < 10 && minutes >= 10 && seconds >= 10) {
			cout << "0" << hour << ":" << minutes << ":" << seconds << endl;
		}
		else if (hour > 10 && minutes < 10 && seconds < 10) {
			cout << hour << ":0" << minutes << ":0" << seconds << endl;
		}
		else if (hour >= 10 && minutes > 10 && seconds < 10) {
			cout << hour << ":" << minutes << ":0" << seconds << endl;
		}
		else {
			cout << hour << ":" << minutes << ":" << seconds << endl;
		}

		Sleep(1000);
	}

}
int main() {
	int hour = 1, minutes = 0, seconds = 0;

	MilitaryHourFormat(hour, minutes, seconds);
	TwelveHourFormat(hour, minutes, seconds);
}