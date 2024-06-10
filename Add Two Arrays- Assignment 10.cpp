//Add Two Arrays
#include<iostream>
using namespace std;
int main()
{
    int arr1[50], arr2[50], size1, size2, i, k, merge[100];
    cout << "Enter Array 1 Size: ";
    cin >> size1;
    cout << "Enter Array 2 Size: ";
    cin >> size2;
    cout << "Enter Array 1 Elements: ";
    for(i=0; i<size1; i++)
    {
        cin >> arr1[i];
        merge[i] = arr1[i];
    }
    k = i;
    cout << "Enter Array 2 Elements: ";
    for(i=0; i<size2; i++)
    {
        cin >> arr2[i];
        merge[k] = arr2[i];
        k++;
    }
    cout << "\nThe new array after merging is" << endl;
    for(i=0; i<k; i++)
        printf("%d ", merge[i]);

    return 0;
}
