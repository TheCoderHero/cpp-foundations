//Some people are standing in a row in a park. There are trees between them which cannot be moved. 
//Your task is to rearrange the people by their heights in a non-descending order without moving the trees.

std::vector<int> sortByHeight(std::vector<int> line) {
    //Holder Vector for the people
    std::vector<int> people;
    
    //Pull the people from the line
    for(int x = 0; x < line.size(); x++)
        if(line[x] != -1)
        {
            people.push_back(line[x]);
            line.at(x) = 0;
        }
    
    //Sort the people in order
    sort(people.begin(), people.end());
    
    //Put the people back in line
    for (int y = 0; y < people.size(); y++)
        for(int z = 0; z < line.size(); z++)
            if(line[z] == 0)
            {
                line.at(z) = people[y];
                break;
            }
    
    return line;
}

//Position: 733
