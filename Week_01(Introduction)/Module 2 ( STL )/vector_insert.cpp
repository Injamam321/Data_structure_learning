#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={2,3,4,5,6,7};
    vector<int> v2={10,20,30,40};
    v.insert(v.begin()+3,v2.begin(),v2.end());
    
    for(int x: v) //range based for loop only value printing loop not index printing
    {
        cout<<x<<" ";
    }
    return 0;
}