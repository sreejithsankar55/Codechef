/* (: Sreejith Codes :) */

#include    <bits/stdc++.h>

#define 	ll 	long long
#define 	ld 	long double
#define 	pb 	push_back
#define 	ff 	first
#define 	ss 	second
#define 	mp 	make_pair
#define 	mod 1000000007
#define 	pi 	3.141592653589793

using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        vector < ll > v,v1;
        ll b,n;
        cin>>n;
        for(ll i = 0 ; i < n ; i++ )
        {
            cin>>b;
            v.pb(b);
        }
        sort(v.begin(),v.end());
        for ( ll i = 1 ; i  < n ; i++ )
        {
            v1.pb(abs(v[i]-v[i-1]));
        }
        sort(v1.begin(),v1.end());
        ll p = v1[0];
        cout<<p;


        cout<<endl;
    }

    return 0;

}
