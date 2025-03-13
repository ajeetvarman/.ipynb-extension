#include<iostream>
using namespace std;
void printOdds(int a, int b){
    for(int i= a; i<=b; i++){
        if(i%2!=0)
        cout<<i<<" ";
    }
}
int main(){
    int a,b;
    cout<<" Enter two numbers : ";
    cin>>a>>b;
    printOdds(a,b);
}
