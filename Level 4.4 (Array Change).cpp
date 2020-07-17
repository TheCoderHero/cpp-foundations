//You are given an array of integers. On each move you are allowed to increase exactly one of its 
//element by one. Find the minimal number of moves required to obtain a strictly increasing sequence 
//from the input.

int arrayChange(std::vector<int> inputArray) {
    int change;
    int counter = 0;
    do
    {
        change = 0;
        for(int x = 0; x < inputArray.size() - 1; x++)
        {
            if(inputArray[x] >= inputArray[x+1])
            {
                inputArray[x+1] ++;
                counter++;
                change++;
            }
        }
    } while (change != 0);
    return counter;
}

//Position: 499
