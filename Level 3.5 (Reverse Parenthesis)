//You have a string s that consists of English letters, punctuation marks, whitespace characters, 
//and brackets. It is guaranteed that the parentheses in s form a regular bracket sequence.

//Your task is to reverse the strings contained in each pair of matching parentheses, starting from 
//the innermost pair. The results string should not contain any parentheses.

//Get last parenthesis number
int numberParenthesis(std::string n)
{
	int counter = 0;
	for (int x = 0; n[x]; x++)
	{
		if (n[x] == '(')
			counter++;
	}
	//std::cout << counter << std::endl; //Debug Purposes - Delete Later
	return counter;
}

//Get element positions of the last parenthesis
void elementPositions(std::string n, int total, int &startPoint, int &endPoint)
{
	int counter = 0;
	for (int x = 0; n[x]; x++)
	{
		if (n[x] == '(')
			counter++;
		if (counter == total)
		{
			startPoint = x;
			for (int y = x; n[y]; y++)
			{
				if (n[y] == ')')
				{
					endPoint = y;
					break;
				}
			}
			break;
		}
	}
	//std::cout << startPoint << " - " << endPoint << std::endl; //Debug Purposes - Delete Later
}

//Reverse the word in the parenthesis
void switchElements(std::string &n, int startPoint, int endPoint)
{
	char temp[2];
	int wordEnd = endPoint;
	for (int x = 0; n[x]; x++)
	{
		if (x == startPoint)
		{
			for (int y = startPoint; y < wordEnd; y++)
			{
				//std::cout << n[y] << " - " << n[wordEnd] << std::endl; //Debug Purposes - Delete Later
				temp[0] = n[y];
				n[y] = n[wordEnd];
				n[wordEnd] = temp[0];
				wordEnd--;
			}
		}
	}
	//Erase parenthesis
	n.erase(n.begin() + startPoint);
	n.erase(n.begin() + (endPoint - 1));
}

std::string reverseParentheses(std::string s) {
	std::string abc = s;
	int startPoint = 0;
	int endPoint = 0;
	int total = 0;
	do
	{
		total = numberParenthesis(abc);
		if (total == 0)
			break;
		elementPositions(abc, total, startPoint, endPoint);
		switchElements(abc, startPoint, endPoint);
		total = numberParenthesis(abc);
	} while (total != 0);
	//std::cout << abc << std::endl; //Debug Purposes - Delete Later
	return abc;
}

//Position: 571
