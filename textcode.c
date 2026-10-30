#include <stdio.h>

int main()
{
    // char arr[] = "abcd";              //所占空间为5个字节
	// char arr1[] ={'a','b','c','d'};   //所占空间为4个字节
	// char arr2[4] ={"abcd"};           //所占空间为5个字节
	// //当字符数组存储字符串时，系统会在字符串的末尾自动添加'\0'作为结束标志  所以会多占用一个字节
	// //%s用于字符串打印 只有遇到'\0'才会停止打印
    // printf("%s\n", arr2);

	int arr[10]={1,2,3};
	// printf("%p\n", arr); 
	printf("%ld\n", sizeof(arr));
}