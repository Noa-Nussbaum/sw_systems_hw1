
#include <stdio.h>
#include <math.h>

//returns number of digits in given number
int len(int n){ 
    int ans = 0;
    while(n>0){
        ans = ans +1;
        n=(int)n/10;
    }
    return ans;
}

// returns the number in the i location in n
int pos(int n, int i){
    int r;
    r = n / pow(10, i);
    r = r % 10;
    return r;
}

// returns the sum of the digits in the power of the length of n
int recursiveSum(int n, int x){
     if(n>0)
    return (pow(n%10,x) + recursiveSum(n/10,x)-1);
}

// returns whether a number is an armstrong number or not
int isArmstrong(int n){
    int x = len(n);
    if(recursiveSum(n,x)==n){
        return 1;
    }
    return 0;
}


// returns whether a number is a palindrome or not
int isPalindrome(int n){
    if(n<10){
        return 1;
    }
    else{
        if(pos(n,0)!=pos(n,len(n)-1)){
            return 0;
        }
        else{ 
            int x= (int)(n-(pos(n,0)*pow(10,len(n)-1)));
            x = x - n%10;
        return isPalindrome(x/10);
        }
    }
}