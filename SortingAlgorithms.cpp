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

void merge(int* arrayA, int sizeA, int* arrayB, int sizeB, int* arrayC){
    int i = 0;
    int j = 0;
    int k = 0;

    while (i<sizeA and j<sizeB){
        if (arrayA[i] >= arrayB[j]){
            arrayC[k++] = arrayA[i++];
        
        }
        else{
            arrayC[k++] = arrayB[j++];
        }
        
        while(i<sizeA){
            arrayC[k++] = arrayA[i++];
        }

        while(i<sizeB){
            arrayC[k++] = arrayB[i++];
        }
    }
}

void mergeSort(int* array, int size){
    if (size>1){
        int *arrayA = new int[size/2];
        for (int i = 0; i<size/2; i++){
            arrayA[i] = array[i];
        }
        int *arrayB = new int[size - (size/2)];
        for (int j = size/2; j<(size-size/2); j++){
            arrayB[j] = array[j];
        }   
        mergeSort(arrayA, size/2);
        mergeSort(arrayB, (size-size/2));
        merge(arrayA, size/2, arrayB, (size-size/2), array);
        delete[] arrayA;
        delete[] arrayB;
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