#include<stdio.h>
int main()
{
    //Taking 4 variable with rev=0
    int n, rev=0,r,o;
    printf("Enter a NUmber:");
    scanf("%d",&n);
    o=n;
    //Adding while loop to check if value is palindrome
    while(n!=o){
        r= n%10;
        rev=rev*10+r;
        n/=10;
        }
        // conditioning and printing
    if (0==rev)
    printf("%d is a Palindrome:",o);
    else
    printf("%d is not a Palindrome:",o);
    return 0;
}