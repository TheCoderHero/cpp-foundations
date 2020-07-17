//Two arrays are called similar if one can be obtained from another by swapping at most one pair of 
//elements in one of the arrays.

//Given two arrays, check whether they are similar.

bool areSimilar(std::vector<int> A, std::vector<int> B) {
    int counter = 0;
    
    //How many differences are there total
    for(int x = 0; x < A.size(); x++)
    {
        if(A[x] != B[x])
            counter++;
    }
    
    //Sort the vectors
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    
    //Do the vectors match?
    for(int y = 0; y < A.size(); y++)
        if(A[y] != B[y])
            return false;
    
    //If vectors match, check the total differences
    if(counter > 2)
        return false;
    else
        return true;
}

//Position: 505
