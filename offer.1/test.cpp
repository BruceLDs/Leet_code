#define  _CRT_SECURE_NO_WARNINGS
//�á�%20���滻�ո�
#include<iostream>
using namespace std;
void replaceSpace(char *str, int length) {
	if (str == NULL && length <= 0)
		return;
	int originalsize = 0;//����ʵ�ʳ���
	int numberblank = 0;//�ո�ĸ���
	int i = 0;
	while (str[i] != '\0'){
		originalsize++;
		if (str[i] == ' ')
			numberblank++;
		i++;
	}
	int newlength = originalsize + 2 * numberblank;//�µ�ʵ�ʳ���
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