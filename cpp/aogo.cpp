#include <iostream>
#include <vector>
using namespace std;

void extend_geometric(const vector<int>& sequence){
    int ratio = sequence[1] / sequence[0];
    vector<int> extended = sequence;
    extended.push_back(sequence.back() * ratio);
    for(int num : extended)
        cout << num << " ";
    cout << endl;
}

void extend_arithmetic(const vector<int>& sequence){
    int diff = sequence[1] - sequence[0];
    vector<int> extended = sequence;
    extended.push_back(sequence.back() + diff);
    for(int num : extended)
        cout << num << " ";
    cout << endl;
}

int main(){
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int size;
        cin >> size;
        vector<int> sequence(size);
        for (int j = 0; j < size; ++j)
            cin >> sequence[j];
        
        extend_geometric(sequence);
        extend_arithmetic(sequence);
    }

    return 0;
}