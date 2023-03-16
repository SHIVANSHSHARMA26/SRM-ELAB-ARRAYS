#include <bits/stdc++.h>
using namespace std;
int main()
  {
int n;
cin>>n;
int array[n];
int i;
for(i=0;i<n;i++)
cin>>array[i];
int num,j,count=0;
cin>>num;
vector<int>v ;
for(int i =0; i< n; i++)
{
for(j=i+1;j<n;j++)
{
if(array[i] +array[j] == num)
{
cout<<"["<<array[i]<<" "<<array[j]<<"]\n";
count++;
}
}
}
cout<<"Total Number of Pairs:"<<count;
return 0;
}
