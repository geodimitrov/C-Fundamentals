#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int listNums[N] = {};

    for (int i = 0; i < N; i++){
        int Num;
        cin >> Num;
        listNums[i] = Num;
    }


    for (int i = N - 1; i >= 0; i--){
        cout << listNums[i] << " ";
    }

    return 0;
}
