template <class T>
T min(T value1, T value2)
{
    T minValue = value1;

    if (value2 < value1)
        minValue = value2;

    return minValue;
}