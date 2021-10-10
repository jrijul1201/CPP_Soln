/*  
    Difficulty :- Medium
    Ref :- https://leetcode.com/problems/implement-trie-prefix-tree/
    Author :- AmitThakur [https://github.com/AmitThakur045]
*/

#include<bits/stdc++.h>
using namespace std;

class Trie {
    struct TrieNode {
        struct TrieNode *child[26];
        bool isEnd = false;
    } *root;
public:
    Trie() {
        root = new TrieNode();
    }

    void insert(string word) {
        TrieNode* node = root;
        for(auto ch : word) {
            if(node->child[ch - 'a'] == NULL)
                node->child[ch - 'a'] = new TrieNode();
            node = node->child[ch - 'a'];
        }
        node->isEnd = true;
    }
    
    bool search(string word) {
        TrieNode* node = root;
        for(auto ch : word) {
            if(node->child[ch - 'a'] == NULL)
                return false;
            node = node->child[ch - 'a'];
        }
        return node->isEnd == true;
    }
    
    bool startsWith(string prefix) {
        TrieNode* node = root;
        for(auto ch : prefix) {
            if(node->child[ch - 'a'] == NULL)
                return false;
            node = node->child[ch - 'a'];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */