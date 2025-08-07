#include<bits/stdc++.h>
using namespace std;

void Pattern1() {
    cout<<"1."<<endl<<endl;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++) {
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void Pattern2() {
    cout<<"2."<<endl<<endl;
     for(int i=5;i>=1;i--) {
        for(int j=1;j<=i;j++) {
            cout<<"* ";
        }
        cout<<endl;
     }
     cout<<endl;
}

void Pattern3() {
    cout<<"3."<<endl<<endl;
    for(int i=5;i>=1;i--) {
        for(int j=1;j<=5;j++) {
            if(j<i) cout<<"  ";
            else cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void Pattern4() {
    cout<<"4."<<endl<<endl;
    for(int i=0;i<5;i++) {
        for(int j=0;j<5;j++) {
            if(j<i) cout<<"  ";
            else cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void Pattern5() {
    cout<<"5."<<endl<<endl;
    int n = 5;
    for(int i=0;i<5;i++) {
        int s = n-i-1;
        while(s--) {
            cout<<"  ";
        }
        for(int j=0;j<2*i+1;j++) cout<<"* ";
        cout<<endl;
    }
}

int main() {
    Pattern1();
    Pattern2();
    Pattern3();
    Pattern4();
    Pattern5();
}