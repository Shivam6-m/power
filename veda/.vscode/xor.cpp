#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    char findTheDifference(string s, string t) {
        int sumS = 0, sumT = 0;
        for(char c : s)
            sumS += c;
        for(char c : t)
            sumT += c;
        return sumT - sumS;
    }
};
int main() {
    Solution sol;
    string s, t;
    cout << "Enter string s: ";
    cin >> s;
    cout << "Enter string t: ";//
    cin >> t;
    char result = sol.findTheDifference(s, t);
    cout << "Extra character is: " << result << endl;
    return 0;
}