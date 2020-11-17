#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
using namespace std;

int main()
{
    int t;
    int tc=0;
    cin>>t;
    IOS;
    while(t)
    {
        tc++;
        int n,b;
        cin>>n>>b;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        int count=0;
        //i cant figure out why but this logic doesnt work
        // while(spent<b)
        // {
        //     count++;
        //     spent=spent+a[k];
        //     k++;
        // }
        // if(spent!=b)
        //     count--;
        for(int i=0;i<n;i++)
        {
            if(a[i]<=b)
            {
                count++;
                b=b-a[i];
            }
        }

        cout<<"Case #"<<tc<<": "<<count<<"\n";
        t--;
    }
}