// Ali Woodward
// 2385718
// alwoodward@chapman.edu
// CPSC 350-03
// Assignment 2

// FileProcessor.cpp
// This file contains a constructor, destructor, and a method named processFile that takes in the names of input and output files
// and then reads from teh input file, calls the correct other classes to translate the file, and then prints the translated words
// into the output file


#include "Model.h"
#include "FileProcessor.h"
#include "Translator.h"

// default constructor
FileProcessor::FileProcessor(){
  //default constructor body - empty
}

// deconstructor
FileProcessor::~FileProcessor(){
  //deconstuctor - empty
}

void FileProcessor::processType(string input, string output, string translateType){
  if(translateType == "E2T"){
    processFile(input, output);
  }else if(translateType == "T2E"){
    processTutFile(input, output);
  }else{
    cout << "sorry, you did not enter a valid way to translate... please use E2T or T2E" << endl;
  }
}

//processFile method takes in an input file, opens the file for reading, reads its contents, then translates it and prints it to the output file
void FileProcessor::processFile(string inputFile, string outputFile){
  //open file for writing
  Translator t;

  fstream tutnese;
  tutnese.open(outputFile, ios::out);

  //open file for reading
  fstream english;
  english.open(inputFile, ios::in);

  string currLine;
  if (english.is_open())
  {
    while ( getline (english,currLine) )
    {
      tutnese << t.translateEnglishSentence(currLine) + "\n";
    }
    english.close();
  }

  tutnese.close();
}

void FileProcessor::processTutFile(string inputFile, string outputFile){
  //open file for writing
  Translator t2;


//switch all of this around
  fstream eng;
  eng.open(outputFile, ios::out);

  //open file for reading
  fstream tut;
  tut.open(inputFile, ios::in);

  string currLine;
  if (tut.is_open())
  {
    while ( getline (tut,currLine) )
    {
      eng << t2.translateTutneseSentence(currLine) + "\n";
    }
    tut.close();
  }

  eng.close();
}
