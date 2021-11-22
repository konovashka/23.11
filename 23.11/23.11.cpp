// Даны два массива, проверить на упорядоченность

#include <iostream>
using namespace std;
int check(int arr[], int n);
void vvod(int arr[], int n);

int main()
{
	int n, m, k;
	k = 0;
	printf("vvedite razmer\n");
	scanf_s("%d", &n);
	int* arr = new int[n];
	vvod(arr, n);
	printf("vvedite razmer\n");
	scanf_s("%d", &m);
	int* arr1 = new int[n];
	vvod(arr1, m);
	k = k + check(arr, n) + check(arr1, m);
	printf("%d", k);
}
int check(int* arr, int n)
{
	int fl = 0;
	for (int i = 0; (i < n - 1) && fl == 0; i++)
	{
		if (arr[i] > arr[i + 1])
		{
			fl = 0;
		}
		else
		{
			fl = 1;
		}
		printf("flag raven ");
		printf("%d\n", fl);
	}
	for (int i = 0; (i < n - 1) && fl == 0; i++)
	{
		if (arr[i] < arr[i + 1])
		{
			fl = 0;
		}
		else
		{
			fl = 1;
		}
		printf("flag raven ");
		printf("%d\n", fl);
	}
	return fl;
}
void vvod(int* arr, int n)
{
	printf("vvedite znacheniya\n");
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
}