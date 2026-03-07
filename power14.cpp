#include<iostream>
using namespace std;
int main()
{

int i,n,j;
cin>>n;
for(i=0;i<n;i++){
    // spaces 
    for(j=0;j<n-i-1;j++){
        cout<<" ";}
        //number 1
        for(j=1;j<=i+1;j++){
        cout<< j ;

    }

cout<<endl;
}

return 0;
}