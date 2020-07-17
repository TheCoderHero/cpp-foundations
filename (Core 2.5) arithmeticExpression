// Consider an arithmetic expression of the form a # b = c. 
// Check whether it is possible to replace # with one of the four signs: +, -, * or / to obtain a correct expression.

bool arithmeticExpression(int a, int b, int c) {
    if(a + b == c)
        return true;
    else if (a - b == c)
        return true;
    else if (a * b == c)
        return true;
    else if (a % b == 0 && a / b == c)
        return true;
    else
        return false;
}

// Position: 3632

// Short Answer
bool arithmeticExpression(int A, int B, int C) {
    return A + B == C || A - B == C || A * B == C || B * C == A;
}
