#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        string a;
        string b;
        cin >> a >> b;
        int x = 0; // row
        int y = 0;  //coulmn
        int alpha=0;
        for(int j=1;j<n;j++){
            if(a[j]=='0' || b[j]=='0'){
                y++;
            }
            else{
                x++;
            }
                   
            
        }
        
        if (x == 0 && y == n-1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}