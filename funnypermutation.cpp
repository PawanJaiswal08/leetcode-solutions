#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
 
int main()
{
 
 
    int ttt;
    cin>>ttt;
    while(ttt--)
    {
        int n1;
        cin>>n1;
        if(n1==3)
        cout<<"-1"<<endl;
        else{
            if(n1%2){
                int anurag = (n1/2)+1;
                for (int i = n1; i > anurag; i--)
                {
                    cout<<i<<" ";
                }
                for (int i = 1; i <= anurag; i++)
                {
                    cout<<i<<" ";
                }
                cout<<endl;
                
            }
            else{
                for (int i = n1; i >= 1; i--)
                {
                    cout<<i<<" ";
                }
                cout<<endl;
            }
        }
    }
    return 0;
}