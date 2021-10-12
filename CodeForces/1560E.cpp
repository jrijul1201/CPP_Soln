#include<bits/stdc++.h>

using namespace std;

string func(string s, string order)
{
    string res = "" + s;
    
    for(int i=0; i<order.size(); i++)
    {
        s.erase(remove(s.begin(), s.end(), order[i]), s.end());
        res += s;
    }
    
    return res;
}

int main()
{
    int tt;
    string s, t, order, t2;

    cin>>tt;
    while(tt--)
    {
        cin>>t;
        
        t2 = "" + t;
        if(t=="")
        {
            cout<<"\n";
            continue;
        }

        s = "", order = "";
        vector<int> act(26, 0), ans(26, 0);
        for(int i=0; i<t.size(); i++)
            act[t[i]-'a']++;
        
        int uniq = 0;
        for(int i=0; i<26; i++)
            if(act[i]>0)
                uniq++;
        
        int size = 0;
        while(t.size()>0)
        {   
            char ch = t[t.size()-1];
            ans[ch-'a'] = act[ch-'a']/uniq;
            t.erase(remove(t.begin(), t.end(), ch), t.end());
            
            size += ans[ch-'a'];
            order = ch + order;
            uniq--;
        }
        
        if(order.size()>size || size>t2.size())
            cout<<"-1\n";
        else
        {
            s = t2.substr(0, size);
            string res = func(s, order);
            
            if(res==t2)
                cout<<s<<" "<<order<<"\n";
            else
                cout<<"-1\n";
        }
        
        // for(int i=0; i<26; i++)
        //     cout<<ans[i]<<" ";
        // cout<<" "<<order<<"\n";
    }
}
///abaabaaaaa