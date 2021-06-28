#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define precison std::cout << std::fixed << std::setprecision(20);
#pragma GCC optimize("Ofast")  
#pragma GCC target("avx,avx2,fma") 
typedef long long ll;
using namespace std;

void mergeSortUtil(vector<int> &a,int low,int mid,int high)
{
        vector<int> b;
        int i=low;
        int j=mid+1;
        while(i<=mid||j<=high)
        {
            //cout<<i<<" "<<j<<"\n"
                if(i>mid)
                {
                        b.push_back(a[j++]);
                }
                else if(j>high)
                {
                          b.push_back(a[i++]);
                }
                else
                {
                        if(a[i]<=a[j])
                          b.push_back(a[i++]);
                          else
                          b.push_back(a[j++]);
                }
        }
        for(i=low,j=0;j<b.size();i++,j++)
        a[i]=b[j];
}
void mergeSort(vector<int> &a,int low,int high)
{
        if(high<=low)
        return;
        //cout<<low<<" "<<high<<"\n";
        int mid=low+(high-low)/2;
        mergeSort(a,low,mid);
        mergeSort(a,mid+1,high);
        mergeSortUtil(a,low,mid,high);

}
int main()
{
        fastIO;
        precison;
        vector<int> a ;
        for(int i=0;i<20;i++)
        a.push_back(rand()%20);
        cout<<"\n";
        mergeSort(a,0,a.size()-1);
        for(int i=0;i<a.size();i++)
        {
                cout<<a[i]<<" ";
        }
        

}
