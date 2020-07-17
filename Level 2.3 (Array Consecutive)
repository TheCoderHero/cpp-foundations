//Ratiorg got statues of different sizes as a present from CodeMaster for his birthday, 
//each statue having an non-negative integer size. Since he likes to make things perfect, 
//he wants to arrange them from smallest to largest so that each statue will be bigger 
//than the previous one exactly by 1. He may need some additional statues to be able to 
//accomplish that. Help him figure out the minimum number of additional statues needed.

int makeArrayConsecutive2(std::vector<int> statues) {
    
    //SET additions equal to 0
    int additions = 0;

    //IF vector size is equal to 1
    if(statues.size() == 1)
        
        //RETURN 0;
        return additions;
    
    //SORT the vector from least to greatest
    sort(statues.begin(), statues.end());

    //FOR each element in the vector
    for(int x = 0; x < (statues.size() - 1); x++)
        
        //SUM additions + (difference between each element and subtract 1)
        additions += ((statues[x + 1] - statues[x]) - 1);
    
    //RETURN additions
    return additions;
}

//Position: 1515
