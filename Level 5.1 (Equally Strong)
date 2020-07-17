//Call two arms equally strong if the heaviest weights they each are able to lift are equal.

//Call two people equally strong if their strongest arms are equally strong (the strongest arm can be 
//both the right and the left), and so are their weakest arms.

//Given your and your friend's arms' lifting capabilities find out if you two are equally strong.

bool areEquallyStrong(int yourLeft, int yourRight, int friendsLeft, int friendsRight) {
    //Add up our individual weights
    int myWeight = (yourLeft + yourRight);
    int theirWeight = (friendsLeft + friendsRight);
    
    //Store our weights in an array
    int weights[4] = {yourLeft, yourRight, friendsLeft, friendsRight};
    
    //Sort the array
    sort(weights, weights + 4);
    
    //How many weight differences are there?
    int n = 0;
    for(int x = 0; x < 4; x++)
        if(weights[x] < weights[x+1])
            n++;
    
    if(n > 1)
        return false;
    else if( myWeight != theirWeight)
        return false;
    else
        return true;
}

//Position: 463
