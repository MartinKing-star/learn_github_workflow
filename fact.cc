
#include <bits/stdc++.h>
using namespace std;

int fact(int n){
return n==0?1:fact(n-1)*n;
}

int main(){
cout << "Enter no " << endl;
int n;
cin >> n;
cout << "factorial of " << fact(n) << endl;
}
