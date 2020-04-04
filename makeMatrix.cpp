#include <bits/stdc++.h>

int main (){
    std::random_device randSeed;
    std::mt19937_64 mt(randSeed());
    std::uniform_int_distribution<int> intRand(0,99);
    int size=100;
    std::cout << size << " " << size << std::endl;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            int tmpRand = intRand(mt);
            printf("%3d",tmpRand);
        }
        std::cout <<"\n";
    }
    std::cout << size << " " << size << std::endl;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            int tmpRand = intRand(mt);
            printf("%3d",tmpRand);
        }
        std::cout <<"\n";
    }
}
