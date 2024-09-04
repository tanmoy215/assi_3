#include<bits/stdc++.h>
using namespace std;
int main(){
     int radious;
     cout<<"enter Radious : ";
     cin>>radious;
     float pi = 3.142;
     float area = pi*radious*radious;
     float cur = 2*pi*radious;
      (area>cur) ? cout<<"Yes"<<endl : cout<<"No"<<endl;
    return 0;
}