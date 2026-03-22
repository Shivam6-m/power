#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;   // size

    for (int i = 0; i < n; i++) {        // rows
        for (int j = 0; j < n; j++) {    // columns
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}