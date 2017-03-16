#include "utils.h"
#include <string>
#include <vector>

using namespace std;

vector<string> Utils::split(const string& input, char splitter, bool handle_double_quote)
{
	vector<string> result;
	string::size_type length = input.length();
	bool in_quote = false;

	string* curr = new string;
	char c;
	for (unsigned int current = 0; current < length; ++current)
	{
		c = input[current];
		if (c == splitter)
		{

			if (handle_double_quote && in_quote)
			{
				curr->push_back(c);
				continue;
			}

			if (curr->length() > 0)
			{
				result.push_back(*curr);
				delete curr;
				curr = new string;
			}
		}
		else
		{
			if (handle_double_quote && c == '"')
			{

				if (in_quote && (current == length - 1 || input[current + 1] == splitter))
				{
					in_quote = false;

					// when we are getting out of a quote, we should also end the string
					if (curr->length() > 0)
					{
						result.push_back(*curr);
						delete curr;
						curr = new string;
					}
					continue;
				}
				// a start of the quote shall be
				// either at the beginning of the string,
				// or right after a splitter
				else if (!in_quote && (current == 0 || input[current - 1] == splitter))
				{
					in_quote = true;
					continue;
				}
			}

			curr->push_back(c);
		}
	}

	if (curr->length() > 0)
		result.push_back(*curr);
	delete curr;

	return result;
}