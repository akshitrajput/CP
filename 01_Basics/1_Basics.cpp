#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Number of elements :";
    cin>>n;
    int arr[n];
    float avg = 0;
    int sum = 0;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
        sum += arr[i];
    }
    avg = (float)sum/n;
    cout<<"Sum of numbers = "<<sum<<endl;
    cout<<"Average of numbers = "<<avg<<endl;
    return 0;
}