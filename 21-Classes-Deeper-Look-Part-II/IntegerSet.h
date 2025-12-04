#ifndef INTEGERSET_H
#define INTEGERSET_H
#define SET_SIZE 100

#include <iostream>
using std::cout;
using std::endl;

class IntegerSet
{
public:
    IntegerSet()
    {
        emptySet();
    }

    IntegerSet(const int arr[], int arrSize)
    {
        emptySet();

        for (int i = 0; i < arrSize; i++)
        {
            insertElement(arr[i]);
        }
    }

    IntegerSet unionOfSets(const IntegerSet &set2)
    {
        IntegerSet unionSet;

        for (int i = 0; i < SET_SIZE; i++)
        {
            if (this->arr[i] == 1 || set2.arr[i] == 1)
                unionSet.arr[i] = 1;
        }

        return unionSet;
    }

    IntegerSet intersectionOfSets(const IntegerSet &set2)
    {
        IntegerSet intersectionSet;

        for (int i = 0; i < SET_SIZE; i++)
        {
            if (this->arr[i] == 1 && set2.arr[i] == 1)
                intersectionSet.arr[i] = 1;
        }

        return intersectionSet;
    }

    bool isEqualTo(const IntegerSet &set2)
    {
        for (int i = 0; i < SET_SIZE; i++)
        {
            if (arr[i] != set2.arr[i])
                return false;
        }

        return true;
    }

    void insertElement(int k)
    {
        arr[k] = 1;
    }

    void deleteElement(int m)
    {
        arr[m] = 0;
    }

    void printSet()
    {
        if (isEmpty())
            cout << "---" << endl;
        else
        {
            cout << "{ ";
            for (int i = 0; i < SET_SIZE; i++)
            {
                if (arr[i] == 1)
                    cout << i << " ";
            }

            cout << "}" << endl;
        }
    }

    bool isEmpty()
    {
        int count = 0;

        for (int i = 0; i < SET_SIZE; i++)
        {
            if (arr[i] == 1)
                count++;
        }

        return count == 0;
    }

private:
    int arr[SET_SIZE];

    void emptySet()
    {
        for (int i = 0; i < SET_SIZE; i++)
        {
            arr[i] = 0;
        }
    }
};

#endif