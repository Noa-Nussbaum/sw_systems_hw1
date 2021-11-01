#include <stdio.h>
#include <math.h>

void arrPrint(int arr[], int x){ //printing function that accepts array and final index
        for(int i=0; i<x; i++){
            printf("%d ", arr[i]);
        }
    }


int main(){
    
    int a,b;
    int min, max;
    
    //Receive two numbers
    printf("Insert first number here: ");
    scanf("%d",&a);
    if(a<0){
       printf("%d is a negative number. Please choose a different one: ",a);
       scanf("%d",&a);
    }
    
    printf("Insert second number here: ");
    scanf("%d",&b);
    if(b<0){
       printf("%d is a negative number. Please choose a different one: ",b);
       scanf("%d",&b); 
    }
    
    //Find which number is greater
    max = a;
    min = b;
    if(b>a){
        max = b;
        min = a;
    }
    //Create arrays for each type of number in range
    int prime[max-min+1], armstrong[max-min+1], strong[max-min+1], palindrome[max-min+1];
    int r,t,g,f = 0;
    
    //put numbers in relevant arrays
    for(int i = min; i<=max; i++){
        if(isPrime(i)){
            prime[r]=i;
            r++;
        }
        if(isArmstrong(i)){
            armstrong[t]=i;
            t++;
        }
        if(isStrong(i)){
            strong[g]=i;
            g++;
        }
        if(isPalindrome(i)){
            palindrome[f]=i;
            f++;
        }
    }
    
    printf("The Armstrong numbers are: ");
    arrPrint(armstrong, t);
    printf( "\n" );
    printf("The Palindromes are: ");
    arrPrint(palindrome, f);
    printf( "\n" );
    printf("The Prime numbers are: ");
    arrPrint(prime, r);
    printf("\n");
    printf("The Strong numbers are: ");
    arrPrint(strong, g);
   
}