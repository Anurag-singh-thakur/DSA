//first and last occurence of the element in a sorted array
/*

int firstOcc(vector<int> &arr, int n, int key) {
  int s = 0, e = n - 1;
  int mid = s + (e - s) / 2;
  int ans = -1;
  while (s <= e) {
    if (arr[mid] == key) {
      ans = mid;
      e = mid - 1;

    } else if (key > arr[mid]) {
      s = mid + 1;

    } else if (key < arr[mid]) {
      e = mid - 1;
    }
    mid = s + (e - s) / 2;
  }
  return ans;
}
int lastOcc(vector<int> &arr, int n, int key) {
  int s = 0, e = n - 1;
  int mid = s + (e - s) / 2;
  int ans = -1;
  while (s <= e) {
    if (arr[mid] == key) {
      ans = mid;
      s = mid + 1;

    } else if (key > arr[mid]) {
      s = mid + 1;

    } else if (key < arr[mid]) {
      e = mid - 1;
    }
    mid = s + (e - s) / 2;
  }
  return ans;
}

pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k) {

  pair<int, int> p;
  p.first = firstOcc(arr, n, k);
  p.second = lastOcc(arr, n, k);
  return p;
}
*/

//peak index in a mountain array
/*
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int e= arr.size() -1 ;
        int  s= 0 ;
        int mid = s + (e-s)/2;

        while(s<e){
            if(arr[mid]< arr[mid +1]){
                s = mid+  1;
            }
            else{
                e= mid ;
            }
            mid = s+(e-s)/2;
        }
        return s; 
    }
};*/