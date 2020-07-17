//Given a sequence of integers as an array, determine whether it is possible to obtain
//a strictly increasing sequence by removing no more than one element from the array.

bool almostIncreasingSequence(std::vector<int> sequence) {
    int count = 0;
    for(int x = 1; x < sequence.size(); x++)
        if(sequence[x-1] >= sequence[x])
        {
            count++;
            if (sequence[x-1] != sequence[0])
                if(sequence[x] != sequence[sequence.size() - 1])
                    if (sequence[x-2] > sequence[x])
                       count++;
                else if(sequence[x-1] == sequence[x+1])
                        count++;
            if(count > 1)
                break;
       }
    if(count <= 1)
        return true;
    else
        return false;
}

//Position: 958
