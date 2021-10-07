#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int p;

    cin >> n;

    int ans[n];

    for (int i = 1; i < n + 1; ++i)
    {
        cin >> p;

        ans[p - 1] = i;
    }

    for (int i = 0; i < n; ++i)
    {
        cout << ans[i] << " ";
    }
    cout << "\n";
    return 0;
}