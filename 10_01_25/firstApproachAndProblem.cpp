//Problem Statement==> Given two vector of string word1 and word2
//return all string in word2 in such that all string a word1 are subset 


// In brute force what we can do just take every string in word1 and check all string of
// word2 does it is subset are  not
// If satisfy the condition the we add it our answer otherwise we skip it
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> wordSubsets(vector<string>& A, vector<string>&B) {
         vector<int> count(26), tmp(26);
        int i;
        for (string b : B) {
            tmp = counter(b);
            for (i = 0; i < 26; ++i)
                count[i] = max(count[i], tmp[i]);
        }
        vector<string> res;
        for (string a : A) {
            tmp = counter(a);
            for (i = 0; i < 26; ++i)
                if (tmp[i] < count[i])
                    break;
            if (i == 26) res.push_back(a);
        }
        return res;
    }
      vector<int> counter(string& word) {
        vector<int> count(26);
        for (char c : word) count[c - 'a']++;
        return count;
    }
};