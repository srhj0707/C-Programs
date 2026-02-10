#include<stdio.h>
int main(){
    int n;
    printf("Enter size(>1):");
    scanf("%d",&n);
    if(n<2){
        printf("Enter valid size!");
        return 0;
    }
    printf("Enter input: ");
    int nums[n];
    for(int i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }
    int target;
    printf("Enter target: ");
    scanf("%d",&target);
    int a,b;
    for(int x=0;x<n;x++){
        for(int y=x+1;y<n;y++){
            if(nums[x]+nums[y]==target){
                a=x;
                b=y;
                break;
            }
        }
    }
    printf("Output: [ %d , %d ]",a,b);
}