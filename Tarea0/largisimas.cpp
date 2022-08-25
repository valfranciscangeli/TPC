#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main(){
	int n;
    cin >> n;
    int cnt = n;
    
    vector<string> lista;
    string input;
    while(cnt>0){        
        cin>>input;
        lista.push_back(input);
        cnt--;    
    }

    for (int i=0;i<n;i++){
        string palabra = lista[i];
        if(palabra.size()<=10){
            cout<<palabra << endl;
        }else{
            int count=0;
            for (int i = 1; i < palabra.size()-1; i++) {
                count++;
            }
            cout<<palabra[0]<<to_string(count)<<palabra[palabra.size()-1]<<endl;
        }
    }

    return 0;
}