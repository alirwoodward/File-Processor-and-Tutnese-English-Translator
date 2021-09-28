// Ali Woodward
// 2385718
// alwoodward@chapman.edu
// CPSC 350-03
// Assignment 2

// Model.h
// This is a header file for Model.cpp that defines four public methods and includes iostream

#include <iostream>

using namespace std;

class Model{

public:
  Model(); //default constructor
  ~Model(); //destructor
  string translateSingleCharacter(char letter); // method to translate a single letter
  string translateDoubleCharacter(char doubleLetter); //method to translate two of the same letters in a row

};
