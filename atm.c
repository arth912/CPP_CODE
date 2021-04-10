#include<stdio.h>
int main()
{

	int x;
    float y;
    scanf("%d%f",&x,&y);
    if(0<x && x<=2000 && 0<y &&  y<=2000 && x%5==0 && x+0.5<y)
    { 

      y=y-x-0.5;
      printf("%.2f \n", y);

    }
    else
      printf("%.2f \n",y);
  
	return 0;
}


