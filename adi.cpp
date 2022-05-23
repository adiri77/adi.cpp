#include <iostream>
using namespace std;
int main() {

    int n;
    cin>>n;
int i;int j;int c;
for(j=2;j<=n;j++){
    for(i=2;i<j;i++){
      if(j%i==0){
    break;
      }  
    
      } 
       if(i==j){
           cout<<j;
       }}
        return 0;
        
}