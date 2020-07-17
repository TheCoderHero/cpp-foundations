//Given an array of strings, return another array containing all of its longest strings.

std::vector<std::string> allLongestStrings(std::vector<std::string> inputArray) 
{
    int length = 0;
    vector<string>list;
    for(int x = 0; x < inputArray.size(); x++)
    {
        if(inputArray[x].size() > length)
        {
            list.clear();
            length = inputArray[x].size();
            list.push_back(inputArray[x]);
        }
        else if (inputArray[x].size() == length)
            list.push_back(inputArray[x]);
    }
    return list;
}

//Position: 811
