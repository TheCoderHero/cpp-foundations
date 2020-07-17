// Given a divisor and a bound, find the largest integer N such that:
// N is divisible by divisor.
// N is less than or equal to bound.
// N is greater than 0.
// It is guaranteed that such a number exists.

int maxMultiple(int divisor, int bound) {
    int largestMultiple = 0;
    for(int x = 2; x <= bound; x++){
        int exponentNumber = divisor * x;
        if(exponentNumber <= bound)
            largestMultiple = exponentNumber;
    }
    return largestMultiple;
}

// Position: 5717
