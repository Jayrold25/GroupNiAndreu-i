#include <iostream> 
using namespace std; 
int N[5],sum; 
int add(int sum){ 
return N[1]+N[2]+N[3]+N[4]+N[5]; 
}
float Avg(){ 
return add(sum/5); 
}
int main() { 
for (int i = 0; i < 5; i++) { 
cout << "Enter a Number " ; cin >> N[i]; 
}
for(int i = 1;i < 5; ++i) { 
if(N[0] < N[i]) 
N[0] = N[i]; 
} 
cout << "total" << add(sum) << endl; 
cout << "Average" << Avg() << endl; 
cout << endl << "Largest Number = " << N[0]; 
return 0;
}