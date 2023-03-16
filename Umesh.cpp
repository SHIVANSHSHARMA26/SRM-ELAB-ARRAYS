#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
while(n!=-1)
{ long long a[n];
for(int i=0;i<n;i
    {
cin>>a[i];
}
vector<vector<long long>>dp(n,vector<long long>(n+1,100000000000000000));
long long sum[n][n+1];
for(int i=0;i<n;i++)
{
sum[i][1]=a[i];
dp[i][1]=0;
}
for(int len=2;len<=n;len++)
{
for(int i=0;i<=n-len;i++)
{
for(int j=1;j<len;j++)
{
sum[i][len]=(sum[i][j]+sum[i+j][len-j])%100;
long long x=dp[i][j]+dp[i+j][len-j]+(sum[i][j]*sum[i+j][len-j]);
dp[i][len]=min(x,dp[i][len]);
}
}
}
cout<<dp[0][n]<<endl;
n=-1;cin>>n;
} return 0;
cout<<"scount[100][100] colours[100]";
}
