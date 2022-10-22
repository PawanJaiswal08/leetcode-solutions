class Solution {
public:
    int numDecodings(string s) {
        /*int n = s.size();
        int n1=0,n2=1,n3,ans;    
        for(int i=1;i<=n;i++){    
            n3=n1+n2;    
            n1=n2;    
            n2=n3;    
        }
        cout<<n3<<endl;
        for(int i=0; i<n; i++){
            if(s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'){
                if(s[n-1]=='3'||s[n-1]=='4'||s[n-1]=='5'||s[n-1]=='6'){
                    n3 = n3;
                }
                else{
                n3=n3-2;
                }
            }
            if(s[i]=='7'||s[i]=='8'||s[i]=='9'){
                if(s[i-1]=='1')
                    n3=n3-2;
                else
                    n3=n3-4;
            }
            ans = n3;
            cout<<ans<<endl;    
        }
        return ans;*/
    
    if (!s.size() || s.front() == '0') 
        return 0;
    int r1 = 1, r2 = 1;

    for (int i = 1; i < s.size(); i++) {
        if (s[i] == '0') 
            r1 = 0;
        if (s[i - 1] == '1' || s[i - 1] == '2' && s[i] <= '6') {
            r1 = r2 + r1;
            r2 = r1 - r2;
        }
        else {
            r2 = r1;
        }
    }

    return r1;
    }
};