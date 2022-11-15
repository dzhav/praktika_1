#include <iostream>
#include <vector>

using namespace std;

int main(){
int n = 3;
vector <int> a;
a[0] = 12;
a[1] = 12;
a[2] = 23;
int b = -1;

for (int i = 0; i < n; i++){
	b = std::max(b, a[i]);
}

cout<<b;

}
