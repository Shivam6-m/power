#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>//
using namespace std;//

string reverseWords(string s) {//
    stringstream ss(s);//
    string word, result;//

    vector<string> words;//

    while (ss >> word) {
        words.push_back(word);
    }

    reverse(words.begin(), words.end());

    for (int i = 0; i < words.size(); i++) {
        result += words[i];
        if (i != words.size() - 1) result += " ";//ohk
    }

    return result;
}

int main() {
    string s = "the sky is blue";
    cout << reverseWords(s);
    return 0;
}