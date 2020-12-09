#include <iostream>
#include <string>
using namespace std;

int main() { 
    string hello = "Hello World";
    string fullname;
    string aorb; 
    cout << "Please type your full name: ";
    getline (cin, fullname);
    cout << "\n Hello " << fullname << "!\n";
    cout << "You are about to go on a Journey, do you want to go to \nA. Beach \nB. Park \nType A or B ==> ";
    cin >> aorb;

    if (aorb[0] == 'a' || 'A') {
        cout << "You enjoyed a nice day at the beach, and slept very well that night. Goodbye " << fullname << "!\n" ;
    }
    else if (aorb[0] == 'b' || 'B') {
        cout << "You went to a park, and had a picnic, but you did not sleep well. Goodbye " << fullname << "!\n";
    };

    cout << "Program is ending to play again type in: make run";

    return 0;
}