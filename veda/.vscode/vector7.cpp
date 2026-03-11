#include <iostream>
using namespace std;
int main() {
    int n = 3;
    for(int i = 1;i <= n; i++) {
        // spaces
        for(int j = 1; j <= 3-i; j++) {
            cout << " ";
        }
        if(i == 1) {
            cout << "O";
        }
        else if(i == 2) {
            cout << "/|\\";
        }
        else if(i == 3) {
            cout << "/ \\";
        }
        cout << endl;
    }
    return 0;
}