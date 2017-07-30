# Order Statistics
Here we work on an algorithm such that given a rank we output the element at that rank without sorting the array, and in linear time.

## Select Rank
This Algorithm partitions the array around a random pivot. At each partition step, the elements smaller than the pivot are pushed towards the left of it, and the bigger elements to the right. After this we check if this ranked partition (which is now at its correct rank) is the rank desired. If yes, output the value. If not, we either recurse in the left portion or right portion according to whether required rank is less than or more than this partition.<br>
This is a divide and conquer algorithm..<br>
Time Complexity is &theta;(n)<br>
Space Complexity is &theta;(log n)<br>
