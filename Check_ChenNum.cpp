//A number is called chen if it is prime and (n+2 is prime OR number is the product of two prime number)
#include <iostream>
using namespace std;

bool isPrime(int n){

    if(n<2) return false;
    for(int i = 2; i*i <= n ; i++){
        if(n%i==0) return false;
    }
    
    
    
    return true;
}

bool isProduct(int h){

    if(h<4) return false;
    for(int i = 2 ; i*i <= h;i++){
        int p{};
        if(h%i ==0){
            p = h/i;
            return isPrime(p);}
    }

    return false;
}

bool isChen(int k){
    if(isPrime(k)){
        return isPrime(k+2) || isProduct(k+2);
    }
    return false;
}




int main(){
    int m{};cin>>m;
    int num[m];

    for (int i = 0; i < m; i++)
    {
        cin >> num[i];
    }

    int flag{};
    for (int i = 0; i < m; i++)
    {
        if(isChen(num[i])){
            flag = 1;
            cout << num[i] << " ";
        }
    }
    if(flag == 0) cout << "-";
    
    return 0;
}

