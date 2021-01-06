// -------------------------------------------
//					Word
// -------------------------------------------

#include "Word.h"
#include <algorithm>
Word::Word(const string& word): word_{word}
{
	// throws an exception (in the form of WordContainsNoLetters object)
	// indicating that the word being constructed contains no letters
	transform(word_.begin(), word_.end(), word_.begin(), [](unsigned char c){return (std::tolower(c));});
	word_.erase(remove_if( word_.begin(), word_.end(), [](unsigned char c){return (std::ispunct(c));}), word_.end());
	if (word_.empty()) throw WordContainsNoLetters{};
	if(any_of(word_.begin(), word_.end(), [](unsigned char c){return (std::isspace(c));})) throw WordContainsSpace{};

	// Note, we will cover exceptions in more detail later on in the course.
}

// overloads the equivalence operator which allows to Words to be compared using ==
bool Word::operator==(const Word& rhs) const
{
	if (word_ == rhs.word_)
		return true;
	else
		return false;
}

bool Word::isQueryable() const
{
    if(word_.size() < 3)
    {
	return false;
    }else return true;
}
