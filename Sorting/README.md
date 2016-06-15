#Sorting
There is a short descrption of various sorting algorithms listed below. As a general rule, I've sorted the lists in ascending order. We can do the descending sort by just making a few changes to each of these algorithms.

##Selection Sort
This Algorithm sequentially checks the complete list for the smallest element by iterator i, with iterator j running from i+1 to end of list. If the ith element wasn't the smallest, elements at i & smallest j are swapped.We then continue with next iteration of i uptill all but one element in the list.<br>
Thus after each iteration the smallest elements are pushed towards the start of the list in the sorted order.<br>
Time Complexity is O(n<sup>2</sup>).<br>
Space Complexity is O(1).

##Insertion Sort
This Algorithm starts from the 2nd element in the list going to the end using iterator i. At each element, we compare it going back to the first element, swapping with all those encountered elements which are bigger than it.<br>
Thus after each iteration of i, we have a sorted list from index 0 to (i-1), i.e. of the elements visited till now.
Time Complexity if O(n<sup>2</sup?). (Note: For almost sorted array Insertion Sort runs almost in O(n))<br>
Space Complexity is O(1).