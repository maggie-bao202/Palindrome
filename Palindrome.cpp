#include <iostream>
#include <cstring>

using namespace std;
int main()
{
  char str[80];
  char str2[80];
  char str3[80];
  cin.get(str, 80);
  cin.get();
  bool go = true;
  
  for (int i = 0; i < strlen(str); i++){
    if( str[i] =='\0'){
      str2[i] = '\0';
      break;
    }
    if (isalnum(toupper(str[i])) == true){
      str2[i] = str[i];
      
    }
  }
  cout << str2 << endl;

  int j = 0;
  for (int i = strlen(str2) - 1; i >= 0; i--){
    str3[j] = str2[i];
    j++;
  }

  cout << str3 << endl;

  for (int i = 0; i < strlen(str2); i++){
    for (int j = 0; j < strlen(str3); j++){
      if (str3[j] == str2[i]){
	go = true;
      }
      else {
	go = false;
	break;
      }
    }
  }
  if (go = true){
    cout << "This is a Palindrome!" << endl;
  }
  else {
    cout << "Not a Palindrome." << endl;
  }  
  return 0;
}
