// Consider integer numbers from 0 to n - 1 written down along the circle in such a way that the distance between any two neighbouring 
// numbers is equal (note that 0 and n - 1 are neighbouring, too).
// Given n and firstNumber, find the number which is written in the radially opposite position to firstNumber.

int circleOfNumbers(int n, int firstNumber) {
    int halfWayPoint = n / 2;
    int oppositePosition;
    if(firstNumber == halfWayPoint){
        return 0;
    }
    else if(firstNumber < halfWayPoint){
        oppositePosition = n + (firstNumber - halfWayPoint);
    }
    else{
        oppositePosition = firstNumber - halfWayPoint;
    }
    return oppositePosition;
}

// Position: 5396

// Better short answer

int circleOfNumbers(int n, int firstNumber) {
    return (firstNumber + n / 2) % n;
}
