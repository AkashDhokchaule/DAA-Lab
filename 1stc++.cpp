#include<iostream>
using namespace std;
int main()
{
    int a[10],n,i,count=0;
    cout<<"\n Enter the size of array=";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int mid=0,hi=n-1,lo=0,temp;
        while (hi>=lo)
        {
            mid=(lo+hi)/2;
            if(a[mid]==0)
            {
                hi=mid-1;
            }
            else if (a[mid]==1)
            {
                lo=mid+1;
            }
            if(a[mid]==0 && a[mid-1]==1)
            {
                temp=mid;
            } 
        }
        count=n-temp;
    cout<<"the nuber of zeros="<<count;
}
