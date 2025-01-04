//Second ways to solve this problem is that
// Just look the problem what we need 3 length subsequence
// which is palindrome  like _anycharacter_
// So what we will do just go bia each character
// and check whether another same character is present
// if second character is present ($_$) like this
// just count the no of unique character inside that 
// That  will we our answer 
#include<bits/stdc++.h>
using namespace std;
int count_nof_subsequence_length3_palindrome(string str){
    set<char>st(str.begin(),str.end());
    int ans=0;
    for(auto it:st){
        char ch=it;
        int first_index=-1,second_index=-1;
        unordered_set<char>s;
        for(int i=0;i<str.size();i++){
            if(str[i]==ch){
                if(first_index==-1){
                    first_index=i;
                }else{
                    second_index=i;
                }
            }
        }
        for(int i=first_index+1;i<second_index;i++){
            s.insert(str[i]);
        }
        ans+=s.size();
    }
    return  ans;
}
int main(){

}