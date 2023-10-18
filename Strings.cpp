#include <iostream>
#include <string>
using namespace std;

int main() {
	string a,b;
    cin>>a>>b;
    
    int len1 = a.length();
    int len2 = b.length();
    
    cout<<len1<<" "<<len2<<"\n";
    cout<<a+b<<"\n";
    char ch1 = a[0];
    a[0]=b[0];
    b[0]=ch1;
    
    cout<<a<<" "<<b;
    return 0;
}

