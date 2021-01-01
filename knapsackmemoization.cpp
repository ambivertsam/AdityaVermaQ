#include<bits/stdc++.h>
using namespace std;
int wt[100],val[100],w,n;
int t[100][100];
int knapsack(int wt[],int val[],int w,int n)
{
    if(n==0||w==0)
        return 0;
     if(t[n][w]!=-1)
        return t[n][w];
        if(wt[n-1]<=w)
        {
          return t[n][w]=max((val[n-1]+knapsack(wt,val,w-wt[n-1],n-1)),knapsack(wt,val,w,n-1));
        }
        if(wt[n-1]>w)
        {
             return t[n][w]=knapsack(wt,val,w,n-1);
        }
}
int main()
{
    int ans=0;
int i,j;
cout<<"Enter value of n"<<endl;
cin>>n;
cout<<"Enter value of w"<<endl;
cin>>w;
for(int i=0;i<n+1;i++)
{
    for(int j=0;j<w+1;j++)
    {
        t[i][j]=-1;
    }
}
cout<<"Enter weights"<<endl;
for(int i=0;i<n;i++)
{
    cin>>wt[i];
}
cout<<"Enter value array"<<endl;
for(int i=0;i<n;i++)
{
    cin>>val[i];
}
 ans=knapsack(wt,val,w,n);
cout<<ans<<endl;
}
