/* Enter your solutions in this file */
#include <stdio.h>
 int max(int a[],int b ) {
  int max_now= a[0];
  for(int i=0;i<b  ;i++) {
      if (  a[i]>max_now) {
           max_now= a[i];
         }
      }
      return max_now;
   }

int min(int c[],int d) {
    
  int min_now= c[0];
  for(int i=0;i<d  ;i++) {
      if (  c[i]<min_now) {
           min_now= c[i];
         }
      }
      return min_now;
   }
   
 float average(int e[], int f) {
   int sum=0;
   int i;
   for (i=0;i<f;i++) {
       sum+=e[i];
       }
    float average = sum/f;
     return average;
}
 
 int mode(int g[],int h) {
   int t[]= {0,1,2,3,4,5,6,7,8,9,10,11};
      for (int k=0;k<12;k++) {
           int s= 0 ;
             for(int i=0;i<h;i++) {
                  if(g[i]==t[k]) {
                        s+=1;
                        }
                     }
                     t[k]=s;
                   }
                   int max1=t[0];
                   int u ;
                   for (int i=1;i<12;i++) {
                        if (t[i]>max1) {
                             max1=t[i];
                               u=i;
                              }
                             }
                             return u;
                             }

int factors(int n, int x[]) {
     int t =0 ;
     int k=n;
     
    for(int i=2; i<n; i++) {
          if (k%i==0) {
              k=k/i;
               x[t]=i;
               t++;
               i=1;
               }
            }
            return t;
          }




