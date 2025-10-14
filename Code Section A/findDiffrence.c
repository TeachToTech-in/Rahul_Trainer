char findTheDifference(char *s, char *t)
{
    char xor = '\0';
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        xor = xor ^ s[i] ^ t[i];
    }
    xor = xor ^ t[i];
    return xor;
}