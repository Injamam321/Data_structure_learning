#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,2,3,5,5,3,5,5,6,5,5,5,4,5};
    replace(v.begin(),v.end()-1,5,10);
    for(int x: v)
    {
        cout << x << " ";
    }
    return 0;
}