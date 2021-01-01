#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t[100][1000];
    int sum[100];
    int n,w;
    cout<<"Enter n"<<endl;
    cin>>n;
    cout<<"Enter sum"<<endl;
    cin>>w;
    int i,j;
    cout<<"Enter array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>sum[i];
    }
    for(i=0;i<n+1;i++)
    {
        t[0][i]=0;
    }
    for(j=0;j<w+1;j++)
    {
        t[j][0]=1;
    }

    for(i=1;i<n+1;i++)
    {
        for(j=1;j<w+1;j++)
        {
            if(sum[i-1]<=j)
            {
                t[i][j]=t[i][j-sum[i-1]] || t[i-1][j];
            }
            else if(sum[i-1]>w)
            {
                t[i][j]=t[i-1][j];
            }
        }
    }
    cout<<t[n][w]<<endl;
}
