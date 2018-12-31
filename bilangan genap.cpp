#include <iostream>
using namespace std;
int main ()
{
    int x,y,i,c;
    cout<<"masukan batas awal:";
    cin>>x;
    cout<<"masukan batas akhir:";
    cin>>y;
    for(i=x;i<=y;i++){
        c=i%2;
        if(c==0)
            cout<<1<<",";
    }
    std::cout<<" \n";
    std::cout<<"nama  : muhammad yusuf alfaqih \n";
    std::cout<<"nim   : 311810239";
    return 0;
}
