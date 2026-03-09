#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<char> vec={'a','b','c','d','f'};//char
    cout<<"size="<<vec.size()<<endl;// ohk 
    for(char val: vec){
        cout<<val<<endl;
    }
return 0;
}