/*
Given an N length string. Perform Q queries on it. Each query gives two indices L and R. Check whether string between L and R is palindrome or not.
N,Q,L,R<=10^5
*/

//LOGIC:
/*
In a palindrome string maximum 1 character can have odd count rest all must be even
We are hashing alphabest
'a' for index 0
'b' for index 1
'b'-'a' == 1-0 == 1
*/