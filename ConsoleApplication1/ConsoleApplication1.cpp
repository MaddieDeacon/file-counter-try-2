

#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
    int words = 0;
    int ch = 0;
    int sentences = 0;
        int count = 0;

    string str;
    std::cout << "Welcome to file summarizer!\n";
    ifstream MyReadFile("input.txt");
    getline(MyReadFile, str);
    int LengthOfString = str.length();
    for (int i = 0;str[i] != '\0'; i++)
    { 
        if (str[i] == ' ')
        {
            if (ch != 0)
            {
                words++;
            }
            ch = 0;
        }
        else {
            ch++;
        }
    }
    count << ch;
    if (ch != 0)
    {
        words++;
 
    }
    cout << "total words" << words;

}