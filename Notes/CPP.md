# Notes for the cpp topic missed or unknow

1. Inline funtion.
> This function alllow to direactly continue without excutting what inside the and return the function.
```cpp
static int addNumber(int a , int b){
    return a +b;
}

int main(){
    int number = addNumber(4,5);
    return 0;
}
```