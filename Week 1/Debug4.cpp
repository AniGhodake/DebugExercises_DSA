/*
Debug the code. It is trying to print the given pattern.
Pattern
N = 4
1
22
333
4444
*/
#include<iostream>
using namespace std;                                    // Debug Successfully

int main(){
  int i,j,n;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<i+1;j++){
	        cout<<i+1;
        }
    cout<<endl;
    }
}
