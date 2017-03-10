# Data Structures - Project 1
## Due 9/27/15 at 11:59 pm

Your task will be to determine if an input string is has the same letters when read forwards as it does backwards.

For example: The word 'anna' has the same letters regardless of which end you start from.

For the purpose of this project we will ignore any non-alphanumeric characters (space, punctuation, non-printable characters).

We will also practice using recursion so be sure to use it where directed.

## Files

I will supply you with these files:

 * README.md - This file contains these instructions
 * makefile - use 'make' on the linux system to compile the project using this makefile.  The binary file will be named 'palindrome.out'.
 * test_palindromes.cpp - This file contains all of the test cases and will be what you must compile and run to test your code.
 * Palindrome.hpp - This contains the header file for a Palindrome object. You must implement this object in order for the test cases to pass.

You must write the Palindrome.cpp file that implements the test_string function found in the Palindrome.hpp file.

## General Flow of the test_string function

 * Create a stack and a queue to use 
 * Using recursion, add each alphanumeric character to both a stack and a queue.
 * Using recursion, pop a character from the stack and dequeue a character from the queue.
   * If the characters are not equal -
     * Destroy the stack and queue appropriately. 
       (this can be handled by the compiler if you wish, just make sure not to have memory leaks)
     * Return the number of correct matches before the mismatch occurred. 
  * If they are equal, increment a counter for the correct number of matches.

 * When both the stack and queue are empty -
   * return -1 to indicate it is a palindrome.

## General Instructions

 * You may NOT use the standard library version of stack or queue, you must write your own.
   * However, you MAY alter the ones we have worked on together in class.
 * The stack MUST be implemented with linked lists.
 * The queue MUST be implemented using an array.
 * All tests MUST pass in order to get a passing grade.
 
## Hints

 * A string may be indexed like an array to get individual characters. my_string[0] will give the first character of the string 'my_string'.
 * If all the tests pass, you SHOULD be fairly close to 100% assuming you follow the implementation instructions, be sure to follow them all.

## Rubric

 * [30%] Your program must compile and run on our knuth linux server. We will go over how to test this in class. 

 * [50%] Your program must pass all test cases

 * [10%] You must document all functions in your code (you don't need to go crazy, just document what you are doing)

 * [10%] You must properly handle memory, memory leaks will cost you points
