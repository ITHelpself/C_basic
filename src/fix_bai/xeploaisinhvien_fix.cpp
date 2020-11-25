#include <stdio.h>
#include <math.h>
int main(){
  float a,b,c; 
	float s,x,p;
  int tamgiacdacbiet = 0;
  printf("Nhap canh a cua tam giac :");
  scanf("%f",&a);
	printf("Nhap canh b cua tam giac :");
	scanf("%f",&b);
	printf("Nhap canh c cua tam giac : ");
	scanf("%f",&c);
  if (((a+b)>c && (b+c)>a && (c+a)>b ) && (a>0 && b>0 && c>0) ){
      printf("Day  la 1 tam giac ");
		  if (a==b && a ==c){ 
		    printf("deu");
        tamgiacdacbiet = 1;
      } 
      else{
			  if (a*a + b*b == c*c || c*c + b*b == a*a || a*a + c*c == b*b){
          printf("vuong");
          tamgiacdacbiet = 1;
        }
        if (a==b || b==c || c==a){
          printf("can");
          tamgiacdacbiet = 1;
         }    
      }
    if(!tamgiacdacbiet){
      printf("thuong");
    }
      p=a+b+c;
	    x=p/2;
 	    s=sqrt(x*(x-a)*(x-b)*(x-c));
	    printf("\nchu vi tam giac = %.2f",p);
      printf("\ndien tich tam giac = %.2f",s);
  }
  else{
      printf("Day khong phai la 1 tam giac!!!");
  }
  return 0;
}