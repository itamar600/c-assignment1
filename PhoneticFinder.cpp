#include <iostream>
#include <stdexcept>
#include <string>
#define LOWTOUP 'a'-'A'
#define SIZEOFS 8
namespace phonetic{
	std::string find(std::string text, std::string s1){
        if(s1=="")
            __throw_exception_again;
        std::string s2;
        int i=0;
        while(i<text.length()){
          while(text[i]==' ' && i<text.length()){
             i++;
          }
        s2=getWord(i,text);
        if(ifWordsMatch(s1,s2))
            return s2;
        while(text[i]!=' ' && i<text.length()){
             i++;
          }
        }
    }
};
//Return word from index i 
std::string getWord(size_t i, std::string text){
    int j;
    for(j=i; j<text.length(); j++){
        if(text[j]==' ')
             break;
    }
    return text.substr(i,j);
}

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
bool ifLettersMatch(char ch1, char ch2){
  if(ch1==ch2 || ch1==(char)(ch2+LOWTOUP) || ch1==(char)(ch2-LOWTOUP))
    return true;
  for(int i=0; i<SIZEOFS; i++){
      if(s[i].find(ch1)!=std::string::npos && s[i].find(ch1)!=std::string::npos)
        return true;
  }
  return false;
}