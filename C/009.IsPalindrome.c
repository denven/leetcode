#include <stdio.h>
#include <stdbool.h>

bool is_palindrome(int n)
{
    int rev=0, tmp=n;  //use rev to store the reversed value of n
    
    if(n<0) return false;

    do {
		rev = rev * 10 + tmp % 10;  //rev might overflow
		tmp /= 10;
	} while (tmp);

    return (n==rev);
}
