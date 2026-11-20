#include <bits/stdc++.h>
using namespace std;

bool  isPrime(int a){

    
    for (int i = 2; i*i <= a; i++)
    {
        if(a%i==0) return false;
        
    }
    
    return true;
}

bool isChen(int a){
    return isPrime(a) && isPrime(a+2);
}

long long Sum(int a){
    long long sum{};
    int found{};
    int n = 3;

    while(found < a){
        if(isChen(n)){
            sum+=n;
            found++;
        }
        n+=2;
    }


    return sum;
}

int main()
{
    int a{}; cin >> a;

    cout << Sum(a);
    
    
    return 0;
}