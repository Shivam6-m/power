#include <iostream>
using namespace std;

int main() {
    int n ;
    cout<<"Enter a number";
    cin>>n;

    for (int i = 1; i <= n; i++) {

        // Left triangle
        for (int j = 1; j <= i; j++) {
            cout << " *";
        }

        // Middle spaces
        for (int space = 1; space <= 2 * (n - i)-1; space++) {
            cout << "  ";
        }

        // Right triangle
        for (int j = 1; j <= i && j != n; j++) {
            cout << " *";
        }

        cout << endl;
    }

    return 0;
}