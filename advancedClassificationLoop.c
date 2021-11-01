#include <stdio.h>
#include <math.h>

int len(int n){ //returns number of digits in given number
    int ans = 0;
    while(n>0){
        ans = ans +1;
        n=(n-n%10)/10;
    }
    return ans;
}

int isArmstrong (int n){
    int x = len(n);
    int y = n;
    int ans = 0;
    for(int i=0; i<x; i++){
        ans = ans + pow(y%10,x);
        y = (y-y%10)/10;
    }
    return ans == n;
  }

int isPalindrome (int n)
  {
    int a[len (n)];
    int y = n;
    for (int i = 0; i <len(n); i++){
	a[i] = y % 10;
	y = (y - y % 10) / 10;
      }
    for (int i = 0 ; i < len (n)/2; i++){
	if (a[i] != a[len (n) - i-1])
	  {
	    return 0;
	  }
      }
    return 1;
  }


