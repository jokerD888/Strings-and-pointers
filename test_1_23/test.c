#define _CRT_SECURE_NO_WARNINGS 1
//7.8���ַ�˳��ߵ������´��
//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	char *pStr, temp, str[50];
//	char* pStart, * pEnd;
//	int len;
//	pStr = str;
//	printf("Input string:\n");
//	//gets(str);
//	gets(pStr);
//	//len = strlen(str);//�����ַ�������
//	len = strlen(pStr);
//	//�ߵ���������
//	for (pStart = pStr, pEnd = pStr + len - 1; pStart < pEnd; pStart++, pEnd--)
//	{
//		temp = *pEnd;
//		*pEnd = *pStart;
//		*pStart = temp;
//	}
//	puts(pStr);
//	return 0;
//}
//#include<stdio.h>
//#include<assert.h>
//char* Reversal(char* p,int n);
//int main(void)
//{
//	char a[10] = { 0 };
//	char* p = a;
//	int n;
//	printf("Please enter char(n<10):\n");
//	scanf("%d", &n);
//	getchar();//���߻������Ļس���\n
//	for (p; p < a + n; p++)
//	{
//		scanf("%c", p);
//	}
//	printf("%s", Reversal(a, n));
//	return 0;
//}
//char* Reversal(char* p, int n)
//{
//	assert(p != NULL);
//	char temp;
//	char* pa = p;
//	int m = n-1;
//	for (p; p < pa + n/2; p++)
//	{
//		temp = *p;
//		*p = *(p + m);
//		*(p + m) = temp;
//		m--;
//	}
//	return pa;
//}
//7.7 ��������my_stract
#include<stdio.h>
#include<string.h>
//test.1
//�������ܣ�������p2���ӵ�����p1����
//char* my_stract(char* p1, char* p2, int n1, int n2);
//int main(void)
//{
//	char arr1[20] = "01234";
//	char arr2[20] = "56789";
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	puts(my_stract(arr1, arr2, len1, len2));
//	return 0;
//}
//char* my_stract(char* p1, char* p2, int n1, int n2)
//{
//	int i;
//	char* p = p1;
//	for (i = 0; i < n2; i++)
//	{
//		*(p1 + n1+i) = *(p2 +i);
//	}
//	return p1;
//}
//test.2
void MyStract2(char dstStr[], char srcStr[])
{
	int i = 0, j = 0;
	while (dstStr[i] != '\0')
	{
		i++;
	}
	while (srcStr[j] != '\0')
	{
		dstStr[i] = srcStr[j];
		i++;
		j++;
	}
	dstStr[i] = '\0';

}
void MyStract1(char* dstStr, char* srcStr)//���ַ�ָ����Ϊ��������
{
	while (*dstStr != '\0')//��ָ���ƶ���ԭ�������һ���ַ���
	{
		 dstStr++;
	}
	while (*srcStr != '\0')
	{
		*dstStr = *srcStr;//����
		srcStr++;//ʹsrcStrָ����һ���ַ�
		dstStr++;//ʹdstStrָ����һ�´��浥Ԫ
	}
	*dstStr = '\0';//���ַ���dstStrĩβ�����ַ���������־\0
}
int main(void)
{
	char s[80];//Դ�ַ���
	char t[80];//�������ַ���
	printf("Please enter the source string:\n");
	gets(s);
	printf("Please enter the other strinf:\n");
	gets(t);
	MyStract2(s, t);
	printf("The concat is :\n");
	puts(s);
	return 0;
}
