#Problems
Here we work on a few common problems.

##Maximum Subarray

Here we employ a Dynamic Programming approach.<br>
Rather than a brute force technique which would mean a polynomial runtime (of order 2), we simply traverse our array doing the following. If by adding the current array item to our sum, the value is bigger than the current item, it would imply that it's profitable to continue adding this item to our sum. Else, we reset our sum to the current item since adding any previous values was decreasing the total. Hence we find the maximum subarray at each index processed till now. Also on each iteration we will check for the maximum sum encountered so far, with a note about their positions. We can initialize our sum value to the first array item, and start iteration from the second.<br>
Time Complexity is &theta;(n)

##Priority Queue Implementation

Here we implement a Maximum Priority Queue.<br>
A traditional Queue processes data First-In-First-Out, while a Priority Queue has some priority attached with each data, and these data are popped out in order of theie priority.<br>
Data Structure used for our implementation is a Max Heap. The functionalities provided for the Priority Queue are:<br>
<ul>
	<li>Show Highest Priority Item</li>
	<li>Remove Highest Priority Item</li>
	<li>Insert an Item into Priority Queue</li>
	<li>Modify an Item into Priority Queue</li>
</ul>
Time Complexity of the first operation is O(1), while the rest is O(log n). (where n is total no. of items)

##Longest Common Subsequence

Here we implement a Dynamic Programming approach.<br>
We intend to find the longest common sequence of characters between two strings. To accomplish this, we create a matrix which is of the size len_str1+1 by len_str2+1. In this matrix, we will compare each character indexed by rows for str1 and columns for str2. If they are equal, we will add 1 to the longest string found till now, else we just continue with previous value.<br>
Time Complexity is &theta;(m+n). (where m and n are lengths of two string respectively)