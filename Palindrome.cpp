//************************************************************
// File: Palindrome.cpp                                      *
// Author: Alec J. Horne                                     *
// Description: Checks a string to see if it is a palindrome *
//************************************************************
#include "Palindrome.hpp"
#include "AQueue.hpp"
#include "LStack.hpp"

#include <ctype.h>
#include <string>

Palindrome::Palindrome(){}

//Function that checks a string to see if it is a palindrome
int Palindrome::test_string(const std::string& s) {

    //Create new palindrome object with queue size s
    Palindrome* pal = new Palindrome();
    pal->aq = new AQueue<char>(s.size());
    pal->ls = new LStack<char>();

    //Variables to keep track and modify string size
    int count = 0;
    int modStrSize = 0;

    //If the string is empty then it is a palindrome
    if(s.size() == 0){
        count = -1;

    //Else enqueue and push the string into stack and queue
    //and dequeue and pop storing correct matches in count
    }else{
        pal->enqueueAndPush(s);
        modStrSize = pal->aq->size();
        count = pal->dequeueAndPop(count);
    }

    //If all characters match then it is a palindrome
    if(count == modStrSize)
        count = -1;

    //Cleanup
    delete pal->aq;
    delete pal->ls;
    delete pal;

    return count;
}

/**
    Recursive function to enqueue and push a character from a string
    into a stack and queue while substring x is not empty. Checks if c
    is a number or letter and makes it lowercase before pushing. Then
    sends a substring of x as the parameter.
*/
void Palindrome::enqueueAndPush(std::string x) {
    if(x.size() != 0){
        char c = x[0];
        if(isalpha(c)){
            c = tolower(c);
            ls->push(c);
            aq->enqueue(c);
        }
        enqueueAndPush(x.substr(1));
    }
}

/**
    Recursive function to dequeue and pop a character and check if
    that character is a match to its counterpart at the other end of
    the string. Then returns the correct amount of matches.
*/
int Palindrome::dequeueAndPop(int correctMatches) {
    if(ls->size() != 0){
        char schar = ls->pop();
        char qchar = aq->dequeue();
        if(schar == qchar) {
            return 1 + dequeueAndPop(correctMatches);
        }
        else
            return correctMatches;
    }
}
