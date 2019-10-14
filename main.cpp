#include <iostream>
#include <windows.h>

using namespace std;

int main() {

    int c = 5; // in seconds.
    cout << "Input how many seconds" << endl;
    cin >> c;
    int sleep = 1000;
    for(c; c >= 0; c--) {
        cout << c << endl;
        Sleep(sleep);
    }
    cout << "Finished." << endl << "Click to exit" << endl;
    getchar();
}