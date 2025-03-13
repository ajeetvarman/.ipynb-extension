#include<iostream>
using namespace std;
void printSquare(int n){
        for(int i = 1; i<=n; i++)
        cout<<i*i<<" ";
}
int main(){
    int n;
    cout<<" Enter a numbeer : ";
    cin>>n;
    printSquare(n);
    }
