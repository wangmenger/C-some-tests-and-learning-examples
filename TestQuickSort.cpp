#include<iostream>
using namespace std;

int partition(int* t1, int* t2) {
	const int mid = (t2 - t1) / 2;
	const int pivot = *(t1 + mid);
	// move the mid point value to the front.
	std::swap(*t1, *(t1 + mid));
	int i = 1; // already swap the mid one to the 0 index
	int j = t2 - t1 - 1;
	while (i <= j) {
		while (i <= j && *(t1 + i) <= pivot) {
			i++;
		}

		while (i <= j && *(t1 + j) > pivot) { // t1+j  t1+t2-t1-1 = t2-1
			j--;
		}

		if (i < j) {
			std::swap(*(t1 + i), *(t1 + j));
		}
	}
	std::swap(*(t1 + i - 1), *t1);
	return i - 1;
}

void quicksort(int* t1,int* t2) {
	if (t1>= t2) {
		return;
	}
	int part = partition(t1, t2);
	quicksort(t1, t1 + part);
	quicksort(t1 + part + 1, t2);
}


int main()
{
	int a[7] = { 1,4,2,3,5,8,6 };
	//std::swap(*a, *(a+2));
	quicksort(a+3, a + 6);
	for (int i = 0; i < 7; i++)
	{
		cout << a[i];
	}
	cout << endl;
	system("pause");
	return 0;
}