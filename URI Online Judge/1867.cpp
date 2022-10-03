#include <bits/stdc++.h>
using namespace std;
int sum(int a) {
    int n = 0;
    while (a > 0) {
        n += a % 10;
        a = a / 10;
    }
    return n;
}

int main() {
    while (true) {
        int ar[4], br[4];
        string a, b;
        cin >> a >> b;
        if (a == "0" && b == "0") break;
        int al = a.length();
        int bl = b.length();
        int na = 0, nb = 0;
        for (int i = 0; i < al; i++) {
            na += a[i] - 48;
        }
        for (int i = 0; i < bl; i++) {
            nb += b[i] - 48;
        }

        while (na >= 10) {
            na = sum(na);
        }
        while (nb >= 10) {
            nb = sum(nb);
        }
        if (na > nb)
            cout << "1\n";
        else if (na < nb)
            cout << "2\n";
        else {
            cout << "0\n";
        }
    }
    return 0;
}