#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



 bool compare (const pair<int,int>&a,const pair<int,int>&b) {
        return a.second < b.second;
    }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    vector<pair<int,int>>arr;
    for(auto i=0; i<n;i++)
    {
        int h,k;
        cin>>h>>k;
        arr.push_back(make_pair(h,k));
    }
    int t;
    cin>>t;
    vector<pair<int,int>>v;
    vector<int>b;
   for(int i=0;i<t;i++)
    {
        int l,m,j;
        cin>>l>>m>>j;
        v.push_back(make_pair(l,m));
        b.push_back(j);
    }
    int z = v.size();
    for(int i=0;i<z;i++)
    {
        int from=v[i].first-1;
        int to=v[i].second-1;
        if(arr[from].second>=b[i])
        {
            arr[from].second-=b[i];
            arr[to].second+=b[i];
            cout<<"Success"<<"\n";
        }
        else
        {
            cout<<"Failure"<<"\n";
        }

    }

    sort(arr.begin(),arr.end(),compare);
    cout<<"\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i].first<<" " <<arr[i].second<<"\n";
    }

}
