#include<iostream>
using namespace std ;
 int main(){
    int x ;
    cin >> x ;

    bool p1 = (x % 2 ==0);
    bool p2 = (x > 4 && x <= 12);
    bool a_like = (p1 && p2);
    bool uim_like = (p1 || p2);
    bool b_like = (p1 != p2);
    bool zheng_like = (!p1 && !p2);
    cout << a_like <<" " << uim_like << " "<< b_like <<" "<<zheng_like;
    return 0;
    
 }