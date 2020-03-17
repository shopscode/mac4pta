//
//  main.c
//  pta
//
//  Created by Aron on 2020/3/15.
//  Copyright © 2020 Aron. All rights reserved.
// 7-5 两个有序链表序列的交集 (20分)
//产生了溢出 极少的数据都不行，还是使用链表吧。

#include <stdio.h>



int main()
{

    int i,j,k,x,n,m;
    int a[10005],b[10005],c[10000];
    n=m=0;
    scanf("%d",&x);
    while(x!=-1){
        a[n++]=x;
        scanf("%d",&x);
    }
    
    scanf("%d",&x);
    while(x!=-1){
        b[m++]=x;
        scanf("%d",&x);
    }

    if (n==0&&m==0) {
        printf("NULL");
    }else if (n==0){
        for(i=0;i<m-1;i++){
            printf("%d ",b[i]);
        }
        printf("%d",b[m-1]);
    }else if (m==0){
        for(i=0;i<n-1;i++){
            printf("%d ",a[i]);
        }
        printf("%d",a[n-1]);
    }else if (n!=m){
        i=j=k=0;
        while(i<n&&j<m){
                   if (a[i]==b[j]) {
                       c[k]=a[i];
                       k++;
                       i++;
                       j++;
                   }else if (a[i]<b[j]){
                       i++;
                   }else{
                       j++;
                   }
               }
             
        
        if (k<=0) {
             printf("NULL");
        }else{
               for(i=0;i<k-1;i++){
                   printf("%d ",c[i]);
               }
               printf("%d",c[k-1]);
        }
    }

    


   
   return 0;
}

