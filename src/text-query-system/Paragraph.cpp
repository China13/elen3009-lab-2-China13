// -------------------------------------------
//					Paragraph
// -------------------------------------------

#include "Paragraph.h"

void Paragraph::addLine(const Line& line)
{
//    auto countNumOflines = 0;
    lines.push_back(line);
//    numOflinesAdded.push_back(countNumOflines++);
}

tuple<bool, vector<int>> Paragraph::contains(const Word& search_word) const
{
    vector<int> found_at_line;
    auto i = 1u;
    for(auto line:lines)
    {
     if(line.contains(search_word))
      {
        found_at_line.push_back(i);
      }
      i++;
    }

    if(found_at_line.size() > 0)
	return {true, found_at_line};
	else return {false, found_at_line};
}
