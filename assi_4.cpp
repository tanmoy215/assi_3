#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cout<<"enter a : ";
    cin>>a;
    cout<<"enter b  : ";
    cin>>b;
     int area = a*b;
     int perimeter = 2*(a+b);
     (area>perimeter) ? cout<<"Area is large"<<endl : cout<<"Perimeter is large"<<endl;
    return 0;
}