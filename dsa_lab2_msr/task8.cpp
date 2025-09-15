#include <iostream>
#include <string>
using namespace std;

int findPattern(string text, string pattern) {
    //Phle no match
    if (pattern == "") {
        return 0;
    }

    int n = text.size();
    int m = pattern.size();
    //Ab check krte hn k hmain kiya milta hai 
    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (text[i + j] != pattern[j]) {
                break;
            }
        }
        if (j == m) {
            return i; 
        }
    }

    return -1;
}

int main() {
    //Basic Hardcoded Text for now
    string text = "abcdefghijklmnopqrstuvw";
    string pattern;
    cout << "Enter the pattern to search: ";
    cin >> pattern;

    int index = findPattern(text, pattern);

    if (index == -1) {
        cout << "Pattern not found in the text" << endl;
    } else {
        cout << "Pattern found at index: " << index << endl;
    }

    return 0;
}
