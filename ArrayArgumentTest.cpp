#include<iostream>
using namespace std;

void solve(int* a, int* b)
{
	int i = 0;
	while ((a + i) != b)
	{
		cout << *(a + i);
		i++;
	}
}

int main()
{
	int A[5] = { 4,2,6,7,1 };
	solve(A, A + 3);
	system("pause");
	return 0;
}