#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<char> vec={'a','b','c','d','e','d','f'};//char
    for(char val: vec){// char
        cout<<val<<endl;
    }
return 0;
}