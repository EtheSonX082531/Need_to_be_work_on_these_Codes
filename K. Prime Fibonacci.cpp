#include<bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
    for(int i=2; i*i<=x; i++) {
        if(x%i==0) {
            return false;
        }
    }
    return true;
}
int Fibo(int x) {
    if(x==1) {
        return 0;
    }
    else if(x==2) {
        return 1;
    }
    else {
        return Fibo(x-1)+Fibo(x-2);
    }
}

int main()
{
    int t;
    cin>>t;
    vector<bool>v(t);
    for(int i=0; i<t; i++) {
        int x;
        cin>>x;
        if(x==1) {
            v[i]=false;
        }
        else {
            v[i]=isPrime(Fibo(x));
        }
    }
    for(bool flag:v) {
        if(flag==true) {
            cout<<"prime"<<endl;
        }
        else {
            cout<<"not prime"<<endl;
        }
    }
    return 0;
}
