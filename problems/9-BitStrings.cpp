#include<bits/stdc++.h>
#include<math.h>

typedef long long int ll;
#define intlimit 2147483647;
using namespace std;

// void swap(int a[],int i,int j)
// {
//     int temp=a[i];
//     a[i]=a[j];
//     a[j]=temp;
// }
ll m=1000000007;
ll bitpow(ll n)
{
    if (n==0)
        return 1;
    if (n==1)
        return 2%m;
    ll ans = bitpow(n/2);
    ans=(ans*ans)%m;

    if (n%2==0)
        return ans;
    else
        return(ans*2 )%m;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll ans=bitpow(n);
    cout<<ans;
}