# priorityQueue
priority queue, and heapSort
Tree implementation with vector
The starting index of the tree is 0

functions
  parent(int i) : return index of parent
  right(int i) : return index of right child
  left(int i) : return index of left child
  maxHeapify(vector, i, heap_size) : Assume that all child nodes of the i-th node are maxHeap, 
                                     and generate maxHeap with i-th root.
  buildMaxHeap(vector<int>& A) : Makes A whole to maxHeap
  heapSort(vector<int>&) : Sort using maxHeap
  
  
  
                    A must be maxHeap before all the functions below are called.
                    Even when these functions are called, the property of maxHeap is maintained.
  heapMaximum(vector<int>& A) : returns the largest value
  heapExtractMax(vector<int>& A): remove and return the largest value
  heapIncreaseKey(vector<int>& A, int i, int key) : A[i] = key
  maxHeapInsert(vector<int>& A, int key): Put a key in A
  maxHeapDelete(vector<int>& A, int i) : remove A[i]
