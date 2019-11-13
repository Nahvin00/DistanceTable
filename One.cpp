#include <iostream>
using namespace std;

int main()
{
    int dist[6][6]={{0,0,0,0,0,0},{258,0,0,0,0,0},{43,301,0,0,0,0},{475,217,518,0,0,0},{876,616,918,401,0,0},{623,365,667,148,246}};
    cout<<"\t0"<<endl;
    for(int i=1;i<6;i++){
        cout<<i<<"\t";
        for(int j=0;j<i;j++){
            
        cout<<dist[i][j]<<"\t";
        }
        if(i!=5){
        cout<<i<<endl;
        }
    }
    return 0;
}
