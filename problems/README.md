# Problems

Collections of problems in LeetCode and its Solutions written in C++.

<!-- markdown-toc start - Don't edit this section. Run M-x markdown-toc-refresh-toc -->
**Table of Contents**

- [Problems](#problems)
    - [Add two numbers](#add-two-numbers)
    - [First Last indices of Sorted Array](#first-last-indices-of-sorted-array)
    - [Ransom Note](#ransom-note)
    - [Sort Colors](#sort-colors)
    - [Permutation](#permutation)
    - [Queue Reconstruction by Height](#queue-reconstruction-by-height)
    - [Two Sum](#two-sum)

<!-- markdown-toc end -->


## Add two numbers

Problem is described at
[Leetcode](https://leetcode.com/problems/add-two-numbers/ "Go to web").

Solution: Use recursion for iter through the next nodes of two linked lists at
once to do the calculation for this problem.

 - Time complexity  : O(n)
 - Space complexity : O(n)

## First Last indices of Sorted Array

Problem is described at
[Leetcode](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
"Go to web").

Solution: Use binary search to find the index of the target value.
 - Time Complexity  : O(log(n))
 - Space Complexity : O(log(n)) - Recursion Binary Search function

## Ransom Note

Problem is described at [Leetcode](https://leetcode.com/problems/ransom-note/
"Go to web").

Solution: Use a Hash Map for storing each magazine letters and its counts. Then,
we will use that value to check if it have enough letters to write the ransom
note.

 - Time complexity  : O(n)
 - Space complexity : O(1) - Constant complexity
 
## Sort Colors

Problem is described at [Leetcode](https://leetcode.com/problems/sort-colors/
"Go to web").

Solution: Use two pointer to travel through the array, one start at head, the
other will begin at tail. Once we loop through it, if the value is the smallest
we can swap it with the head, otherwise we will swap with the tail.

 - Time complexity  : O(n)
 - Space complexity : O(1)

## Permutation

_TODO_

## Queue Reconstruction by Height

Problem is described at
[Leetcode](https://leetcode.com/problems/queue-reconstruction-by-height/ "Go to
web").

Solution: Sorting the array by the height and the value come after it depend on
the data structure the problem provide. => Try to understand what data structure
we are dealing with.

 - Time complexity : O(nlog(n)) - Sorting algorithm complexity with lambda
   condition
 - Space complexity : O(n)

## Two Sum

Problem is described at [Leetcode](https://leetcode.com/problems/two-sum/ "Go to
web").

Solutions:
 - Use brute force way to loop through the array twice to find the correct pair.
   - Time Complexity  : O(n^2)
   - Space Complexity : O(1)
 - Use Hashmap to store the array while looping so we can find the pair by
   indexing the hashmap.
   - Time Complexity  : O(n)
   - Space Complexity : O(n)
