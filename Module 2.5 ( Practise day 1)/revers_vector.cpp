#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int N;
    cin >> N;

    vector<int> A(N);

    // Input array A
    for (int i = 0; i < N; i++) 
    {
        cin >> A[i];
    }


    // type 1:

    //  Reverse the vector A
    // for (int i = 0, j = N - 1; i < j; i++, j--) 
    // {
    //     int temp = A[i];
    //     A[i] = A[j];
    //     A[j] = temp;
    // }

    //  Print the reversed vector A
    // for (int i = 0; i < N; i++) {
    //     cout << A[i];
    //     if (i < N - 1)
    //     {
    //         cout << " ";
    //     }
    // }

    // type 2
    reverse(A.begin(),A.end());
    for(int val: A)
    {
        cout<<val<<" ";
    }

    return 0;
}





