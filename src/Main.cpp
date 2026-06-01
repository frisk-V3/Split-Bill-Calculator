#include <iostream>
using namespace std;

int main() {
    int total_bill = 0;
    int people_count = 0;
    int money_paid = 0;

    cout << "=== 割り勘＆お釣り計算ツール ===" << endl;

    cout << "会計の総額はいくらですか？ (円): ";
    cin >> total_bill;

    cout << "何人で分けますか？ (人): ";
    cin >> people_count;

    cout << "いくら支払いますか？ (円): ";
    cin >> money_paid;

    cout << "--------------------------------" << endl;

    int per_person = (total_bill + people_count - 1) / people_count;
    int change = money_paid - total_bill;

    cout << "一人あたりの支払額: " << per_person << " 円" << endl;
    cout << "お店からのお釣り: " << change << " 円" << endl;

    int collected_total = per_person * people_count;
    int surplus = collected_total - total_bill;
    
    if (surplus > 0) {
        cout << "※端数の余りが " << surplus << " 円あります" << endl;
    }

    
    cin.ignore(); 
    cout << "\n何かキーを押すと終了します...";
    cin.get(); 

    return 0;
}
