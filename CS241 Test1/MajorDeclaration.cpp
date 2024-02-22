// Chris Yeu T00583170
// Write a Menu Driven Program that will allow the user to select from the following options:
#include <iostream>
#include <string>
using namespace std;

int main() {
    string majors[4] = {"Biology","Computer Science","Math","Chemistry"};

    cout << "Welcome TSU students! Please select your major from the following list:" << endl;
    for(int i = 0; i < 4; i++) {
        cout << i+1 << ". " << majors[i] << endl;
    }
    
    for(int j = 0; j < 25; j++) {
        int choice;
        cout << "TSU Student " << j+1 << ", enter the number corresponding to your chosen major: ";
        cin >> choice;
        
        if(choice >= 1 && choice <= 4) {
            cout << "TSU Student " << j+1 << " has selected " << majors[choice-1] << " as their major." << endl;
        } else {
            cout << "Invalid choice. TSU Student " << j+1 << " please enter a number between 1 and 4." << endl;
        }
    }

    return 0;
}