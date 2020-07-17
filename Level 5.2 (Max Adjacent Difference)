//Given an array of integers, find the maximal absolute difference between any two of its adjacent elements.

int arrayMaximalAdjacentDifference(std::vector<int> inputArray) {
    int max = 0;
    for(int x = 0; x < inputArray.size()-1; x++)
        if(max < abs(inputArray[x] - inputArray[x+1]))
            max = abs(inputArray[x] - inputArray[x+1]);
    return max;
}

//Position: 446
