#include <iostream>
#include "Word.h"
#include "Line.h"
#include "Paragraph.h"
#include "FileReader.h"

using namespace std;

int main()
{

    // Prompt user for fileName
    cout << "Please enter file name: ";
    string fileName;
    cin >> fileName;

    // Create input file and send it into paragraph
    FileReader inFile(fileName);
    Paragraph paragraph;
    inFile.readFileInto(paragraph);

    // Search word
    string word;
    // Search history
    vector<Word> Search;
    int z = 0;

    while(word != ".") {
	cout << "Please enter a word to search for or "
	     << "."
	     << " to quit: ";

	// Get search word
	cin >> word;
	cin.clear();

	// Check user input
	if(word == ".") {
	    exit(0);
	} else {

	    vector<int> line_numbers;
	    Search.push_back(word);

	    // Search for word
	    if(get<0>(paragraph.contains(Search[z])) == true) {
		cout << "Word found: ";

		// Print out line numbers
		int j = line_numbers.size();
		for(int i = 0; i < j; i++) {
		    cout << "line " << line_numbers[i] << endl;
		}
	    } else {
		cout << "Word not found. " << endl;
	    }
	}

	z = z + 1; // Search history iterator
    }
    return 0;
}
