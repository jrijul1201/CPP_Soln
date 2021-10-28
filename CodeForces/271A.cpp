#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool uniqueCharacters(string str)
{
    set<int> int_set;
    for(int c : str)
    {
        int_set.insert(c);
    }
    if (int_set.size() == str.size())
    {return true;}
    else
    {return false;}
}
int main()
{
    int n;
    cin>>n;
    for(int i=n+1;i<=9012;i++)
    {   
        
        string sn = to_string(i);
        if(uniqueCharacters(sn))
        {cout<<sn<<endl;
        break;}
    }
  
return 0;
}