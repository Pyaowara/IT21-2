#include <stdio.h>

double getValue(){
    double value;
    scanf("%lf", &value);
    return value;
}

double findMin(double array[], int size){
    int i = 0;
    double lowest = array[i];
    while (++i < size)
        if (array[i] < lowest)
            lowest = array[i];
    return lowest;
}

double findMax(double array[], int size){
    int i = 0;
    double highest = array[i];
    while (++i < size)
        if (array[i] > highest)
            highest = array[i];
    return highest;
}

double findAvg(double array[], int size){
    int i = 0;
    double all = 0;
    while (i < size)
        all = all + array[i++];
    return all / size;
}

int main(){
    int n;
    scanf ("%d", &n);
    double array[n] ;
    for (int i=0; i<n; ++i)
        array[i] = getValue();
    double min, max, avg;
    min = findMin(array, n);
    max = findMax(array, n);
    avg = findAvg(array, n);
    
    printf("%d Values\n", n);
    printf("Min: %.3f\n", min);
    printf("Max: %.3f\n", max);
    printf("Avg: %.3f", avg);
}