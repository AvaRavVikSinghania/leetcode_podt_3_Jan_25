// Problem statement  
// Given a string of lower character we have to find subsequence which is also palindrome
//Approach-1
//  Generate all subsequence of length 3 and store it for the unique count of subsequence and just return the unique count
// Number
#include<bits/stdc++.h>
using namespace std;
unordered_set<string>st;
bool palindrome(string temp){
    return (temp[0]==temp[2]);
}
void solve(int i,string str,string temp){
    if(i>=str.size()){
        return;
    }
    if(temp.size()==3){
        if(palindrome(temp)){
           st.insert(temp);
        }
        return; 
    }
    solve(i+1,str,temp+str[i]);
    solve(i+1,str,temp);
    return;
}
int count_unique_palindrome_length_3(string &str){
       st.clear();
       solve(0,str,"");
       return st.size();
}
int main(){

}
//So obious time complexity will be exponential 