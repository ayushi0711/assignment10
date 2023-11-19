#include<iostream>
using namespace std;
int main(){
    int n;
    int m;
    cin>>n>>m;
    int *p1=&n;
    int *p2=&m;
    cout<<((*p1)*(*p2))<<endl;
}