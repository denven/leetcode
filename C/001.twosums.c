#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target) 
{
    int i = 0, j;
    int *indices = malloc(2*sizeof(int));
    int flag = 0;

    if (indices == NULL)
    {
    	return NULL;
    }

    for (i = 0; i < numsSize; i++)
    {
    	if (nums[i] != target)
    	{
    		j=i+1;
    		while((nums[j] == target-nums[i])&&(j++<numsSize-1))
    		{
    			* indices = i;
    			* (indices+1) =j-1;
                        flag = 1;
                        break;
    		}
    	}
        if (flag == 1)
            break;
    }

    return indices;
}

void main(void)
{
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int numsSize = sizeof(nums)/sizeof(int);
    
    int *p = NULL;
    
    p = twoSum(nums, numsSize, target);
    if(p != NULL)
    {
        printf("indices = [%d, %d]\n", *p, *(p+1));
        free(p);
    }
}
