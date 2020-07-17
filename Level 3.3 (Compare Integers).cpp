//Ticket numbers usually consist of an even number of digits. A ticket number is considered lucky if 
//the sum of the first half of the digits is equal to the sum of the second half.

bool isLucky(int n) {
    //Convert int to string
    string number = to_string(n);
    
    //Counter Variables
    int firstHalf = 0, secondHalf = 0;
    
    //Count first half
    for (int x = 0; x < (number.size() / 2); x++)
        firstHalf += number[x] - '0';
    
    //Count Second Half
    for (int x = (number.size() - 1); x >= (number.size() / 2); x--)
        secondHalf += number[x] - '0';
    
    //Compare both sides
    return(firstHalf == secondHalf);
}

//Position: 775
