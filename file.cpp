/*
Name: Tyler Zhang
Program Name: Looping Lab
Date: 10/30/24
Extra: Using C++ vector 
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    // Exercise 1:
    vector<string> quotes;
    string days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    string cur;
    string empty;
    for (int i = 0; i < 7; i++) {
        cout << "Enter a motivational quote for " + days[i] + "!" << endl;
        getline(cin, cur);
        quotes.push_back(cur);
    }
    for (int i = 0; i < 7; i++) {
        cout << quotes[i] << endl;
    }
    cin >> empty;
    // Exercise 2:
    int energy = 0;
    int supplies = 0;
    int action;
    while (energy > 0 && supplies < 10) {
        cout << "Choose an action." << endl;
        cout << "1: Search for supplies (1 energy cost, 1 supply added)" << endl;
        cout << "2: Rest (restores 2 energy, no supplies added)" << endl;
        cin >> action;
        if (action == 1) {
            energy--;
            supplies++;
        }
        else if (action == 2) {
            energy += 2;
        }
        else {
            cout << "Please enter a valid option." << endl;
        }   
    }
    if (supplies >= 10) {
        cout << "Congratulations, you survived! Well done!" << endl;
    }
    else if (energy <= 0) {
        cout << "Aww shucks, you didn't survive the zombie apocalypse." << endl;
    }
    // Exercise 3:
    int code = 101;
    int ans; 
    char repeat;
    do {
        cout << "Guess the code!" << endl;
        cin >> ans;
        if (ans == code) {
            cout << "Box has been unlocked. Good job!" << endl;
            break;
        }
        else {
            cout << "Incorrect code. Try again? (Y/N)" << endl;
            cin >> repeat;
            if (repeat == 'Y') {
                continue;
            }
            else if (repeat == 'N') {
                cout << "Box remains locked." << endl;
                break;
            }
        }
    } while (true);
}