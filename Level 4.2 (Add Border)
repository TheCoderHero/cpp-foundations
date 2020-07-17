//Given a rectangular matrix of characters, add a border of asterisks(*) to it.

std::vector<std::string> addBorder(std::vector<std::string> picture) {
    //Add asterisk to font and back of word
    for(int y = 0; y < picture.size(); y++)
    {
        picture[y].push_back('*');
        picture[y].insert(picture[y].begin(), '*');
    }
    
    //Create string for top and bottom border
    string asterisk;
    for(int x = 0; x < (picture[0].size()); x++)
        asterisk += "*";
    
    //Push the borders
    picture.push_back(asterisk);
    picture.insert(picture.begin(), asterisk);
    return picture;
}

//Position: 510
