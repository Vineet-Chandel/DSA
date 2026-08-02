#include <iostream>
using namespace std;
int main()
{
    // ===============================
    // CIN // COUT OF ARRAYSS !!
    // ===============================
    int my_arr1[10];
    int siz_arr = sizeof(my_arr1) / sizeof(int);

    cout << "Enter 10 numbers:\n";
    for (int j = 0; j < siz_arr; j++)
    {
        cin >> my_arr1[j];
    }

    cout << "Array elements are: ";
    for (int k = 0; k < siz_arr; k++)
    {
        cout << my_arr1[k] << " ";
    }

    // ===============================
    // FIND THE LARGEST IN ARRAYS
    // ===============================

    int arr[] = {5, 4, 3, 9, 2};
    int r_size = sizeof(arr) / sizeof(int);
    int max_num = INT_MIN;
    for (int i = 0; i <= r_size; i++)
    {
        if (max_num < arr[i])
        {
            max_num = arr[i];
        }
        else
        {
            continue;
        }
    }
    cout << "largest number in the array : " << max_num << endl;

    // ===============================
    // linear search !!
    // ===============================

    int linARR[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int lin_size = sizeof(linARR) / sizeof(int);
    cout << "Our Database : ";
    cout << "[";
    for (int i = 0; i < lin_size; i++)
    {
        cout << linARR[i] << ",";
    }
    cout << "]" << endl;

    int myTarget;
    cout << "Please enter your no. to find the number in my database :";
    cin >> myTarget;
    bool target_achived = 0;
    for (int i = 0; i < lin_size; i++)
    {
        if (myTarget == linARR[i])
        {
            cout << "Your target achivred that is : " << myTarget << " at the data base index of : " << i << endl;
            target_achived = 1;
        }
        else
        {
            continue;
        }
    }

    if (target_achived == 1)
    {
        cout << " ~ code ended" << endl;
    }
    else
    {
        cout << "your target doesn't achieved thank you!!!" << endl;
    }

    // ===============================
    // reversing an array !!
    // ===============================

    int revARR[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int rev_size = sizeof(revARR) / sizeof(int);

    cout << "Reversing this array : [";
    for (int i = 0; i < lin_size; i++)
    {
        cout << linARR[i] << ",";
    }
    cout << "]" << endl;
    cout << "Reversed array is : ";
    cout << "[";
    for (int i = rev_size - 1; i >= 0; i--)
    {
        cout << revARR[i] << ",";
    }
    cout << "]" << endl;

    // ===============================
    // Binary Search!!
    // ===============================

    int binARR[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int bin_size = sizeof(binARR) / sizeof(int);

    cout << "Binary searching in this array : [";
    for (int i = 0; i < bin_size; i++)
    {
        cout << binARR[i] << ",";
    }
    cout << "]" << endl;
    int start_term = 0;
    int end_term = bin_size - 1;
    int mid_term = (start_term + end_term) / 2;
    int bin_target;
    cout << "Please enter your no. to find the number (binary search):";
    cin >> bin_target;
    bool target_achieved = 0;

    for (int i = 0; i < bin_size; i++)
    {

        if (bin_target == binARR[mid_term])
        {
            cout << "Your target achived at the index : " << mid_term << endl;
            target_achieved = 1;
            break;
        }
        else if (binARR[mid_term] > bin_target)
        {
            end_term = mid_term - 1;
            mid_term = (start_term + end_term) / 2;
        }
        else if (binARR[mid_term] < bin_target)
        {
            start_term = mid_term + 1;
            mid_term = (start_term + end_term) / 2;
        }
    }

    if (target_achieved == 0)
    {
        cout << "Target doesnt achieved!!" << endl;
    }

    return 0;
}