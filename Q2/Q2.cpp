# include <bits/stdc++.h>
using namespace std;
// give star count between |**|*
int GivestarCount(string s, int start, int end) {
    int count = 0, temp = 0;
    bool stoneFound = false;
    for (int i = start; i <= end; i++) {
        //cout << s[i] << " ";
        if (s[i] == '|'){
            stoneFound = !stoneFound;
            count = temp;    
        }
        else if (stoneFound)
            temp++;
    }
    return count;
}

int main()
{
    string s;
    cin >> s;
    int ss1,ss2,se1,se2;
    cin >> ss1 >> ss2 >> se1 >> se2;
    // cout << GivestarCount(s,ss1-1,se1-1);
    // cout << endl;
    // cout << GivestarCount(s,ss2-1,se2-1);
    // cout << endl;
    cout << GivestarCount(s,ss1-1,se1-1)+GivestarCount(s,ss2-1,se2-1);
}