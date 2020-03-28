#pragma
#include <iostream>
#include <stdexcept>
#include <string>
#include "PhoneticFinder.hpp"
#define LOWTOUP ('a'-'A')
#define SIZEOFS 8
namespace phonetic{
	std::string find(std::string text, std::string s1){
        if(s1=="")
            throw std::runtime_error("Empty word");
        std::string s2="";
        size_t i=0,j=0;
        while(i<text.length()){
          //Going to the first letter of the word  
          while(text[i]==' ' && i<text.length()){
             i++;
          }
          j=i;
          //Going to end of the word 
          while(text[i]!=' ' && i<text.length()){
             i++;
          }
        s2=text.substr(j,i-j);
        if(ifWordsMatch(s1,s2))
            return s2;
        }
        throw std::runtime_error("Match not found ");
    }
};

//Received 2 words and check if have match to the words.
bool ifWordsMatch(std::string str1, std::string str2){
    if(str1.length()!=str2.length())
        return false;
    for(int i=0; i<str1.length(); i++){
        if(!ifLettersMatch(str1[i], str2[i]))
            return false;
    }
    return true;
}

std::string s[]= {"vVwW", "bBfFpP", "gGjJ","cCkKqQ","sSzZ","dDtT","oOuU","iIyY"}; 
//Received 2 letters and check if have match to the letters.
bool ifLettersMatch(char ch1, char ch2){
  if(ch1==ch2 || ch1-ch2==LOWTOUP || ch1-ch2==-LOWTOUP)
    return true;
  for(int i=0; i<SIZEOFS; i++){
      if(s[i].find(ch1)!=std::string::npos && s[i].find(ch2)!=std::string::npos)
        return true;
  }
  return false;
}