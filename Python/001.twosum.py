def twosum():
	nums = [3,2,4]
	target = 6

	"way 1: use two for cycle, and tuple"
	for i in range(0, len(nums)):
		for j in range(i+1, len(nums)):
			if (nums[j] == target - nums[i]):
				print (i, j)
	
	"way 2: use list generator, filter() and list index"
	for x in nums:
		leftnum = [nums[y] for y in range(nums.index(x)+1, len(nums))]		
		L = list(filter(lambda y: (y==target-x), leftnum))
		if len(L)>0:
			return(nums.index(x), nums.index(L[0]))
