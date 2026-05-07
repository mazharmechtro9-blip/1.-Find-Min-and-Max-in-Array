#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int a[] = {1, 2, 2, 3, 4}, n = 5;
    float sum = 0;
    for(int i=0; i<n; i++) sum += a[i];
    cout << "Mean: " << sum/n << endl;
    sort(a, a+n);
    cout << "Median: " << a[n/2] << endl;
    int mode = a[0], maxCount = 0;
    for(int i=0; i<n; i++) {
        int count = 0;
        for(int j=0; j<n; j++) if(a[j] == a[i]) count++;
        if(count > maxCount) { maxCount = count; mode = a[i]; }
    }
    cout << "Mode: " << mode;
    return 0;
}
