// -------------------------------------------
//					Line
// -------------------------------------------

#include "Line.h"

Line::Line(const string& line)
{

    stringstream ss(line);
    string Buf;

    while (ss >> Buf)
        words.push_back(Buf);

}

bool Line::contains(const Word& search_word) const
{
	for(auto word:words)
    {
        if((word == search_word)&&(search_word.isQueryable()== true))
            return true;
    }
 return false;
}
