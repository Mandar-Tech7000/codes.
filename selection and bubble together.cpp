#include <iostream>
using namespace std;

void bubble_sort(float percentage[], int n) 
{
    float temp;
    for (int i = 0; i < n - 1; i++) 
    {
        int swap = 0;
        int comparisons = 0;

        for (int j = 0; j < n - 1 - i; j++) 
        {
            comparisons++;
            if (percentage[j] > percentage[j + 1]) 
            {
                temp = percentage[j];
                percentage[j] = percentage[j + 1];
                percentage[j + 1] = temp;
                swap = 1;
            }
        }

        cout << "\n Pass " << i + 1 << ": Comparisons = " << comparisons << endl;
        cout << "Array: ";
        for (int k = 0; k < n; k++) 
        {
            cout << percentage[k] << " ";
        }
        cout << endl;

        if (swap == 0)
            break;
    }

    cout << "\nFinal result after Bubble Sort:\n";
    for (int i = 0; i < n; i++) 
    {
        cout << percentage[i] << " ";
    }
    cout << endl;
}

void selection_sort(float percentage[], int n) 
{
    for (int i = 0; i < n - 1; i++) 
    {
        int minIndex = i;
        int comparisons = 0;

        for (int j = i + 1; j < n; j++) 
        {
            comparisons++;
            if (percentage[j] < percentage[minIndex]) 
            {
                minIndex = j;
            }
        }

        if (minIndex != i) 
        {
            float temp = percentage[i];
            percentage[i] = percentage[minIndex];
            percentage[minIndex] = temp;
        }

        cout << "\nPass " << i + 1 << ": Comparisons = " << comparisons << endl;
        cout << "Array: ";
        for (int k = 0; k < n; k++) 
        {
            cout << percentage[k] << " ";
        }
        cout << endl;
    }

    cout << "\nFinal result after Selection Sort:\n";
    for (int i = 0; i < n; i++) 
    {
        cout << percentage[i] << " ";
    }
    cout << endl;
}

int main() 
{
    int n;
    cout << "Enter number of students in first year (for Bubble Sort): ";
    cin >> n;

    float bubbleArr[n];
    for (int i = 0; i < n; i++) 
    {
        cout << "Enter percentage for student " << i + 1 << ":";
        cin >> bubbleArr[i];
    }

    bubble_sort(bubbleArr, n);

    cout << "\nEnter number of students in first year (for Selection Sort): ";
    cin >> n;

    float selectionArr[n];
    for (int i = 0; i < n; i++) 
    {
        cout << "Enter percentage for student " << i + 1 <<":" ;
        cin >> selectionArr[i];
    }

    selection_sort(selectionArr, n);

    return 0;
}

