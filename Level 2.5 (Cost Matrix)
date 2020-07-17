//After becoming famous, CodeBots decided to move to a new building and live together. 
//The building is represented by a rectangular matrix of rooms, each cell containing 
//an integer - the price of the room. Some rooms are free (their cost is 0), but that's 
//probably because they are haunted, so all the bots are afraid of them. That is why any 
//room that is free or is located anywhere below a free room in the same column is not 
//considered suitable for the bots.

//Help the bots calculate the total price of all the rooms that are suitable for them.


int matrixElementsSum(std::vector<std::vector<int>> matrix) {
    int cost = 0;
    for(int col = 0; col < matrix[0].size(); col++)
        for(int row = 0; row < matrix.size(); row++)
                if(matrix[row][col] != 0)
                    cost += matrix[row][col];
                else
                    break;
    return cost;
}

//Position 967
