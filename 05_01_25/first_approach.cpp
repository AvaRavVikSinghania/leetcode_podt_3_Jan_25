//Problem statement
//Given a string and and some sift operation vector is given
//Operation contain two type of operation first one is left sift of character
//like [L,R,Op_typ1] [L,R] define the substring which need to sift and operation type define left sift or right sift a left sift become z and 
// right sift become a->b
//We have to find out final string after the all operation completed
// First appraoch just do what the problem is saying for every operation and after that just return the final answer
//time complexity of the function is O(n*m);
#include<bits/stdc++.h>
using namespace std;
string findfinalString(vector<vector<int>>&operation,string str){
    int n=str.size();
    int m=operation.size();
    for(int i=0;i<m;i++){
        int left=operation[i][0];
        int right=operation[i][1];
        int operation_type=operation[i][2];
        for(int j=0;j<n;j++){
           if(operation_type==0){//leftsift
             if(str[j]=='a'){
                str[i]='z';
             }else{
                str[i]-=1;
             }
           }else{//rightsift
              if(str[j]=='z'){
                str[i]='a';
             }else{
                str[i]+=1;
             }
           }
        }
    }
    return str;
}
int main(){

}