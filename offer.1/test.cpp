#define  _CRT_SECURE_NO_WARNINGS
//用“%20”替换空格
#include<iostream>
using namespace std;
void replaceSpace(char *str, int length) {
	if (str == NULL && length <= 0)
		return;
	int originalsize = 0;//数组实际长度
	int numberblank = 0;//空格的个数
	int i = 0;
	while (str[i] != '\0'){
		originalsize++;
		if (str[i] == ' ')
			numberblank++;
		i++;
	}
	int newlength = originalsize + 2 * numberblank;//新的实际长度
	if (newlength > length)
		return;
	int index = originalsize;
	int indexnew = newlength;
	while (index >= 0 && indexnew > 0){
		if (str[index] == ' '){
			str[indexnew--] = '0';
			str[indexnew--] = '2';
			str[indexnew--] = '%';
		}
		else{
			str[indexnew--] = str[index];
		}
		index--;
	}
}
int main(){
	char str[20] = "We are Happy";
	cout << str << endl;
	replaceSpace(str, 20);
	cout << str << endl;
	return 0;
}