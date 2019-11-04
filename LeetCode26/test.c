#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int removeDuplicates(int* nums, int numsSize){
	if (numsSize == 0)
		return 0;
	if (numsSize == 1)
		return 1;
	int i = 1;
	int j = 0;
	while (i < numsSize){
		if (nums[i] == nums[j])
			i++;
		else{
			j++;
			nums[j] = nums[i];
		}
	}
	return j + 1;
}
int main(){
	int arr[] = { 1, 1, 2, 5, 5, 5, 5, 7, 8, 9 };
	int len = removeDuplicates(arr, sizeof(arr) / sizeof(arr[0]));
	for (int i = 0; i < len; i++){
		printf("%d  ", arr[i]);
	}
	printf("\n");
	return 0;
}