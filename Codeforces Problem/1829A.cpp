    #include <bits/stdc++.h>
    using namespace std;
     
    void solve()
    {
        string s;
        cin>>s;
        string c="codeforces";
        int res=0;
        
        for(int i=0;i<c.size();i++){
            if(s[i]!=c[i]){
                res++;
            }
        }
        cout<<res<<"\n";
    }
     
    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int T;
        cin >> T;
        while (T--) 
        {
            solve();
        }
    }