#include <iostream>
#include <vector>

using namespace std;

int main(){
int n;
cin >> n;
vector <int> a(n);
for (int i = 0; i < n; i++) cin >> a[i];
int b = -1;

for (int i = 0; i < n; i++){
	b = std::max(b, a[i]);
}

cout<<b;

}
