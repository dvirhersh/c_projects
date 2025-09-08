int FlipDigits(int n)
{
    int flipped_number = 0;

    while (0 != n)
    {
        int digit = n % 10;
        flipped_number = flipped_number * 10 + digit;
        n /= 10;
    }
    return flipped_number;
}
