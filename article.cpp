#include<bits/stdc++.h>
using namespace std;

int solve(int arr[],int n,int x)
{
    int count=0;
    map<int,int> m;
    int lastidx=-1;
    int sum_so_far=0;
    m[0]=-1; // initialize sum of 0 at index -1;
    for(int i=0;i<n;i++)
    {
        sum_so_far+=arr[i];
        if(m.find(sum_so_far-x)!=m.end() && m[sum_so_far-x]>=lastidx)
        {
            count++;
            lastidx=i;
        }

        m[sum_so_far]=i;
    }
    return count;
}

int main()
{
    int arr[]={0,0,0};
    int x=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<solve(arr,n,x);
}
