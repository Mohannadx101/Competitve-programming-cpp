// Link https://codeforces.com/problemset/problem/41/A
//30 ms // 100kb

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string s, t;
    cin >> s >> t;
    
    reverse(t.begin(), t.end());
    if (s != t){
        cout << "NO" << endl;
    }else
    {
        cout << "YES" << endl;
    }
    
    system("pause");
    return 0;
}
