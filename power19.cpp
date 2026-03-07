//
//#include<iostream>
//using namespace std;
//int main(){
//int n,i,j;
//cin>>n;
//for(i=1;i<=n;i++){
    //for(j=1;j<=i;j++){
        //cout<<"* ";

   // }
   // cout<<endl;
//}



   // return 0;
//}
/*-#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    // for(i=n;i>=1;i--){
        for(j=i;j>0;j--){
            cout<<"* ";
        }
cout<<endl;
    }
return 0;
}
*/
/*#include<iostream>
using namespace std;
int main()
{
char  i,j;

for(i='A';i<='E';i++){
    
    for(j='A';j<=i;j++){
        cout<<j;
       
    }
    cout<<endl;
}

return 0;
}
*/
/*#include<iostream>
using namespace std;
int main(){
int n,i,j;
cin>>n;
for(i=1;i<=n;i++){
    for(j=5;j>=i;j--){
        cout<<"*";

    }
    cout<<endl;

}




return 0;
}
*/
/*#include<iostream>
using namespace std;
int main()
{
int n,i,j;
cin>>n;
for(i=1;i<=n;i++){
    for(j=n;j>=i;j--){
        cout<<j;

    }
    cout<<endl;
}




return 0;
}
*/
/*#include<iostream>
using namespace std;
int main()
{

int n,i,j;
cin>>n;
for(i=n;i>=1;i--){
    for(j=1;j<=i;j++){
        cout<<j;
    }
    cout<<endl;
}


return 0;
}
*/
/*#include<iostream>
using namespace std;
int main()
{
int n,i,j;
cin>>n;
//upper tringle 
for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
        cout<<"*"<<" " ;
    }
    cout<<endl;
}
//lower tringle
for(i=n-1;i>=1;i--){
    for(j=1;j<=i;j++){
        cout<<"*"<<" ";

    }
    cout<<endl;
}


return 0;
}
*/
/*#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=n;j>=i;j--){
            cout<< char(j+64);
        }
        cout<<endl;
    }



return 0;
//part 15,16,17

}
*/
/*#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            cout<< char (j+64);
        }
        cout<<endl;
    }



return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
int n,i,j;
cin>>n;
for(i=n;i>=1;i--){
    for(j=1;j<=i;j++){
cout<<j;
    }
    cout<<endl;
}




return 0;
}
*/
//part 18
/*
#include<iostream>
using namespace std;
int main()
{

int n,i,j,k;
cin>>n;

for(i=1;i<=n;i++){
    //for first tringle 
    for(j=1;j<=i;j++){
        cout<<"*";
    }


//space between these tringle 

    for(j=n-1;j>=i;j--){
        cout<<"  ";
    }
    //for second tringle 
for(k=1;k<=i;k++){
    cout<<"*";
}
cout<<endl;

}

return 0;
}
*/
/*
//part 19
#include<iostream>
using namespace std;
int main()
{
int i,j,k,n,m;
cin>>n;
for(i=1;i<=n;i++){
    //for spaces 
for(j=n-1;j>=i;j--){
        cout<<" ";
}
    //for tringle 
for(k=1;k<=i;k++){
    cout<<"*";
}
//for mirror tingle 
for(m=i-1;m>=1;m--){
    cout<<"*";
}
cout<<endl;
}

return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
int n,i,j,k;
cin>>n;
for(i=1;i<=n;i++){
    //for spaces 
for(j=n-1;j>=i;j--){
        cout<<" ";

}
for (k=1;k<=i;k++){
    cout<<"* ";
}
cout<<endl;
}
return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    cin>>n;
    for(i=1;i<=n;i++){
        //for spaces 
        for(j=n-1;j>=i;j--){
            cout<<" ";

        }
        //for tringle 
        for(k=1;k<=i;k++){
            cout<<char (k+64)<<" ";
        }
cout<<endl;
    }
return 0;
}
*/
//part 20
/*
#include<iostream>
using namespace std;
int main()
{ 
int n,i,j,k;
cin>>n;
for(i=n;i>=1;i--){
    for(j=n-1;j>=i;j--){
        cout<<" ";

    }
    for(k=1;k<=i;k++){
        cout<<k<<" ";
    }
    cout<<endl;
}




return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
int n,i,j,k;
cin>>n;
for(i=n;i>=1;i--){
    for(j=n-1;j>=i;j--){
       cout<<" ";

    }
    for(k=1;k<=i;k++){
        cout<<k<<" ";
    }
    cout<<endl;
}



return 0;
}
*/
//part 21
/*#include<iostream>
using namespace std;
int main()
{
int n ,i, j;
cin>>n;
for(i=1;i<=n;i++){
    for(j=n;j>=1;j--){
        if(i>=j)
        cout<<"* ";
        else
        cout<<" ";
    }

cout<<endl;


}

return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{

int n,i,j;
cin >>n;
for(i=n;i>=1;i--){
    for(j=n;j>=1;j--){
        if(i>=j)
        cout<<"* ";
        else
        cout<<" ";
    }





cout<<endl;

}


return 0;
}
*/
// part 22
/*
#include<iostream>
using namespace std;
int main()
{
int n,i,j;
cin>>n;
for (i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        if (i==3||j==3)
        cout<<"X";
        else
        cout<<"O";
    }
    cout<<endl;
}




return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
  int n,i,j;
  cin>>n;
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
       if(i==j)
       cout<<"0";
        else 
        cout<<"X";
    }
    cout<<endl;
  }  
return 0;
}
*/
#include<iostream>
using namespace std;
int main()
{
int n,i,j;
cin>>n;
for (i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        if (i==n/2+1||j==n/2+1)
        cout<<"X"<<" ";
        else
        cout<<"0"<<" ";
    }
    cout<<endl;
}




return 0;
}