#include<iostream>
using namespace std;
void countDigitAndSquare(int num){
    int count = 0;
    int n = num;
    while (n)
    {
        n /= 10;
        count++;
    }
    cout<<" Square of digit count : "<<count*count; 
}
int main(){
    int num;
    cout<<" Enter a number : ";
    cin>>num;
    countDigitAndSquare(num);
}
