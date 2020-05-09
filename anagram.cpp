#include <iostream>
#include <string>
using namespace std;

//Function Declarations
string sortString(string user_input);

//Program Body
int main()
{
    string user_input_one, user_input_two;
    cout << "Welcome to Sandip's Anagram Checker! \nPlease Input two words that you'd like the check! \nAlso note...This program is Case-Sensitive.";
    cin >> user_input_one >> user_input_two;
    user_input_one = sortString(user_input_one);
    user_input_two = sortString(user_input_two);
    if (user_input_one == user_input_two)
        cout << "These two words are Anagrams!";
    else
        cout << "These are not Anagrams!";
    return 0;
}

//Function Definations
string sortString(string user_input)
{
    string temp_string = user_input;
    int i, j;
    for (i = 0; i < user_input.length(); i++)
    {
        for (j = i + 1; j < user_input.length(); j++)
        {
            if (temp_string[j] < temp_string[i]) {
                swap(temp_string[i], temp_string[j]);
            }
        }
    }
    return temp_string;
}
