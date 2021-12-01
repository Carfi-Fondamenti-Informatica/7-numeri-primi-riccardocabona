#include "lib.h"
bool primo(int &n,int i){
    if(n==i){
        return true;
    }
    else if(n%i==0 or n==1){
        return false;
    }
    else{
        return primo(n,i+1);
    }
}
