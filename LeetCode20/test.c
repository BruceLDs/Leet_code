#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<malloc.h>
#include<string.h>
int isValid(char * s){
	if (s == NULL || s[0] == '\0') //×Ö·û´®Îª¿Õ
		return 1;
	char *stack = (char*)malloc(strlen(s) + 1);
	int top = 0;
	for (int i = 0; s[i]; ++i) {
		if (s[i] == '(' || s[i] == '[' || s[i] == '{')
			stack[top++] = s[i];
		else {
			if ((--top) < 0)
				return 0;//ÏÈ¼õ¼õ£¬ÈÃtopÖ¸ÏòÕ»¶¥ÔªËØ
			if (s[i] == ')' && stack[top] != '(')
				return 0;
			if (s[i] == ']' && stack[top] != '[')
				return 0;
			if (s[i] == '}' && stack[top] != '{')
				return 0;
		}
	}
	return (!top);
}
int main(){
	char s[] = "()[]{}";
	int a = isValid(s);
	printf("%d\n", a);
	return 0;
}