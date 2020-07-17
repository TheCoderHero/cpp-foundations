#include <iostream>
#include <vector>

int zigZagCounter(std::vector<int> test);

int main()
{
	int myArray[] = {2,1,4,4,1,4,4,1,2,0,1,0,0,3,1,3,4,1,3,4};
	std::vector<int> myInts(myArray, myArray + sizeof(myArray) / sizeof(int));
	int zigZag = zigZagCounter(myInts);
	return 0;
}

int zigZagCounter(std::vector<int> a) {
	int counter = 0;
	int largestZigZag = 0;

	if (a.size() <= 2)
		return largestZigZag++;

	for (std::size_t x = 1; x < (a.size() - 1); ++x) {
		if (a[x] == a[x - 1] || a[x] == a[x + 1])
			largestZigZag = 0;
		else if ((a[x] < a[x - 1] && a[x] > a[x + 1]) ||
			(a[x] > a[x - 1] && a[x] < a[x + 1]))
			largestZigZag = 0;
		else if ((a[x] < a[x - 1] && a[x] < a[x + 1]) ||
			(a[x] > a[x - 1] && a[x] > a[x + 1])) {
			largestZigZag++;
			if (counter < largestZigZag)
				counter = largestZigZag;
		}
	}
	return counter + 2;
}
