#include<iostream>
using namespace std;

int fibonacci(int);

int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}

int fibonacci(int n){
    
    if(n==1){
        return 1;
    }
    else if (n==2)
    {
        return 1;
    }
    else if (n==0)
    {
        return 0;
    }
    else{
        return fibonacci(n-2)+fibonacci(n-1);
    }
}