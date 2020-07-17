//Several people are standing in a row and need to be divided into two teams. The first person goes 
//into team 1, the second goes into team 2, the third goes into team 1 again, the fourth into team 2, 
//and so on.

//You are given an array of positive integers - the weights of the people. Return an array of two 
//integers, where the first element is the total weight of team 1, and the second element is the 
//total weight of team 2 after the division is complete.

std::vector<int> alternatingSums(std::vector<int> a) {
    int tOne = 0;
    int tTwo = 0;
    std::vector<int> total;
    for(int x = 0; x < a.size(); x++)
    {
        if(x == 0 || x % 2 == 0)
            tOne += a[x];
        else
            tTwo += a[x];
    }
    total.push_back(tOne);
    total.push_back(tTwo);
    return total;
}

//Position: 545
