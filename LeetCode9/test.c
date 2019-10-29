#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#define INT_MAX
//#define INT_MIN
int reverse(int x){
	int tmp = x;
	int temp = 0;
	int rev = 0;
	int pop = 0;
	while (tmp != 0){
		pop = tmp % 10;
		tmp = tmp / 10;
		//if (temp >INT_MAX / 10 || (temp == INT_MAX / 10 && pop > 8))
		//	return 0;
		//if (temp < INT_MIN / 10 || (temp == INT_MIN / 10 && pop < -7))
		//	return 0;
		temp = rev * 10 + pop;
		rev = temp;
	}
	return rev;
}
int isPalindrome(int x){
	if (x < 0)
		return 0;
	else if (x < 10)
		return 1;
	else{
		int tmp = reverse(x);
		if (tmp == x)
			return 1;
	}
	return 0;
}
int main(){
	int a = 0;
	scanf("%d", &a);
	printf("%d = %d", a, isPalindrome(a));
	//1代表是回文数
	//0代表不是回文数
	return 0;
}