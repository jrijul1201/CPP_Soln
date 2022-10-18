#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;
int main() {
    string s;
    cin >> s;
    int n = s.size();
    string ans;
    ans.push_back('z');
    for (int i = 0; i < n; i++) {
        int k = ans.size();
        if (ans[k - 1] == 'z' && s[i] == 'h') {
            ans.push_back('h');
        }
        if (ans[k - 1] == 'h' && s[i] == 'e') {
            ans.push_back('e');
        }
        if (ans[k - 1] == 'e' && s[i] == 'l') {
            ans.push_back('l');
        }
        if (ans[k - 1] == 'l' && s[i] == 'l' && k == 4) {
            ans.push_back('l');
        }
        if (ans[k - 1] == 'l' && s[i] == 'o' && k == 5) {
            ans.push_back('o');
        }
    }
    // if (ans[1] == 'h' && ans[2] == 'e' && ans[3] == 'l' && ans[4] == 'l' && ans[5] == 'o') {
    //     cout << "YES";
    if (ans == "zhello") {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}