#include <iostream>
using namespace std;

int main(){
	int peso;
    cin >> peso;
    if (peso != 0 && ( peso <= 2 || peso%2 != 0)){
        cout << "NO";
        exit(0);
    }
    cout << "YES";
    return 0;
}
