#include <iostream>
#include <cstring>

using namespace std;
/*9/19/19 Author: Maggie Bao Description: The user is prompted to input a sentence. The computer will then tell the user whether or not they entered a palindrome-- a sentence or word that is  the same forwards as it is backwards.*/

int main()
{
  char str[80];
  char str2[80];
  char str3[80];
  cin.get(str, 80);
  cin.get();
  
  int count = 0; //keep count of index after removing spaces
  for (int i = 0; str[i]; i++){ //Removes spaces in input
    if( str[i] != ' '){
      str[count++] = str[i];
    }
  } 
  str[count] = '\0'; //nulls last character
  
  //cout <<str << endl;

  count = 0; //reset count to zero to keep track of new array str2 index
  for (int i = 0; i < strlen(str); i++){
    if (isalnum(toupper(str[i])) == true){//create array str2 that only includes numbers/letters
      str[i] = tolower(str[i]);//convert all letters to lowercase
      str2[count++] = str[i]; //put into str2 array

    }
  }
 
  str2[count] = '\0'; //null last char
  
  //cout << str2 << endl;

  count = 0;
  for (int i = strlen(str2) - 1; i >= 0; i--){//read last character in array, move forward
    str3[count++] = str2[i];//put in new array str3
  }
  str3[count] = '\0';

  //cout << str3 << endl;

  if (strcmp (str2, str3) == 0){//if matches
    cout << "This is a Palindrome!" << endl;
  }  
  else {
    cout << "This is not a Palindrome." << endl;
  }
  
  return 0;
}
