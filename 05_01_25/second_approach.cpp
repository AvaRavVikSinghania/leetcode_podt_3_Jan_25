//In first approach we are doing unnecessary operation like
//[0,2,1] and [0,2,0] in both operation final answer will not change
//So we require only which character in every index is changing how much time 
//Basic Idea is that if we  have [0,2] substring we will hash the 0-->+1
//                                                                3-->-1 for right sift
//
// [0,2] left sift                                                -1-->+1;
//                                                                 2-->-1
#include<bits/stdc++.h>
using namespace std;
 string shiftingLetters(string s, vector<vector<int>>& sh) {
        long sz=s.size();
        vector<long>line(sz+1,0);
        for(auto & i:sh){
            // forward shift so do +1
            if(i[2]==1){
                line[i[0]]++;
                line[i[1]+1]--;
            }
            //backward shift so do -1
            else{
                line[i[0]]--;
                line[i[1]+1]++;                
            }
        }
        for(int i=1;i<=sz;i++)
            line[i]+=line[i-1];
        for(int i=0;i<sz;i++){
		// line[i] is how many times i have to increase or decrease the s[i] char.So i am adding it and taking modulo
			int increaseBy=(s[i]-'a'+line[i])%26;
		// this is to make -ve module +ve. 
			increaseBy=(increaseBy+26)%26;
			s[i]='a'+increaseBy;
        }
        return s;      
    }
int main(){

}