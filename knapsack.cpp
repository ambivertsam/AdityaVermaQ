#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t[100][1000];
    int wt[100],val[100];
    int n,w;
    cout<<"Enter n"<<endl;
    cin>>n;
    cout<<"Enter w"<<endl;
    cin>>w;
    int i,j;
    cout<<"Enter weight array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>wt[i];
    }
    cout<<"Enter value array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>val[i];
    }
    for(i=0;i<n+1;i++)
    {
        t[i][0]=0;
    }
    for(j=0;j<w+1;j++)
    {
        t[0][j]=0;
    }
    for(i=1;i<n+1;i++)
    {
        for(j=1;j<w+1;j++)
        {
            if(wt[i-1]<=j)
            {
                t[i][j]=max(val[i-1]+t[i-1][j-wt[i-1]],t[i-1][j]);
            }
            else if(wt[i-1]>w)
            {
                t[i][j]=t[i-1][j];
            }
        }
    }
    cout<<t[n][w]<<endl;
}
