//Program for finding word count in the Paragraph
#include<bits/stdc++.h>
using namespace std;
int WordCount(vector <string> &Paragraph)
{
    int count = 0;
    for (const string& line : Paragraph)
    {
        bool inWord = false;
        for (char c : line)
        {
            if (!isspace(c) && !inWord) //start of a word
            {
                inWord = true;
                count ++;
            }
            else if (isspace(c)) //end of a word
            {
                inWord = false;
            }
        }
    }
    return count;
}
int main()
{
    vector <string> Paragraph;
    string line;
    cout << "Enter your paragraph: \n";
    while(getline(cin,line))
    {
        if (line.empty())
        {
            break;
        }
        Paragraph.push_back(line);
    }
    cout <<"\nThe paragraph, you entered has "<< WordCount(Paragraph)<<" Words.";
}