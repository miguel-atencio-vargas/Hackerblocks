#include <iostream>
#include<math.h>
using namespace std;

int main(){
    int N, c = 0, e = 1, form;
    cin>>N;
    while(true){
        form = floor(N/pow(5, e));
        cout<<form<<endl;
        if(form == 0) break;
        c+=form;
        e++;
    }
    cout<<c<<endl;
}
