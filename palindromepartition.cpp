//shree ganeshay namah
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi (3.141592653589)
#define mod 1000000007
#define ll long long
#define float double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string as;
        cin>>as;
        if(as[0]=='0'){
            for (int i = 0; i < 2*n; i++)
            {
                if(as[i]=='1'){
                    as[i]='0';
                }
                else{
                    as[i]='1';
                }
            }
            
        }
        vector<ll> vc;
        ll cc;
        ll flag = 0;
        ll an;
        for (int i = 0; i < 2*n; i++)
        {
            if(as[i]=='0'){
                vc.push_back(i);
            }
            if(as[i] != as[2*n-i-1]){
                flag=1;
                break;
            }
        }
        if(flag){
            cout<<"1\n";
            cout<<2*n<<endl;
            continue;
        }
        if(vc.size()==0){
            cout<<"-1\n";
        }
        else{
            cc=2*n-1-vc.back();
            for(int i=vc.size()-1; i>=1; i--){
                if(vc[i]-vc[i-1]-1!=cc){
                    flag=1;
                    cout<<"2\n";
                    cout<<vc[i-1]+1<<" "<<2*n-1-vc[i-1]<<endl;
                    break;
                }
            }
            if(flag==0){
                cout<<"2\n";
                cout<<vc[vc.size()-2]+2<<" "<<2*n-2-vc[vc.size()-2]<<endl;

            }
        }
    }
    return 0;
}
