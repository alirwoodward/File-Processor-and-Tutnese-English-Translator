// Ali Woodward
// 2385718
// alwoodward@chapman.edu
// CPSC 350-03
// Assignment 2

// Translator.h
// This is a header file for Translator.cpp that defines four public methods and includes iostream


#include <iostream>

using namespace std;

class Translator{

public:
  Translator(); //default constructor
  ~Translator(); //destructor
  string translateEnglishWord(string word); //translates a whole english word into tutnese
  string translateEnglishSentence(string sentence); // translates a whole english sentence into tutnese
  string translateTutneseWord(string word); //translates a whole tutnese word into english
  string translateTutneseSentence(string sentence); // translates a whole tutnese sentence into english

};
