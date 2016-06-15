#Sorting
There is a short descrption of various sorting algorithms listed below. As a general rule, I've sorted the lists in ascending order. We can do the descending sort by just making a few changes to each of these algorithms.

##Selection Sort
This Algorithm sequentially checks the complete list for the smallest element by iterator i, with iterator j running from i+1 to end of list. If the ith element wasn't the smallest, elements at i & smallest j are swapped.We then continue with next iteration of i uptill all but one element in the list.<br>
Thus after each iteration the smallest elements are pushed towards the start of the list in the sorted order.<br>
Time Complexity is &theta;(n<sup>2</sup>).<br>
Space Complexity is &theta;(1).

##Insertion Sort
This Algorithm starts from the 2nd element in the list going to the end using iterator i. At each element, we compare it going back to the first element, swapping with all those encountered elements which are bigger than it.<br>
Thus after each iteration of i, we have a sorted list from index 0 to (i-1), i.e. of the elements visited till now.<br>
Time Complexity if &theta;(n<sup>2</sup>). (Note: For almost sorted array Insertion Sort runs almost in &theta;(n))<br>
Space Complexity is &theta;(1).

##Merge Sort
This Algorithm recursively divides the array in smaller arrays until they are of size 1. Arrays of size 1 are natively sorted. It then combines these adjacent sorted arrays recursively to form bigger sorted arrays until the whole array is sorted. The combine step is achieved in linear time since we just compare the top of the two lists, choose the smaller and continue the same.<br>
This is a basic divide and conquer algorithm.<br>
Here the divide step is trivial and takes &theta;(1) time.<br>
The combine steps takes &theta;(n) time.<br>
Using the Master Theorem: T(n) = aT(n/b) + D(n) + C(n)<br>
Here a = 2, since each problem is divided in two; and b = 2, the sub problems are of roughly half the size each.<br>
So, T(n) = 2T(n/2) + &theta;(1) + &theta;(n) = &theta;(nlog n)<br>
Thus, Time Complexity if &theta;(nlog n).<br>
Space Complexity is &theta;(n).

##Quick Sort
This Algorithm partitions the array around a chosen pivot, say the first element. At each partition step, the elements smaller than the pivot are pushed towards the left of it, and the bigger elements to the right. This procedure is then recursively applied to the left and right sub arrays to give a sorted array.<br>
This is a divide and conquer algorithm.<br>
Here the divide step is partitioning around the pivot and takes &theta;(n) time.<br>
The combine steps is trivial and takes &theta;(1) time.<br>
Using the Master Theorem: T(n) = aT(n/b) + D(n) + C(n)<br>
Here a = 2, since each problem is divided in two; and b = 2, the sub problems are of roughly half the size each (hope so!).<br>
So, T(n) = 2T(n/2) + &theta;(n) + &theta;(1) = &theta;(nlog n)<br>
Thus, Time Complexity if &theta;(nlog n). (Note: Worst Case Complexity is &theta;(n<sup>2</sup>))<br>
Space Complexity is &theta;(1).

##Heap Sort
This Algorithm first builds a max-heap out of the list. This is achieved by using a function max_heapify which recursively swaps parent's value with the value of the larger child, provided child's value is bigger than parent's.<br>
Once we have a max heap, our next step is to exchange first element(largest) with the last element of current heap. After this we reduce the heap size by 1 and call max_heapify on first element to come back to a state of max heap. Iteratively doing this uptill we have a heap of size 1 ensures that the list becomes sorted with the largest element at the right end and values descending towards left, giving us an ascending sort.<br>
max_heapify takes &theta;(log n) time.<br>
build_max_heap takes &theta;(n) time.<br>
Thus, Time Complexity if &theta;(nlog n).<br>
Space Complexity is &theta;(1).