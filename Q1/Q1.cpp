# include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int& e:arr)
        cin >> e;
    int profit = 0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j] && (profit < arr[j]-arr[i]))
                profit = arr[j] - arr[i];
            else
                continue;
        }
    }
    if(profit > 0)
        cout << "Maximum profit ratan make: " << profit;
    else 
        cout << "Ratan never Bought";
}