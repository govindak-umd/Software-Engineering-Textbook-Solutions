/**
 * @file main.cpp
 * @author Govind Ajith Kumar  (116699488)
 * @date 21 September 2020
 * @version 1.0
 * @section DISCRIPTION
 * This program returns the position of a given string in a given text
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
/**
 * @fn int findPosition1(int, int, int, char[], char[])
 * @brief The function to find the position of the given string in a given text.
 *
 * @param position1 position of the first element
 * @param text_length total length of the string to find the position of the word
 * @param array_to_search1_length
 * @param text the main text where the word is present
 * @param array_to_search1 substring to be found in the main text
 * @return
 */
int findPosition1(int position1, int text_length, int array_to_search1_length,
                  char text[1024], char array_to_search1[4]) {
  int i;
  int j;
  for (i = 0; i < text_length - array_to_search1_length + 1; i++) {
    bool found = true;
    for (j = 0; j < array_to_search1_length; j++)
      if (text[i + j] != array_to_search1[j])
        found = false;
    if (found) {
      position1 = i;
      break;
    }
  }
  cout << position1;
  return position1;
}

/**
 * @fn void printPosition()
 * @brief main function that contains the parameters and the sub-function to calculate the
 * position of the first element of the first position
 *
 */
void printPosition() {
  char text[1024] = "1234567890";
  int text_length = 10;
  char array_to_search1[4] = "23";
  int array_to_search1_length = 2;
  int position1 = -1;
  findPosition1(position1, text_length, array_to_search1_length, text,
                array_to_search1);
}
/**
 * @fn int main()
 * @brief main function
 *
 * @return the final output returned is the position of the beginning of a given
 * string in a given text
 */
int main() {
  printPosition();
}
