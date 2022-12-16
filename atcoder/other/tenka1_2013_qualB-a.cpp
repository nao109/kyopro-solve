#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  vector<string> s{
    "ABGGEGBCFEBFBAF",
    "FFGFACCCECDGCDGAFFFACGDA",
    "EEDCAEAFBDDEEDGGA",
    "GDCAGFFAACBGEDBAFBCDECGAE",
    "EDB",
    "GADGADEDBCGABDDCBBDBEAD",
    "GADBB",
    "DFCE",
    "BFGCGCBEDC",
    "EDGADBGGDDFEEGGFDGCAFBFGFAAD",
    "DDAEBGACDFDGDAB",
    "EEDCECFFAE",
    "ADDBEEABFEAB",
    "FEEBFDGAADAE",
    "GB"
  };
  sort(all(s));
  cout << s[6] << endl;
  return 0;
}