
#include <iostream>
#include <string>
using namespace std;

int main(){
    int N,M,K,S;
    bool s = true;
    string row;
    scanf("%d %d %d %d\n", &N, &M, &K, &S);
    while(N--){
        int loss = 0, gain = 0, p = 3, ast = 4;
        getline(cin, row);
        for(int i=0; i<row.length(); i++){
            char aux = row[i];
            if(i+1 == row.length()){
                p = 2; ast = 5;
            }
            if( aux != ' ' ){
                if(aux == '.'){
                    loss+=p;
                    //cout<<"Obstaculo: -"<<loss<<endl;
                }
                if(aux == '*'){
                    gain+=ast;
                    //cout<<"Frijol: +"<<gain<<endl;
                }
                if(aux == '#'){
                    break;
                }
            }
        }
        S += gain; S-=loss;
        //cout<<"fuerza: "<<S<<endl;
        if(S<K){
            s = false;
        }
    }
    if(S>=K && s){
        cout<<"YES"<<endl<<S<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
