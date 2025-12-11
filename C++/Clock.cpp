#include<iostream>
#include<windows.h>
using namespace std;

int main() {
    int h, m, s;
    int d = 1000;  // Delay of 1000 milliseconds (1 second)

    cout << "Set time (hours minutes seconds):\n";
    cin >> h >> m >> s;

    // Validate the input time
    if (h > 12 || m > 60 || s > 60) {
        cout << "ERROR! Invalid time format." << endl;
        exit(0);
    }

    // Infinite loop for the clock
    while (1) {
        s++;  // Increment seconds

        if (s > 59) {
            m++;  // Increment minutes if seconds go beyond 59
            s = 0;
        }

        if (m > 59) {
            h++;  // Increment hours if minutes go beyond 59
            m = 0;
        }

        if (h > 12) {
            h = 1;  // Reset hours if they go beyond 12 (12-hour format)
        }

        // Display the clock
        cout << "\nClock:";
        cout << "\n" << (h < 10 ? "0" : "") << h << ":" 
             << (m < 10 ? "0" : "") << m << ":" 
             << (s < 10 ? "0" : "") << s << endl;

        Sleep(d);  // Sleep for 1 second
        system("cls");  // Clear the screen (specific to Windows)
    }
}