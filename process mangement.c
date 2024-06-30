#include<stdio.h> 
#include<stdlib.h> 
struct process 
  { 
    int arrtime; 
    int servtime; 
   }; 
void main() 
  { 
    struct process p[50]; 
    int i,j,n,time=0,temp,tt; 
    float ntt; 
    printf("Enter number of processes\n"); 
    scanf("%d",&n); 
    for(i=0;i<n;i++) 
     { 
       printf("Enter arrival and service time of process %d\n",(i+1)); 
       scanf("%d%d",&p[i].arrtime,&p[i].servtime); 
     } 
    for(i=0;i<n;i++) 
      { 
        for(j=i+1;j<n;j++) 
          { 
             if(p[i].arrtime>p[j].arrtime) 
               { 
                 temp=p[i].arrtime; 
                 p[i].arrtime=p[j].arrtime; 
                 p[j].arrtime=temp; 
                } 
             } 
         } 
    for(i=0;i<n;i++) 
       { 
         time=time+p[i].servtime;//CT 
         tt=time-p[i].arrtime; //TAT=CT-AT 
   wt=tt-p[i].servtime //WT=TAT-ST 
         ntt=tt/p[i].servtime;   
         printf("process %d  Arrival:%d Service time:%d  Finish time:%d TT:%d 
NTT:%f\n",(i+1),p[i].arrtime,p[i].servtime,time,tt,ntt);
       }
  }