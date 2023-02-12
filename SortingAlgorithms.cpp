#include <iostream>

using namespace std;

int findMaxIndex(int *array, int n){
    int maxIndex = 0;
    for (int i = 0; i < n; i++){
        if (array[i] > array[maxIndex]){
            maxIndex = i;
        }
    }
    return maxIndex;
}
void selectionSort(int *array, int n){
    int temp;
    for (int i = n; i>1; i--){
        int maxIndex = findMaxIndex(array, i);
        temp = array[i-1];
        array[i-1] = array[maxIndex];
        array[maxIndex] = temp;
    }
}



int main(){
    int arr [] = {1,3,2,8,6,5,4,9,7,12,11};
    selectionSort(arr, 11);
    for (int i=0; i<11; i++){
        cout << arr[i];
    }
    cout << endl;
    return 0;
}