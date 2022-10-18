// Substring with Concatenation of All Words
/*  
    Difficulty :- Hard
    Ref :- https://leetcode.com/problems/substring-with-concatenation-of-all-words/
    Author :- Abhilash Chaparala [https://github.com/abhilashchaparala]
*/



#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> result;
        if(s.empty() || words.empty()) return result;
        int word_width = words[0].size();
        if(s.size()<word_width) return result;
        unordered_map<string, int> wordcount;
        //record wordcount of words for counting in the next step
        for(auto iter = words.begin(); iter!=words.end();++iter)
            ++wordcount[*iter];
        for(int i = 0;i<word_width;++i){
            unordered_map<string, int> found;
            int left = i, count = 0;
            for(int j = i; j<=s.size()-word_width;j += word_width){
                //attention, s.size() has type size_t, so s.size()-word_width will alway greater than 0
                string sub = s.substr(j, word_width);
                if(wordcount.find(sub) != wordcount.end()){
                    ++found[sub];
                    ++count;
                    while(found[sub] > wordcount[sub]){//move left bound until meet the condition
                        --found[s.substr(left, word_width)];
                        --count;
                        left+=word_width;
                    }
                    if(count == words.size())//find a valid concatenation
                        result.push_back(left);
                }else{
                    //sub does not found in wordcount, so clear status, and keep moving windows from next word
                    found.clear();
                    count = 0;
                    left = j+word_width;
                }
            }
        }
        return result;
    }
};