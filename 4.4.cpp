#include <iostream>
#include <algorithm> // For std::sort

void merge(int list1[], int size1, int list2[], int size2, int list3[]) {
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2) {
        if (list1[i] < list2[j]) {
            list3[k++] = list1[i++];
        }
        else {
            list3[k++] = list2[j++];
        }
    }
    while (i < size1) {
        list3[k++] = list1[i++];
    }
    while (j < size2) {
        list3[k++] = list2[j++];
    }
}

int main() {
    int size1, size2;
    std::cout << "Enter list1: ";
    std::cin >> size1;
    int list1[80], list3[160]; // Assuming max size of 80 for each list
    for (int i = 0; i < size1; ++i) {
        std::cin >> list1[i];
    }

    std::cout << "Enter list2: ";
    std::cin >> size2;
    int list2[80];
    for (int i = 0; i < size2; ++i) {
        std::cin >> list2[i];
    }

    merge(list1, size1, list2, size2, list3);

    std::cout << "The merged list is: ";
    for (int i = 0; i < size1 + size2; ++i) {
        std::cout << list3[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}