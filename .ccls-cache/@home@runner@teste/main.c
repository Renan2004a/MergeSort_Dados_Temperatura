// Estrutura de Dados - Renan A. Tavares - 202225014
// MergeSort - Dados de Temperatura em Intervalos

#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int* L = (int*)malloc(n1 * sizeof(int));
    int* R = (int*)malloc(n2 * sizeof(int));

    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    i = 0;
    j = 0;
    k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

    free(L);
    free(R);
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void groupAndSortTemperatures(int temperatures[], int size, int interval) {
    int maxTemp = temperatures[0], minTemp = temperatures[0];

    for (int i = 1; i < size; i++) {
        if (temperatures[i] > maxTemp) maxTemp = temperatures[i];
        if (temperatures[i] < minTemp) minTemp = temperatures[i];
    }

    int groupCount = (maxTemp - minTemp) / interval + 1;
    int** groups = (int**)malloc(groupCount * sizeof(int*));
    int* groupSizes = (int*)malloc(groupCount * sizeof(int));

    for (int i = 0; i < groupCount; i++) {
        groups[i] = (int*)malloc(size * sizeof(int));
        groupSizes[i] = 0;
    }

    for (int i = 0; i < size; i++) {
        int groupIndex = (temperatures[i] - minTemp) / interval;
        groups[groupIndex][groupSizes[groupIndex]++] = temperatures[i];
    }

    printf("Temperaturas antes da ordenação:\n");
    printArray(temperatures, size);

    printf("\nTemperaturas em intervalos de %d°C:\n", interval);

    for (int i = 0; i < groupCount; i++) {
        if (groupSizes[i] > 0) {
            printf("Intervalo %d°C - %d°C: ", minTemp + i * interval, minTemp + (i + 1) * interval - 1);
            mergeSort(groups[i], 0, groupSizes[i] - 1);
            printArray(groups[i], groupSizes[i]);
        }
    }

    for (int i = 0; i < groupCount; i++) {
        free(groups[i]);
    }
    free(groups);
    free(groupSizes);
}

int main() {
    int temperaturas[] = {60, 28, 15, 30, 150, 24, 25, 18, 29, 10, 11, 0, 40};
    int interval = 10;
    int size = sizeof(temperaturas) / sizeof(temperaturas[0]);

    groupAndSortTemperatures(temperaturas, size, interval);
    return 0;
}