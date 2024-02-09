#include <iostream>

int main() {
    int quantity, number, count;
    long long int temp;
    std::cin>>quantity;
    for(int i=0;i<quantity;i++){
        temp = 1;
        count = 0;
        std::cin>>number;
        for(int j=1;j<=number;j++){
            temp *= j;
            bool enterToCounter = true;
            while(temp>=10){
                if(temp % 10 == 0 && enterToCounter == true){
                    count++;
                } else {
                    enterToCounter = false;
                }
                temp = temp / 10;
            }
        }
        std::cout<<temp;
    }
    return 0;
}
