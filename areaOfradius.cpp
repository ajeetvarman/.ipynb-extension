#include<iostream>
using namespace std;
double circleArea(double radius){
    cout<<3.14159*radius*radius;
}
int main(){
    double r;
    cout<<"Enter radius  : ";
    cin>>r;
    cout<<" Area : ";
    circleArea(r);
}
