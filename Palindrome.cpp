#include <iostream>
#include <cstring>
using namespace std;
int main()
{
  char str[80];
  char str2[80];
  cin.get(str, 80);
  cin.get();

  int count = 0;
  
  for (int i = 0; i < strlen(str); i++){
    if (
    if (isalnum(toupper(str[i])) == true){
      str[i] == str2[i];
      
    }  
  }
  cout << str2 << endl;
  
  for (int i = strlen(str) - 1; i >= 0; i--){
    cout << str2[i];
  }
  return 0;
}
