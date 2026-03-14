#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return false;
        vector<int> count(26,0);
        for(int i = 0; i < s.size(); i++) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }
        for(int i = 0; i < 26; i++) {
            if(count[i] != 0)
                return false;
        }
        return true;
    }
};
int main() {
    Solution sol;
    string s, t;
    cout << "Enter first string: ";
    cin >> s;
    cout << "Enter second string: ";
    cin >> t;
    if(sol.isAnagram(s, t))
        cout << "Anagram" << endl;
    else
        cout << "Not Anagram" << endl;
    return 0;
}