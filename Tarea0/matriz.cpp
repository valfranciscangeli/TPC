#include <vector>
#include <string>
#include <iostream>
#include <cmath>  
using namespace std;

int main(){
	int n=5;
    int m = 5;
    int fila=0;
    int columna=0;

    vector< vector<int> > mat( n , vector<int>(m) );
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }

    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            int num=mat[i][j];
            if(num==1){
                fila = i+1;
                columna = j+1;
                break;
            }
        }
    }

    cout << abs(fila-3)+abs(columna-3);
    return 0;
}