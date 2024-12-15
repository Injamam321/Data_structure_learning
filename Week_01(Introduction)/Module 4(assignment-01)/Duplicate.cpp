#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int N;
    cin >> N;

   bool flag = false;
   vector<int> values;

    for (int i = 0; i < N; i++) 
    {
        int num;
        cin >> num;

        // Check if the value already exists in the vector
        if (find(values.begin(), values.end(), num) != values.end()) 
        {
            flag = true;
            break;
        }

        // Insert the value into the vector
        values.push_back(num);
    }

    if (flag) 
    {
        cout << "YES" << endl;
    }
    else 
    {
        cout << "NO" << endl;
    }

    return 0;
}
