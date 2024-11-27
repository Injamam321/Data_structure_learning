#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int N;
    cin >> N;

    vector <int> A(N), B(N);

    // Input array A
    for (int i = 0; i < N; i++) 
    {
        cin >> A[i];
    }

    // Input array B
    for (int i = 0; i < N; i++) 
    {
        cin >> B[i];
    }

    vector<int> C;

    // Concatenate arrays B and A
    for (int i = 0; i < N; i++) {
        C.push_back(B[i]);
    }

    for (int i = 0; i < N; i++) {
        C.push_back(A[i]);
    }

    // Print the concatenated array C
    // for (int i = 0; i < C.size(); i++)
    // {
    //     cout << C[i] << " ";
    // }
    for(int val: C)
    {
        cout<<val<<" ";
    }

    return 0;
}