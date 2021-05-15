#include <iostream>
#include <vector>
#include <string>

//translating english to whale talk: only take the vowels from the english and double the e's and u's. 

int main() {
 std::string english = "hi human";
 std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
 std::vector<char> whaletalk;

 for (int i = 0; i < english.size(); i++) {

   for (int j = 0; j < vowels.size(); j++) {

     if (english [i] == vowels [j]) {

       if (english [i] == 'e' or english [i] == 'u') {
         whaletalk.push_back(english[i]);
         whaletalk.push_back(english[i]);
       }

       else {
         whaletalk.push_back(english[i]);
       }
     }
    }
   }

  for (int i = 0; i < whaletalk.size(); i++) {
    std::cout << whaletalk[i];
  }
 }
 
