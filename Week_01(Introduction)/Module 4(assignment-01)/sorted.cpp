#include <bits/stdc++.h>
using namespace std;

string Sort(const vector<int> & ar) 
{
    int n = ar.size();
    
    for (int i=1; i<n; i++) 
    {
        if (ar[i] < ar[i-1]) 
        {
            return "NO";
        }
    }
    return "YES";
}

int main() 
{
    int t;
    cin>>t;

    while (t--) 
    {
        int n;
        cin>>n;

        vector<int> ar(n);
        
        for (int i=0; i<n; i++) 
        {
            cin>>ar[i];
        }

        string result = Sort(ar);
        cout<<result<<endl;
    }

    return 0;
}
