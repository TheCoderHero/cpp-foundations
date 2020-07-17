// You're given three integers, a, b and c. It is guaranteed that two of these integers are equal to each other. 
// What is the value of the third integer?

int extraNumber(int a, int b, int c) {
    if(b == c)
        return a;
    if(a == c)
        return b;
    if(a == b)
        return c;
}

// Position: 3841
