int same_case(char a, char b)
{
    if (isalpha(a) && isalpha(b)) {
        if (islower(a) && islower(b) || isupper(a) && isupper(b)) {
            return 1;
        }
        else {
            return 0;
        }
    }
    else {
        return -1;
    }
    return 0;
}