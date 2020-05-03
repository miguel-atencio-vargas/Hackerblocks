#include <iostream>
using namespace std;



int main(){
    int N, T;
    cin>> T;
    while(T--){
        int c = 0;
        cin>>N;
        while(N>0){
            N = N & (N - 1);
            c++;
        }    
        cout<<c<<endl;
    }
    return 0;
}
