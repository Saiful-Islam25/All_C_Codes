#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>& candidates, int target, int ind, vector<int>& output, vector<vector<int>>& ans){
        //base case if we traverse all candidates
        if(ind == candidates.size()){
            //if target is zero then
            //insert output array into ans and return
            if(target==0)
                ans.push_back(output);
            return ;
        }
        
        //include candidates of index if target is greater than candidate[ind]
        if(candidates[ind]<=target){
            //insert ind of candidates in output
            output.push_back(candidates[ind]);
            //Recursive call by only updating target
            //We will not update ind as same number can be use multiple times
            solve(candidates,target-candidates[ind],ind,output,ans);
            //Backtracking by removing last element
            output.pop_back();
        }
        
        //excluding current index and moving to next index 
        solve(candidates,target,ind+1,output,ans);
}
    
vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;   //storing answer of unique combinations
        vector<int> output;   //storing answer at a instance
        int ind = 0;  //starting index
        //Function Call
        solve(candidates,target,ind,output,ans);
        return ans;
}

int main() {
    
    //Array of candidates whose combinations sum to be equal to target
    vector<int> candidates = {2,3,4,5};
    int target = 7;   //target of each combination sum
    
    //Function Call
    vector<vector<int>> ans = combinationSum(candidates,target);
    
    //Printing all unique combinations of candidates
    for(int i=0;i<ans.size();i++){
        cout<<"[";
        for(int j=0;j<ans[i].size();j++){
            if(j==ans[i].size()-1) cout<<ans[i][j];
            else cout<<ans[i][j]<<",";
        }
        cout<<"]"<<" ";
    }
    
    return 0;
}