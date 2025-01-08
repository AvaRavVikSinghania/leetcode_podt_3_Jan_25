// Just do what question is saying

class Solution {
public:
    bool check(string first,string second){
        if(second.size()<first.size()) return false;
        string pre=second.substr(0,first.size());
        string pos=second.substr(second.size()-first.size(),first.size());
        return first==pre && pos==first;
    }
    int countPrefixSuffixPairs(vector<string>& words) {
        int count=0;
        for(int i=0;i<words.size();i++){
            for(int j=i+1;j<words.size();j++){
                if(check(words[i],words[j])){
                    count++;
                }
            }
        }
        return count;
    }
};