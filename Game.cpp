#include<iostream>

using namespace std;
int main()

{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n1,n2,k1,k2;
    cin>>n1>>n2>>k1>>k2;
    if(n1>n2)
        cout<<"First"<<endl;
    else
        cout<<"Second"<<endl;

    return 0;
}