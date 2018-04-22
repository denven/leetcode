/* Given a 32-bit signed integer, reverse digits of an integer. */

#include <stdio.h>

int reverse(int x) 
{    
    int ret = 0;
    while(x != 0)
    {       
        int temp = ret*10 + x%10; 
        if(temp/10 != ret)
            return 0;
        x = x/10; 
        ret = temp;
    }      
    
    return ret;
}

