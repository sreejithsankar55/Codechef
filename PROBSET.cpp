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
        ll n,m,f=0;
        cin>>n>>m;

        for(ll i = 0 ; i < n ; i++ )
        {
            set < char > se;
            string s,t;
            cin>>s>>t;
            if(s[0]=='c')
            {
                for(ll j = 0 ; j < m ; j++ )
                {
                    se.insert(t[j]);
                }
                if(se.size()==2)
                {
                    f=1;
                }
            }
            else
            {
                for(ll j = 0 ; j < m ; j++ )
                {
                    se.insert(t[j]);

                }

                if(se.size()==1)
                {
                    set < char >::iterator it;
                    it=se.begin();

                    if((*it=='1')&&(f==0))
                    {
                        f=2;

                    }
                }
            }
        }
        if(f==2)
            cout<<"WEAK";
        else if(f==1)
            cout<<"INVALID";
        else
            cout<<"FINE";

        cout<<endl;
    }

    return 0;

}
