//problem is Something like this We have given a string of binary number 0 and 1 
//0 means ith box do not have any ball
//1 means ith box have 1 ball
// So we have tell the minimum no of operation to collect all the ball to ith index 0<=i<n
//moving 1 ball to its adjacent cost will be 1
//Return the final array of same size in which ans[i] represent the collecting the all ball to ith index

// First Approach 
// Just do what the question is saying
#include<bits/stdc++.h>
using namespace std;
vector<int>findminimumOperation(string box){
    int n=box.size();
    vector<int>ans;
    for(int i=0;i<n;i++){
        int opt=0;
        for(int j=0;j<n;j++){
           if(box[j]=='1'){
              opt+=abs(j-i);
           }
        }
        ans.push_back(opt);
    }
    return ans;
}
//Time complexity of this algorithm is O(n^2);
// Space complexity is O(1) and  for storing the answer o(n)
