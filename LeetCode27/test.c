#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int removeElement(int* nums, int numsSize, int val){
	if (numsSize == 0)
		return 0;
	int i = 0;
	int j = 0;
	while (i < numsSize){
		if (nums[i] == val)
		{
			i++;
		}
		else{
			nums[j] = nums[i];
			i++;
			j++;
		}
	}
	return j;
}
int main(){
	int arr[] = { 1, 2, 8, 2, 3, 5, 4, 9 };
	int len = removeElement(arr, sizeof(arr) / sizeof(arr[0]), 2);
	for (int i = 0; i < len; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}