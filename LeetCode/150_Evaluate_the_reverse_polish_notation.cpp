/*  
    Difficulty :- Medium
    Ref :- https://leetcode.com/problems/evaluate-reverse-polish-notation/
    Author :- hitesh22rana [https://github.com/hitesh22rana]
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        int a,b;
        
        for(string str : tokens) {
            if(str == "+") {
                a = s.top();
                s.pop();
                b = s.top();
                s.pop();
                s.push(a+b);
            }
            
            else if(str == "-") {
                a = s.top();
                s.pop();
                b = s.top();
                s.pop();
                s.push(b-a);
            }
            
            else if(str == "*") {
                a = s.top();
                s.pop();
                b = s.top();
                s.pop();
                s.push(a*b);
            }
            
            else if(str == "/") {
                a = s.top();
                s.pop();
                b = s.top();
                s.pop();
                s.push(b/a);
            }
            
            else {
                s.push(stoi(str));
            }
        }
        return s.top();
    }
};