#include <iostream>
#include <vector>
using namespace std;

void swap(int &a, int&b) {
    int tmp = a;
    a = b;
    b = tmp;
}
void selectionSort(vector<int> &v) {
    
    for (int i=0; i<3; i++) {
        int max = -1;
        int maxIt = -1;
        
        for (int j=0; j<3-i; j++) {
            if (max < v[j]) {
                max = v[j];
                maxIt = j;
            }
        }
        
        swap(v[maxIt], v[3-1-i]);
    }
}

int main(void)
{
    
    vector<int> v;
    
    v.push_back(8);
    v.push_back(3);
    v.push_back(4);
    v.push_back(9);
    v.push_back(7);
    
    selectionSort(v);
    
    
    for (auto i : v)
        cout << i << " ";
    cout<<endl;
    
}
