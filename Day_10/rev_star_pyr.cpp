#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=n;i>=1;i--){
        for(int j=i;j<n;j++) cout<<" ";
        for(int j=1;j<=(2*i-1);j++) cout<<"*";
        cout<<"\n";
    }
    return 0;
}