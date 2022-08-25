#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main(){

    vector<int> nh(2);
    for (int i=0;i<2;i++){
            cin>>nh[i];
    }

    int n = nh[0];
    int h=nh[1];

    vector<int> a(n);
    for (int i=0;i<n;i++){
            cin>>a[i];
    }

    int res=0;

    for (int i=0;i<n;i++){
        if(a[i]>h){
            res+=2;
        }else{
            res++;
        }
    }

    cout << res;

    return 0;
}