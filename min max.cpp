#include <iostream>
using namespace std;
void getExtremes(float& min, float& max, float a[], int n) {
    min = a[0];
    max = a[0];
    for(int i = 1; i < n; i++) {
        if(a[i] < min) min = a[i];
        if(a[i] > max) max = a[i];
    }
}
int main() {
    float arr[] = {12.5, 3.1, 45.0, 7.8, 20.2};
    float min, max;
    getExtremes(min, max, arr, 5);
    cout << "Min: " << min << " Max: " << max;
    return 0;
}
