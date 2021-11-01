#include <stdio.h>
#include <math.h>

int isPrime(int n){
    if(n==1){
        return 0;
    }
    for(int i=2; i<n; i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int Factorial(int n){
    int ans = 1;
    while(n!=1){
        ans = ans*n;
        n = n-1;
    }
    return ans;
}

int isStrong(int n){
    int ans = 0; 
    int x=0;
    int y =n;
    while(y>0){
        x = y%10;
        ans = ans + Factorial(x);
        y = (y - x)/10;
    }
    return n==ans;
}