// Using the bike's timer, calculate the current time. 
// Return an answer as the sum of digits that the digital timer in the format hh:mm would show.

int lateRide(int n) {
    if(n == 0)
        return 0;
    else if(n < 60){
        int onesPlace = n % 10;
        int tensPlace = n / 10;
        return (onesPlace + tensPlace);
    }
    else if(n % 60 == 0)
        return (n / 60);
    else{
        int hours = n / 60;
        int minutes = n % 60;
        int hOnesPlace = hours % 10;
        int hTensPlace = hours / 10;
        int mOnesPlace = minutes % 10;
        int mTensPlace = minutes / 10;
        return (hOnesPlace + hTensPlace + mOnesPlace + mTensPlace);
    }
}

// Position: 4990

// Short Answer

int lateRide(int n) {
    int h = n / 60;
    int m = n % 60;
    return h % 10 + h / 10 + m % 10 + m / 10;
}
