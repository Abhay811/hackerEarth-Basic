// Doctor's Secret

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main()
{
    int n, p;
    cin >> n >> p;
    if (n <= 23 and p >= 500 and p <= 1000)
        cout << "Take Medicine\n";
    else
        cout << "Don't take Medicine\n";   
}