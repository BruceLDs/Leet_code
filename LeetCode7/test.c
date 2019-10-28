#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define INT_MAX
#define INT_MIN
int reverse(int x){
	if (x < 10 && x >-10)
		return x;
	int rev = 0;
	int pop = 0;
	int tmp = 0;
	while (x != 0){
		pop = x % 10;
		x /= 10;
		//¿¼ÂÇÒç³ö
		if (rev > INT_MAX / 10 ||
			(rev == INT_MAX / 10 && pop > 7))
			return 0;
		if (rev < INT_MIN / 10 ||
			(rev == INT_MIN / 10 && pop < -8))
			return 0;
		tmp = rev * 10 + pop;
		rev = tmp;
	}
	return rev;
}
int main(){
	int a = 0;
	scanf("%d", a);
	printf("%d\n", reverse(a));
	return 0;
}