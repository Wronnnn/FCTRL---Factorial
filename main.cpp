#include <iostream>

int main() {
    int quantity, count;
    long long int temp;
    std::cin>>quantity;
    int arr[quantity];
    for(int i=0;i<quantity;i++){
        std::cin>>arr[i];
    }
    for(int i=0;i<quantity;i++){
        temp = 1;
        count = 0;
        for(int j=1;j<=arr[i];j++){
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
        arr[i]=count;
    }
    for(int i=0;i<quantity;i++){
        std::cout<<arr[i]<<std::endl;
    }
    return 0;
}
