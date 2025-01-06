// 0101110
//In previous problem we are working in O(n2) solution So we need to make it better
// If look carefully then what we are doing just adding the ball to its right and left 
// So we take prefix something that like thing then it would be better
//0101110
#include<bits/stdc++.h>
using namespace std;
vector<int>minimumOperation(string box){
      int n=box.size();
    vector<int>ans(n,0);
    if(n<=1) return ans;
    int cnt=0,opt=0;
    for(int i=0;i<n;i++){
        ans[i]+=opt;
        if(box[i]=='1'){
            cnt++;
        }
        opt+=cnt;
    }
    cnt=0,opt=0;
    for(int i=n-1;i>=0;i--){
        ans[i]+=opt;
        if(box[i]=='1')cnt++;
        opt+=cnt;
    }
    return ans;
}
//Time complexity will be O(n)+O(n)
// Space complexity will be O(1)
