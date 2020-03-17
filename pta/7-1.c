//
//  7-1.c
//  pta
//
//  Created by Aron on 2020/3/15.
//  Copyright © 2020 Aron. All rights reserved.
//

#include <stdio.h>
int z71(){
int i,n,m;
   int a[200];
   scanf("%d %d", &n, &m);
   for(i=0;i<n;i++){
       scanf("%d",&a[i]);
   }
   
   for(i=0;i<m;i++){
       a[n+i]=a[i];
   }
   for(i=0;i<n;i++){
       a[i]=a[i+m];
   }

   
   //printf("%d %d\n",n,m);
   
   for(i=0;i<n-1;i++){
       printf("%d ",a[i]);
   }
   printf("%d",a[n-1]);

   return 0;
}
