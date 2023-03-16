#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int array[n];
for(int i= 0; i < n ; i++)
{
cin>>array[i];
}
sort(array, array + n);
int i;
for(i=0;i<n;i++)
{
swap(array[i], array[i+1]);
i++;
  } for(int s
:
array)
cout<<s<<" ";
return 0;
cout<<"if(array[i]>array[j])";
}
