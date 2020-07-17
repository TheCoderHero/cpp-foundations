//Find the minimal length of the jump enough to avoid all the obstacles.

int avoidObstacles(std::vector<int> inputArray) {
    //Sort the inputArray
    sort(inputArray.begin(), inputArray.end());
    
    //Loop through every possible number
    for(int x = 2; ; x++){
        //Loop through each element
        for(int y = 0; y < inputArray.size(); y++) {
            //If the element is divisible by the number, break
            if(inputArray[y] % x == 0)
                break;
            //If we reach the end of the array, return the number
            else if(y == inputArray.size() - 1)
                return x;
        }
    }
}

//Position: 1684
