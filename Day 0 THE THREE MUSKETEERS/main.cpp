#include <iostream>

using namespace std;

int main()
{
    int a = 4, c2=0, c8=0,c16=0, m=1, N;
    cin>>N;
    for(int i=0; i<=N; i++){
        if(a==4){

            if(i==N){cout<<m<<" 0 0";}
            //cout<<m<<" 0 0"<<endl;
            c2++;
        }else if(a==2){
            if(i==N){cout<<"0 "<<m<<" 0";}
            //cout<<"0 "<<m<<" 0"<<endl;
            c8++;
        }else{
            if(i==N){cout<<"0 0 "<<m;}
            //cout<<"0 0 "<<m<<endl;
            c16++;
        }

        if(c2==2){  c2=0;     a=a>>1;}
        if(c8==8){  c8=0;     a=a>>1;}
        if(c16==16){c16=0;  a=a>>1; m = m*2;}

        if(a==0){a=4;}


    }
    return 0;
}
