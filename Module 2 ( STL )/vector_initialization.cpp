#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector <int> v; //type 1

    // vector <int> v(5); //type 2

    //  vector <int> v(4,12); //type 3

     vector <int> v1(5,10); //type 4

      vector <int> v(v1); //type 4

    // int a[5]={10,20,30,40,50}; //type 5

    // vector <int> v(a, a+5);  //type 5

    //vector <int> v={10,20,30,40,50,60,70};

     for(int i=0; i<v.size(); i++)
     {
         cout<< v[i] <<" ";
     }
     cout<<endl;

    cout<< v.size()<<endl;
    return 0;
}
