#include <bits/stdc++.h>
using namespace std;

// 以下に、24時間表記の時計構造体 Clock を定義する

struct Clock{
  int hour;
  int minute;
  int second;
  
  void set(int h, int m, int s){
    hour=h;
    minute=m;
    second=s;
  }

  string to_str(){
    string s;
    s+=(hour<10 ? "0" : "")+to_string(hour)+":";
    s+=(minute<10 ? "0" : "")+to_string(minute)+":";
    s+=(second<10 ? "0" : "")+to_string(second);
    return s;
  }

  void shift(int diff_second){
    int time=hour*3600+minute*60+second;
    time+=diff_second;
    if(time<0) time+=86400;
    else if(time>=86400) time-=86400;
    second=time%60;
    time/=60;
    minute=time%60;
    time/=60;
    hour=time;
  }
};

// -------------------
// ここから先は変更しない
// -------------------

int main() {
  // 入力を受け取る
  int hour, minute, second;
  cin >> hour >> minute >> second;
  int diff_second;
  cin >> diff_second;

  // Clock構造体のオブジェクトを宣言
  Clock clock;

  // set関数を呼び出して時刻を設定する
  clock.set(hour, minute, second);

  // 時刻を出力
  cout << clock.to_str() << endl;

  // 時計を進める(戻す)
  clock.shift(diff_second);

  // 変更後の時刻を出力
  cout << clock.to_str() << endl;
}
