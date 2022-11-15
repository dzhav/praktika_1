#include <iostream>
#include <vector>

using namespace std;

int main(){
int n;
cin >> n;
vector <int> a(n);
for (int i = 0; i < n; i++) cin >> a[i];
int b = 1000000000;

for (int i = 0; i < n; i++){
	b = std::min(b, a[i]);
}

cout<<b;

}
