# Searching
There is a short descrption of various searching algorithms listed below.

## Linear Search
This Algorithm sequentially checks the complete list for the specified element. Returns true if found, else false.<br>
Time Complexity is &theta;(n).<br>
Space Complexity is &theta;(1).

## Binary Search
This Algorithm requires the initial list to be sorted. We use Quick Sort as an intermediary to sort user input. Once sorted, we recursively check the mid of list for the specified element. Returns true if match found, else we recurse either in left part or the right according to whether mid was more than search element or less, respectively. Search becomes unsuccesful when element is not found, and returns false<br>
Time Complexity is &theta;(log n). (Note: This is just for Binary Search, and excludes any Sorting Time)<br>
Space Complexity is &theta;(1).
