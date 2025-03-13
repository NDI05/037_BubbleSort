#include <iostream>
using namespace std;

int arr[20];
int n;

void inputArrayData(){
    while(true){
        cout << "Masukkan Banyka element pada array: ";
        cin >> n;
        if (n <= 20)
            break;
        else
            cout << "Array tidak boleh lebih dari 20" << endl;
    }
    cout << endl;
    cout << "=====================" << endl;
    cout << "Masukkan Array Element Array" << endl;
    cout << "=====================" << endl;

    for (int i = 0; i < n; i++){
        cout << "Array [" << i << "] = ";
        cin >> arr[i];
    }
};

void bubbleSort(){
    int pass = 1;
    do{
        for (int j = 0; j <= n - 1 - pass; j++){
            if(arr[j] > arr[j +1 ]){
                int tempt;
                tempt = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tempt;
            }
        }
        pass++;
    }
    while(pass <= n - 1);
};

void display(){
    cout << "Array setelah diurutkan" << endl;
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
        if (i < n - 1)
            cout << " --> ";
    }
    cout << endl;

};

int main(){

};