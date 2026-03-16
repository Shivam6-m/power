#include <iostream>
using namespace std;
int main(){
    int n,m,k,s;
    cin>>n>>m>>k>>s;
    char park[100][100];
    for(int i = 0; i < n; i++){
        for(int j=0;j<m;j++){
            cin >> park[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j=0;j<m; j++){
            if(s<=k){
                cout<<"No";
                return 0;
            }
            if(park[i][j]=='#'){
                break;
            }
            if(park[i][j] == '.'){
                s-=2;
            }
            else if(park[i][j]=='*'){
                s += 5;
            }
            if(j != m-1){
                s-=1;
            }
        }
    }
    if(s > k){
        cout<<"Yes"<<endl;
        cout<<s;
    }
    else{
        cout<<"No";
    }

}