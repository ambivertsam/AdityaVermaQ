#include<bits/stdc++.h>
using namespace std;
int val[100],wt[100],w,n;
int knapsack(int val[],int wt[],int w,int n)
{
    if(n==0||w==0)
        return 0;
    if(wt[n-1]<=w)
    {
        return max((val[n-1]+knapsack(val,wt,w-wt[n-1],n-1)),knapsack(val,wt,w,n-1));
    }
    else if(wt[n-1]>w)
    {
        return knapsack(val,wt,w,n-1);
    }
}
int main()
{
    int ans=0;
    cout<<"Enter n"<<endl;
    cin>>n;
    cout<<"Enter w"<<endl;
    cin>>w;
    for(int i=0;i<n;i++)
    {
        cin>>val[i];
    }
    for(int i=0;i<n;i++)
        {
            cin>>wt[i];
        }
    ans=knapsack(val,wt,w,n);
    cout<<ans<<endl;

}

