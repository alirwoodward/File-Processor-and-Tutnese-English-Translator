// Ali Woodward
// 2385718
// alwoodward@chapman.edu
// CPSC 350-03
// Assignment 2

// Translator.cpp
// This cpp file contains code for the Translator class


#include "Translator.h"
#include "Model.h"

//default constructor
Translator::Translator(){
  //default constructor body - empty
}

// deconstructor
Translator::~Translator(){
  //deconstuctor - empty
}

// method that takes in a word string as input and returns that word translated into tutnese
string Translator::translateEnglishWord(string word){
  string newWord = "";
  // for loop that iterates through each letter in the word
  for(int i = 0; i < word.size(); ++i){
    Model m;
    if(tolower(word[i]) == tolower(word[i+1])){
      newWord += m.translateDoubleCharacter(word[i]);
      i += 1;
    }else{
      newWord += m.translateSingleCharacter(word[i]);
    }
  }
  return newWord;
}


//method that takes in a sentence string as input and returns a string that is the translated version of that sentence into tutnese
string Translator::translateEnglishSentence(string sentence){
  string fullNewSentence = "";
  string currentWord = "";

  for(int i = 0; i < sentence.size(); ++i){
    if(sentence[i] == ' ' || sentence[i] == '.' || i+1 == sentence.size()){
      currentWord += sentence[i];
      fullNewSentence += translateEnglishWord(currentWord);
      currentWord = "";
    }else{
      currentWord += sentence[i];
    }
  }
  return fullNewSentence;
}











//method that takes in a sentence string in tutnese as input and returns a string that is the translated version of that sentence into english
string Translator::translateTutneseSentence(string sentence){
  string fullNewSentence = "";
  string currentWord = "";

  for(int i = 0; i < sentence.size(); ++i){
    if(sentence[i] == ' ' || sentence[i] == '.' || i+1 == sentence.size()){
      currentWord += sentence[i];
      fullNewSentence += translateTutneseWord(currentWord);
      currentWord = "";
    }else{
      currentWord += sentence[i];
    }
  }
  return fullNewSentence;
}

// method that takes in a tutnese word string as input and returns that word translated into english
string Translator::translateTutneseWord(string word){
  string newWord = "";
  // for loop that iterates through each letter in the word
  for(int i = 0; i < word.size(); ++i){
    //first must check if the letter is a double-- start with looking for "squa"
    if(tolower(word[i]) == 's' && word[i+1] == 'q' && word[i+2] == 'u' && word[i+3] == 'a'){
      if(word[i+4] == 't'){
        //instance of "squatut"
        if(word[i+5] == 'u' && word[i+6] == 't'){
          //super weird instance of squatutut -- uut happening
          if(word[i+7] == 'u' && word[i+8] == 't'){
            if(word[i] == 'S'){
              newWord+= toupper(word[i+5]);
            }else{
              newWord+= word[i+5];
            }
            newWord += word[i+5];
            newWord += word[i+6];
            i += 8;
          // instance of squa + tut returns tt
          }else{
            if(word[i] == 'S'){
              newWord+= toupper(word[i+4]);
            }else{
              newWord+= word[i+4];
            }
            newWord+= word[i+4];
            i += 6;

        }
        //instance of "squat" + vowel
        }else{
          if(word[i] == 'S'){
            newWord+= toupper(word[i+5]);
          }else{
            newWord+= word[i+5];
          }
          newWord+= word[i+5];
          i += 5;
        }
      //instance of "squa" + consonant
      }else{
        //// all of the if statements for consonants to add i + x
        if(word[i+4] == 'c' || word[i+4] == 'h' || word[i+4] == 'k' || word[i+4] == 'w'){
          if(word[i] == 'S'){
            newWord+= toupper(word[i+4]);
          }else{
            newWord+= word[i+4];
          }
          newWord+= word[i+4];
          i += 7;
        }else if(word[i+4] == 'q'){
          if(word[i] == 'S'){
            newWord+= toupper(word[i+4]);
          }else{
            newWord+= word[i+4];
          }
          newWord+= word[i+4];
          i += 8;
        }else if(word[i+4] == 'e'){
          if(word[i] == 'S'){
            newWord+= toupper(word[i+5]);
          }else{
            newWord+= word[i+5];
          }
          newWord+= word[i+5];
          i += 5;
        }else{
          if(word[i] == 'S'){
            newWord+= toupper(word[i+4]);
          }else{
            newWord+= word[i+4];
          }
          newWord+= word[i+4];
          i += 6;
        }
      }
    }


    // continues here to rest of if statements if "squa" is not present
    // must do special case for "ex"
    //vowels and any other character that do not get translated will be in the else at the end
    else if(tolower(word[i]) == 'c' || tolower(word[i]) == 'h' || tolower(word[i]) == 'k' || tolower(word[i]) == 'w'){
      newWord += word[i];
      i += 3;
    }else if(tolower(word[i]) == 'q'){
      newWord += word[i];
      i += 4;
    }else if(word[i] == 'e' && word[i+1] == 'x'){
      newWord += 'x';
      i += 1;
    }else if(word[i] == 'E' && word[i+1] == 'x'){
      newWord += 'X';
      i += 1;
    }else if(tolower(word[i]) == 'b' || tolower(word[i]) == 'd' || tolower(word[i]) == 'f' || tolower(word[i]) == 'g' || tolower(word[i]) == 'j' || tolower(word[i]) == 'j' || tolower(word[i]) == 'l' || tolower(word[i]) == 'm' || tolower(word[i]) == 'n' || tolower(word[i]) == 'p' || tolower(word[i]) == 'r' || tolower(word[i]) == 's'|| tolower(word[i]) == 'v' || tolower(word[i]) == 'y' || tolower(word[i]) == 'z' || tolower(word[i]) == 't'){
      newWord += word[i];
      i += 2;
    }else{
      newWord += word[i];
    }
  }
  return newWord;
}
