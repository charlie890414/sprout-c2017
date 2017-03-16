#include<iostream>
using namespace std;
int main(){
    int x,y,i,j;
    scanf("%d %d",&x,&y);
    while(scanf("%d %d",&i,&j)){
        if(i==0&&j==0)break;
        x+=i;y+=j;
    }
    printf("%d %d\n",x,y);
}
