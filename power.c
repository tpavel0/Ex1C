#include "myMath.h"

 double Exp (int x){ 
    
    double e=2.7182, answer=2.7182;
    while (x>1){
        answer=answer *e;
        x--;
    }
    return answer;
}

 double Pow (double x , int y){
    
    double answer=x;
    while(y>1){
        answer=answer*x;
        y--;
    }
    return answer;

}
