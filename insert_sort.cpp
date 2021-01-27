#include <iostream>
#include <vector>
using std::vector;

void swap(int* a, int* b) {
    // std::cout << *a << "," << *b << std::endl;
    int temp = *a;
    *a = *b;
    *b = temp;
}

void insertionSort(vector<int>& A) {
    for(int i = 0; i < A.size(); i++) {
        int j = i;
        
        while (j>0 && A[j]<A[j-1]) {
            swap(&A[j], &A[j-1]);
            j--;
        }
        
    }
};

int main() {
    vector<int> vec;
    vec.push_back(5);
    vec.push_back(3);
    vec.push_back(2);
    vec.push_back(4);
    vec.push_back(1);

    insertionSort(vec);
    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i];
    }
}