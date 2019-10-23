#define  _CRT_SECURE_NO_WARNINGS
//给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那 两个 整数，并返回他们的数组下标。
//你可以假设每种输入只会对应一个答案。但是，你不能重复利用这个数组中同样的元素。
//链接：https ://leetcode-cn.com/problems/two-sum
#if 1
#include<stdio.h>
#include<malloc.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
	if (numsSize == 0 || numsSize == 1){
		return NULL;
	}
	*returnSize = 2;
	int *arr = (int *)malloc(*returnSize * sizeof(int));
	int i = 0;
	int j = 0;
	for (i = 0; i < numsSize; i++){
		for (j = i + 1; j < numsSize; j++){
			if (nums[i] + nums[j] == target){
				arr[0] = i;
				arr[1] = j;
				break;
			}
		}
	}
	return arr;
}
int main(){
	int nums[] = { 1, 7, 9, 3, 5, 4, 6 };
	int numsSize = sizeof(nums) / sizeof(nums[0]);
	int target;
	scanf("%d", &target);
	int returnSize = 0;
	int *arr = twoSum(nums, numsSize, target, &returnSize);
	printf("%d,%d\n", arr[0], arr[1] );
	return 0;
}
#endif