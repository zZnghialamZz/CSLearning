# Problems

Collections of problems in LeetCode and its Solutions written in C++.

## Add two numbers

Problem is described at
[Leetcode](https://leetcode.com/problems/add-two-numbers/ "Go to web").

Solution: Use recursion for iter through the next nodes of two linked lists at
once to do the calculation for this problem.

 - Time complexity  : O(n)
 - Space complexity : O(n)

## Ransom Note

Problem is described at [Leetcode](https://leetcode.com/problems/ransom-note/
"Go to web").

Solution: Use a Hash Map for storing each magazine letters and its counts. Then,
we will use that value to check if it have enough letters to write the ransom
note.

 - Time complexity  : O(n)
 - Space complexity : O(1) - Constant complexity

## Two Sum

Problem is described at [Leetcode](https://leetcode.com/problems/two-sum/ "Go to
web").

Solutions:
 - Use brute force way to loop through the array twice to find the correct pair.
   - Time Complexity  : O(n^2)
   - Space Complexity : None
 - Use Hashmap to store the array while looping so we can find the pair by
   indexing the hashmap.
   - Time Complexity  : O(n)
   - Space Complexity : O(n)
