#include <iostream>
using namespace std;

int main()
{
    /**********************************************************************
     *                          PAIR IN C++
     *
     * A pair is a container provided by the STL (Standard Template Library)
     * that stores exactly TWO values together.
     *
     * Syntax:
     *      pair<dataType1, dataType2> variableName;
     *
     * The two values can be:
     *      - Same data type
     *      - Different data types
     *
     * Members:
     *      first   -> stores the first value
     *      second  -> stores the second value
     *********************************************************************/

    // Pair storing two integers
    pair<int, int> p = {3, 4};

    cout << p.first << " " << p.second << endl;

    // Output:
    // 3 4

    /**********************************************************************
     *                  NESTED PAIRS
     *
     * A pair can also store another pair as one of its elements.
     *
     * This allows us to store more than two values.
     *
     * Structure:
     *
     *      pair<
     *          int,
     *          pair<int, int>
     *      >
     *
     *      ------------------------
     *      | 2 | (4 , 3) |
     *      ------------------------
     *
     *********************************************************************/

    pair<int, pair<int, int>> p1 = {2, {4, 3}};

    cout << p1.first << " ";
    cout << p1.second.first << " ";
    cout << p1.second.second << endl;

    // Output:
    // 2 4 3

    /**********************************************************************
     *                  ARRAY OF PAIRS
     *
     * Just like arrays of integers or strings, we can also create
     * arrays whose elements are pairs.
     *
     * Each element of the array stores exactly one pair.
     *
     *              arr
     *
     *      Index      Pair
     *      ------------------
     *       0       (3,4)
     *       1       (2,3)
     *       2       (7,6)
     *
     *********************************************************************/

    pair<int, int> arr[] = {
        {3, 4},
        {2, 3},
        {7, 6}};

    /**********************************************************************
     * Accessing an Array of Pairs
     *
     * Step 1:
     *      arr[i]
     *      -> Gives the pair stored at index i.
     *
     * Step 2:
     *      arr[i].first
     *      -> First value of that pair.
     *
     * Step 3:
     *      arr[i].second
     *      -> Second value of that pair.
     *********************************************************************/

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i].first << " " << arr[i].second << endl;
    }

    /*
        Output:

        3 4
        2 3
        7 6
    */

    return 0;
}