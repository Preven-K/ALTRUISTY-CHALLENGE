# include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[9];
    for(int& ox : arr){
        cin >> ox ;
        if((ox<1 || ox>100)){
            cout << "INVALID INPUT";
            return 0;
        }
    }
    int sum[3] = {0, 0, 0};
    for(int i=0;i<9;i++){
        sum[i%3] += arr[i];
    }
    int avg = 0;
    for(int i=0;i<3;i++){
        sum[i] /= 3;
        if(sum[i] < 70){
            cout << "All trainees are UNFIT";
            return 0;
        }
        if(sum[i] > avg)
            avg = sum[i];
    }
    //cout << avg << endl;
    for(int i=0;i<3;i++){
        if(sum[i] == avg)
            cout << "Trainee Number : " << i+1 << endl;
    }
}