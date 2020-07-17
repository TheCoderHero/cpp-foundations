//Given a string, find out if its characters can be rearranged to form a palindrome.

bool palindromeRearranging(std::string pal) {
    std::sort(pal.begin(), pal.end());  //Sort it

	std::vector<char> letters;
	for (int x = 0; x < pal.size(); x++)
		if (pal[x] != pal[x + 1])
			letters.push_back(pal[x]);  //Store unique letters

	std::vector<int> count;
	for (int x = 0; x < letters.size(); x++)
	{
		int total = 0;
		for (int y = 0; y < pal.size(); y++)
			if (letters[x] == pal[y])
				total++;
		count.push_back(total);   //Store letter counts
	}

	int odd = 0;  //count odd number of letters
	for (int x = 0; x < count.size(); x++)
		if (count[x] % 2 != 0)
			odd++;

	if (odd > 1)
		return false;
	else
		return true;
}

//Position: 473
