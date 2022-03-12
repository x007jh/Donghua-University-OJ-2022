#include <iostream>
using namespace std;

int main(){
    int AH, AM, AS, BH, BM, BS;
    cin >> AH >> AM >> AS >> BH >> BM >> BS;

    AH += BH;
    AM += BM;
    AS += BS;

    if (AS > 59){
        AS -= 60;
        AM += 1;
    }

    if (AM > 59){
        AM -= 60;
        AH += 1;
    }

    cout << AH << " " << AM << " " << AS;
    return 0;
}