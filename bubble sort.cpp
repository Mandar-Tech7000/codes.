#include <iostream>
using namespace std;

void bubble_sort(float percentage[], int n) 
{
    float temp;
    for (int i = 0; i < n - 1; i++) 
    {
        int comparisons = 0; 
        for (int j = 0; j < n - 1 - i; j++) 
        {
            comparisons++;
            if (percentage[j] > percentage[j + 1]) 
            {
                temp = percentage[j];
                percentage[j] = percentage[j + 1];
                percentage[j + 1] = temp;
            }
        }
        
        cout << "pass no. = " << i + 1 << endl;
        cout << "no. of comparison = " << comparisons << endl;
    }
}

int main() {
    int n;

    cout << "Enter number of students in first year: ";
    cin >> n;

    float percentage[n];  

    for (int i = 0; i < n; i++) {
        cout << "Enter percentage for student " << i + 1 << ": ";
        cin >> percentage[i];
    }

    bubble_sort(percentage, n);

    cout << "\nPercentages in ascending order:\n";
    for (int i = 0; i < n; i++) {
        cout << percentage[i] << " ";
    }

    return 0;
}

