// You have s cents on your account before the call. What is the duration of the longest call 
// (in minutes rounded down to the nearest integer) you can have?

int phoneCall(int min1, int min2_10, int min11, int s) {
    int totalCounter = s;
    int minutesTotal = 0;
    if((s - min1) == 0){
        minutesTotal++;
        return minutesTotal;
    }
    else if((s - min1) > 0){
        minutesTotal++;
        totalCounter -= min1;
    }
    int twoTen = min2_10 * 9;
    if((totalCounter - twoTen) == 0){
        minutesTotal += 9;
        return minutesTotal;
    }
    else if((totalCounter - twoTen) > 0){
        minutesTotal += 9;
        totalCounter -= twoTen;
    }
    else if((totalCounter - twoTen) < 0){
        for(int x = 0; x < 9; x++){
            if((totalCounter - min2_10) > 0){
                minutesTotal++;
                totalCounter -= min2_10;
            }
            else
                return minutesTotal;
        }
    }
    int remainingMinutes = totalCounter / min11;
    return (minutesTotal + remainingMinutes);
}

// Position: 4421

// Short Answer
int phoneCall(int min1, int min2_10, int min11, int S) {
    if (S < min1)
        return 0;
    if (S < min1 + 9 * min2_10)
        return 1 + (S - min1) / min2_10;
    return 10 + (S - min1 - 9 * min2_10) / min11;
}
