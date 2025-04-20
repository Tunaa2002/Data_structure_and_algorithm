#include<bits/stdc++.h>
using namespace std;

main(){
    ifstream fin("PHOTO.INP");
    ofstream fout("PHOTO.OUT");
    long n;
    fin>>n;
    long prince1=0, prince2=0;
    if(n>0){
        if(n<50){
            prince1 = 300;
            prince2 = 400;
        }
        else if(n<=100){
            prince1 = 250;
            prince2 = 350;
        } else{
            prince1 = 220;
            prince2 = 320;
        }
        long total1 = n*prince1;
        long total2 = n*prince2;
        fout<<total1<<endl;
        fout<<total2;
    } else fout<<-1;

}