//************************************************************
// File: Palindrome.hpp                                      *
// Author: Alec J. Horne                                     *
// Description: Checks a string to see if it is a palindrome *
//************************************************************
#ifndef PALINDROME_HPP
#define PALINDROME_HPP

#include "LStack.hpp"
#include "AQueue.hpp"
#include <string>

class Palindrome {

private:
  AQueue<char>* aq;
  LStack<char>* ls;

public:
  Palindrome();
  ~Palindrome(){}
  int test_string(const std::string& s);
  void enqueueAndPush(std::string x);
  int dequeueAndPop(int correctMatches);
};

#endif
