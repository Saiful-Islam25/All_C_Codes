#include<bits/stdc++.h>
using namespace std;

void solve(string digits, string temp, int ind, vector<string>& ans, string mapping[]){
        //if we traverse all index of digits
        if(ind>=digits.length()){
            //store the temp string in ans vector and return 
            ans.push_back(temp);
            return;
        }
        
    //Find the number at ind of digits
        int element = digits[ind] - '0';
    //string at that number on phone can be find out in mapping
        string s = mapping[element];
       
    //Looping through string
        for(int j=0;j<s.length();j++){-
            //Inserting the jth index of string
            temp.push_back(s[j]);
            //Recursive call for next index of digits
            solve(digits,temp,ind+1,ans,mapping);
            //Backtracking to remove the last elment in temp string
            temp.pop_back();
        }
    }

vector<string> letterCombinations(string digits) {
        
        vector<string> ans; //Storing ans in this vector
        
    //if there is no digit then return empty vector
        if(digits.length()==0){
            return ans;
        }
    //temp string for storing each ans
        string temp="";
        
    //Mapping of digits to letters
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    
    //Function Call
        solve(digits,temp,0,ans,mapping);
    //Return ans
        return ans;
}

int main() {
    
    //Initializing string of digits whom which we have to find combinations on phone 
    string digits = "754";
    
    //Function Call
    vector<string> ans = letterCombinations(digits);
    
    //Printing the letter combinations
    cout<< "All possible letter combinations of Digits 234 are :"<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}