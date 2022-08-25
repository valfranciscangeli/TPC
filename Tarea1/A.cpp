#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    // Con esta línea creamos un vector de tamaño n
    vector<int> a(n);

    // Con este for leemos los n valores
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    return 0;
}