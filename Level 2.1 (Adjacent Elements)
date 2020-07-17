//Given an array of integers, find the pair of adjacent elements
//that has the largest product and return that product.

int adjacentElementsProduct(std::vector<int> inputArray) {
    
    //SET product to high negative number
    int product = -1000;
    
    //FOR elements in the array
    for(int x = 0; x < (inputArray.size() - 1); x++)
        
        //IF product is less than (product of adjacent elements)
        if(product < (inputArray[x] * inputArray[x + 1]))
            
            //SET product equal to (product of adjacent elements)
            product = (inputArray[x] * inputArray[x + 1]);
    
    //RETURN the value of product
    return product;
}

//Position: 1879
