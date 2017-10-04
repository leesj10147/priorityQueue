#include <cstdio>
#include <vector>
using namespace std;
inline int parent(int i)
{
	return (i - 1) / 2;
}
inline int right(int i)
{
	return 2 * i + 2;
}
inline int left(int i)
{
	return 2 * i + 1;
}
void maxHeapify(vector<int>& v, int i, int heap_size)
{
	int l = left(i);
	int r = right(i);
	int largest = i;
	if (l < heap_size && v[l] > v[largest])
		largest = l;
	if (r < heap_size && v[r] > v[largest])
		largest = r;
	if (largest != i)
	{
		swap(v[i], v[largest]);
		maxHeapify(v, largest, heap_size);
	}
}
void buildMaxHeap(vector<int>& A)
{
	for (int i = parent(A.size() - 1); i >= 0; --i)
		maxHeapify(A, i, A.size());
}
void heapSort(vector<int>& A)
{
	buildMaxHeap(A);
	for (int i = A.size() - 1; i >= 1; --i)
	{
		swap(A[0], A[i]);
		maxHeapify(A, 0, i);
	}
}
int heapMaximum(vector<int>& A)
{
	return A[0];
}
int heapExtractMax(vector<int>& A)
{
	if (A.size() < 1)
		return INT_MIN;
	int max = A[0];
	A[0] = A[A.size() - 1];
	A.pop_back();
	maxHeapify(A, 0, A.size());
	return max;
}
void heapIncreaseKey(vector<int>& A, int i, int key)
{
	if (key < A[i])
		return;
	while (i > 0 && A[parent(i)] < key)
	{
		A[i] = A[parent(i)];
		i = parent(i);
	}
	A[i] = key;
}
void maxHeapInsert(vector<int>& A, int key)
{
	A.push_back(INT_MIN);
	heapIncreaseKey(A, A.size() - 1, key);
}
void maxHeapDelete(vector<int>& A, int i)
{
	heapIncreaseKey(A, i, INT_MAX);
	A[0] = A[A.size() - 1];
	A.pop_back();
	maxHeapify(A, 0, A.size());
}
int main(void)
{
	return 0;
}