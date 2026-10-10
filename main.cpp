#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string line;
    // Echo input to output
    while (getline(cin, line)) {
        cout << line;
        if (!cin.eof()) cout << '\n';
    }
    return 0;
}
