#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n ;i++)
    {
        cin>>arr[i];
    }
    int t; 
    cin>>t;
     for(int i =0;i<n-1;i++)
    {
         
        if((arr[i]+arr[i+1])== t)
        {
            cout<<i<<" "<<i+1;
        }
    }
    return 0;
}
