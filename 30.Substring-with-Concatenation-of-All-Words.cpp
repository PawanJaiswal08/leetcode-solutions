class Solution {
public:
    bool check(int st,int en,int sz,map<string,int> mp,string s,int el){
        int i = st;
        while(i<=en){
            string t = s.substr(i,el);
            //cout<<t<<endl;
            if(mp.find(t)!=mp.end()){
                mp[t]--;
                if(mp[t]==0){
                    mp.erase(t);
                }
                i+=el;
            }else{
                return false;
            }
        }
        return (mp.size()==0);
    }
    
    vector<int> findSubstring(string s, vector<string>& w) {
        map<string,int> mp;
        int m = w.size();
        int el = w[0].size();
        int n = s.size();
        int i = 0;
        vector<int> res;
        for(auto x:w){
            mp[x]++;
        }
        while(i<n){
            int st = i;
            int en = i+el*m -1;
            if(en>=n)break;
            if(check(st,en,0,mp,s,el)){
                res.push_back(i);
                i++;
            }else{
                i++;
            }
        }
        return res;
    }
};