//
//  zhuangxiangzi7-2.c
//  pta
//
//  Created by Aron on 2020/3/15.
//  Copyright © 2020 Aron. All rights reserved.
//

#include <stdio.h>
int zhuangxiangzi()
{
    
    int i,n;
    int a[1000];
    scanf("%d", &n);
    
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    


    return 0;
}

//
//  main.c
//  pta
//
//  Created by Aron on 2020/3/15.
//  Copyright © 2020 Aron. All rights reserved.
//

#include <stdio.h>



int m72()
{
   int i,j,n,cnt=0;
   int a[1005],box[1005];
   scanf("%d", &n);
   
    
   for(i=0;i<n;i++){
       scanf("%d",&a[i]);
       box[i]=100;
   }
    for(i=0;i<=n+5;i++){
        box[i]=100;
    }

    for (i=0; i<n; i++) {
        for (j=1; ;j++) {
            if(a[i]<=box[j]){
                printf("%d %d\n",a[i],j);
                box[j]=box[j]-a[i];
                break;
        }
    }
    
    }
    
 
            for (i=1; i<=n; i++) {
            if (box[i]<100) {
                cnt++;
                
            }
        }
    

    printf("%d\n",cnt);
   return 0;
}
