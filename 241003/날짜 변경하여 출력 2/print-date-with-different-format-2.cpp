#include <bits/stdc++.h>
using namespace std;

vector<string> split(const string& str, char delimiter) {
    vector<string> result;
    string temp = "";
    for (char ch : str) {
        if (ch == delimiter) {
            if (!temp.empty()) {
                result.push_back(temp);
                temp = "";
            }
        }
        else {
            temp += ch;
        }
    }
    if (!temp.empty()) {
        result.push_back(temp);
    }
    return result;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string s; cin >> s;
    vector<string> tokens = split(s, '-');
    cout << tokens[2] << "." << tokens[0] << "." << tokens[1];
}