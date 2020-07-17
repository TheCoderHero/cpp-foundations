//Given two strings, find the number of common characters between them.

int commonCharacterCount(std::string s1, std::string s2) {
    int commonChar = 0;
    for(int x = 0; x < s2.size(); x++)
        for(int y = 0; y < s1.size(); y++)
            if(s2[x] == s1[y])
            {
                commonChar++;
                s1[y] = '0';
                break;
            }
    return commonChar;
}

//Position: 817
