#include <iostream>
using namespace std;
int main() {
    double pricePerApple = 0.8; 
    int applesFirstDay = 2; 
    int totalApples = 0; 
    double totalCost = 0; 
    int day = 1;
    int applesToday;
    do {
        applesToday = applesFirstDay * (int)pow(2, day - 1);  
        totalApples += applesToday; 
        totalCost += applesToday * pricePerApple; 
        day++; 
    } while (applesToday <= 100); 
    double averageCostPerDay = totalCost / (day - 1); 
    cout << "�ܹ������ƻ������" << totalApples << endl;
    cout << "�ܻ��ѣ�" << totalCost << "Ԫ" << endl;
    cout << "ƽ��ÿ�컨�ѣ�" << averageCostPerDay << "Ԫ" << endl;

    return 0;
}