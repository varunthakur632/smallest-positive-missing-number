#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    const int N=1e6+2;
    int check[N];
    for(int i=0;i<N;i++)
    {
        check[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>=0)
        {
            check[a[i]]=1;
        }
    }
    for(int i=1;i<n;i++)
    {
        if(check[i]==0)
        {
            cout<<i;
            break;
        }
    }
    return 0;
}
