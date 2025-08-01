#include <iostream>
using namespace std;

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

        
        float temp = percentage[i];
        percentage[i] = percentage[minIndex];
        percentage[minIndex] = temp;

        cout << "\nPass no. = " << i + 1 << endl;
        cout << "No. of comparisons = " << comparisons << endl;

        cout << "o/p " << i + 1 << ": ";
        for (int k = 0; k < n; k++) 
        {
            cout << percentage[k] << " ";
        }
        cout << endl;
    }
}

int main() 
{
    int n;

    cout << "Enter number of students in first year: ";
    cin >> n;

    float percentage[n];

    for (int i = 0; i < n; i++) 
    {
        cout << "Enter percentage for student " << i + 1 << ": ";
        cin >> percentage[i];
    }

    selection_sort(percentage, n);

    cout << "\nPercentages in ascending order:\n";
    for (int i = 0; i < n; i++) 
    {
        cout << percentage[i] << " ";
    }
    cout << endl;

    return 0;
}

