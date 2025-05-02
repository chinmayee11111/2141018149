#include<sys/sysinfo.h>
#include<iostream>
#include<unistd.h>
using namespace std;

void displaymemory(){
                struct sysinfo info;
                
                if(sysinfo(&info) == 0){
                                 cout << "Total RAM: " << info.totalram/(1024 * 1024) << "MB\n";
                }
}
int main(){
            displaymemory();
            return 0;
}
