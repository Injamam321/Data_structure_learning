#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,2,2,2,3,3,45,5,56,55,9,8,6};
    // vector<int>::iterator it;
    // it=find(v.begin(),v.end(),2);
    auto it=find(v.begin(),v.end(),1118);
    if(it==v.end())
    {
        cout<<"not found";
    }
    else{
        cout<<"found";
    }
    // cout<<*it;
    return 0;
}