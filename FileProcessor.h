// Ali Woodward
// 2385718
// alwoodward@chapman.edu
// CPSC 350-03
// Assignment 2

// FileProcessor.h
// This is a header file for FileProcessor.cpp that defines four public methods and includes iostream

#include <iostream>
#include <fstream>

using namespace std;

class FileProcessor{

public:
  FileProcessor(); //default constructor
  ~FileProcessor(); //destructor
  void processType(string input, string output, string translateType); //sends input and output files to correct processor method
  void processFile(string inputFile, string outputFile); //takes in an input file, translates its contents, produces an output file
  void processTutFile(string inputFile, string outputFile); //takes an input tutnese file, translates its contents back to english and produces an output file
};
