Given the string, check if it is a palindrome.

bool checkPalindrome(std::string inputString) {
    
    //Create a variable to hold the size of the string
    int counter = inputString.size();
    
    //Loop through the entire string stopping in the middle
    for(int x = 0; x <= counter; x++){
        
        //Check if each starting element matches the ending element
        if(inputString[x] != inputString[counter - 1])
            
            //If it doesn't, return false
            return false;
        
        //Decrement the ending element
        counter--;
    }
    
    //Position: 2399
