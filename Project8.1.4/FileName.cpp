#include <iostream>
#include <string>
#include <regex>
using namespace std;

int Count(const string s) {
    regex pattern("[abc]+");
    sregex_iterator it(s.begin(), s.end(), pattern);
    sregex_iterator end;
    int k = 0;
    while (it != end) {
        k++;
        it++;
    }
    return k;
}

string Change(string& s) {
    regex pattern("[abc]+");
    s = regex_replace(s, pattern, "**");
    return s;
}

int main() {
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    cout << "String contained " << Count(str) << " groups of 'abc'" << endl;

    string dest = Change(str);
    cout << "Modified string (param) : " << str << endl;
    cout << "Modified string (result): " << dest << endl;

    return 0;
}