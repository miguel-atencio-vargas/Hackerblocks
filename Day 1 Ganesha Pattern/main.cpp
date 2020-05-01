#include <iostream>
#include <string>
using namespace std;

void rowm(char i, char f, int lado, bool s){
    if(s){ i = ' '; f = '*';}
    printf("%c%s%c%s%c\n", i, string(lado-1,' ').c_str(), '*', string(lado-1,' ').c_str(),f);
}
void extr(char i, char f, int lado, bool s){
    if(s){ i = '*'; f = ' ';}
    printf("%c%s%c%s%c\n", '*', string(lado-1, i).c_str(), '*', string(lado-1, f).c_str(), '*');
}
int main()
{
    int N, m, l;
    bool sx = false, sm = false;
    cin>>N;
    m = (N/2)+1;
    for(int i=1; i<=N; i++){
        if(i==m){
            printf("%s\n", string(N, '*').c_str());
        }else if(i==1 || i==N){
            extr(' ', '*', m - 1, sx );
            sx = true;
        }else{
            if(i>m){sm = true;}
            rowm('*', ' ', m - 1, sm);
        }
    }
    return 0;
}
