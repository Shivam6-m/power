#include <iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        int original = x;
        long reverse = 0;
        while(x > 0) {
            int digit = x % 10;
            reverse = reverse * 10 + digit;
            x = x / 10;
        }
        return original == reverse;
    }
};
int main() {
    Solution sol;
    int x;
    cout << "Enter number: ";
    cin >> x;
    if(sol.isPalindrome(x))
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;

    return 0;
}