//shree ganeshay namah
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


int main()
{


    int tt;
    cin>>tt;
    while(tt--)
    {
        int n;
        cin>>n;
       
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
         int max1 = 0;
        for (int i = 0; i < n; i++)
        {
            if(a[i]>a[max1])
            max1 = i;
        }
        if(max1 == 0){
            cout<<-1<<endl;
        }
        else{
            cout<<max1<<endl;
            for (int i = 0; i < max1; i++)
            cout<<a[i]<<" ";
            cout<<endl;
            cout<<n-max1<<endl;
            for(int i =max1; i<n; i++)
            cout<<a[i]<<" ";
            cout<<endl;
            
        }
    }
    return 0;
}
