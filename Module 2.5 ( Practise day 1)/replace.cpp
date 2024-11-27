#include<bits/stdc++.h>
using namespace std;
    
int main() 
{
    int N;
    cin >> N;

    vector <int> A(N);

    // Input array A
    for (int i = 0; i < N; i++) 
    {
        cin >> A[i];
    }

    // Replace positive numbers with 1
    replace_if(A.begin(), A.end(), [](int x) { return x > 0; }, 1);

    // Replace negative numbers with 2
    replace_if(A.begin(), A.end(), [](int x) { return x < 0; }, 2);

    // Print the modified array A
    for (int i = 0; i < N; i++) 
    {
        cout << A[i];
        if (i < N - 1) 
        {
            cout << " ";
        }
    }

    return 0;
}