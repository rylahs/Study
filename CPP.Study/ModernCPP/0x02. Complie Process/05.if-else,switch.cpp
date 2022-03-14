int test(int a)
{
    if (a == 0)
        return a * 0;
    else if (a == 1)
        return a;
    else if (a == 3)
        return a / 4;
    else if (a == 4)
        return 5;
    return 0;
}

int test2(int a)
{
    switch (a)
    {
    case 0: return a * 0;
    case 1: return a;
    case 3: return a / 4;
    case 4: return 5;
    default: return 0;
    }
}