// reveresing an array
/*
#include <iostream>
#include <vector>

using namespace std;
vector<int> reverse(vector<int> v)
{
    int s = 0;
    int e = v.size() - 1;
    while (s <= e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v;
}
void print(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v;
    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);

    vector<int> ans = reverse(v);
    cout << "Reversed array: ";
    print(ans);
}*/

// merge two sorted arrays
#include <iostream>
#include <vector>

using namespace std;
void merge(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }
    // copy first array ke elements
    while (i < n)
    {
        arr3[k++] = arr1[i++];
    }
    // copy second array ke remaining elements
    while (j < m)
    {
        arr3[k++] = arr2[j++];
    }
}
void print( int ans[] , int n ){
        for(int i = 0; i < n; i++){
            cout << ans[i] << " ";
        }
        cout<<endl;
}

int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {6, 7, 8, 9, 10};
    int arr3[8] = {0};

    merge(arr1, 5, arr2, 3, arr3);

    print(arr3, 8);
    return 0;
}