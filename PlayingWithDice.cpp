//********nikhiljugale007**********//

#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
#include<set>
#include<iterator>

using namespace std;

#define fast        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll          long long 
#define v           vector<ll int>
#define it          iterator it
#define pb          push_back
#define f(a,b)      for(long long int i=a;i<b;i++)
#define fv(v)       for(auto i=v.begin() ; i!=v.end();i++)
#define min         min_element
#define max         max_element
#define hell        1000000007


int main(){

    fast;
    int x , y ; 
    cin>>x>>y;
    int a=0 ,b=0 ,c=0 ;

    int r1, r2 ;
    f(1,7){
        r1 = abs(i-x);
        r2 = abs(i-y);

        if(r1>r2)
            a++;
        else if(r1<r2)
            c++;
        else
            b++;
    }
    cout<<c<<" "<<b<<" "<<a<<endl;

    return 0;
}