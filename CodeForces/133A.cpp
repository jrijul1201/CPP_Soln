#include <iostream>
#include <cstdio>
using namespace std;
 
int main()
{
    string s;
    cin >> s;
    int length = s.length();
    
    for(int i = 0; i < length; i++)
    {
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}