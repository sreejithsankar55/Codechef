/* (: Sreejith Codes :) */
 
#include    <bits/stdc++.h>
 
#define 	ll 	long long
#define 	ld 	long double
#define 	pb 	push_back
#define 	ff 	first
#define 	ss 	second
#define 	mp 	make_pair
#define 	mod  	1000000007
#define 	pi 	3.141592653589793
 
using namespace std;
 
int main()
{
		ll t,len;
		cin>>t;
		
		
		while(t--)
		{
			 string s;
			 cin>>len;
			 
			 ll g;
			 cin>>s;
			 if(len%2==0)
			 for ( ll i = 0 ; i < len ; i+=2 )
			 {
				 swap(s[i],s[i+1]);
			 }
			 else
			 for ( ll i = 0 ; i < len-1 ; i+=2 )
			 {
				 swap(s[i],s[i+1]);
			 }
			 for ( ll i = 0 ; i < len ; i++ )
			 {
				 if(s[i]<=109){
				 g=(int)(s[i])-97;
				 s[i]=(122-g);
				 }
				 else
				 {
					g=122-(int)(s[i]); 
				   s[i]=(97+g);
					}
				 cout<<s[i];
			 }
			 cout<<endl;
			
			
			
		}
 
 
        return 0;
}
 
 
