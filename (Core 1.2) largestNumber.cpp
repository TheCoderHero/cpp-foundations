// Given an integer n, return the largest number that contains exactly n digits.

int largestNumber(int n) {
    int exponent = std::pow(10, n);
    exponent -= 1;
    return exponent;
}

// Position: 6841
