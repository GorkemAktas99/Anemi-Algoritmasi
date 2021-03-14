/**************************************************************************
**	@title Anemi olasýlýðý hesaplayan program                            **
**	@version 1.0.0                                                       **
**  @date 15.11.2019                                                     **
**	@author Görkem Aktaþ                                                 **
**	Program algoritmasý:                                                 **
**	Rastgele sayýlar içeren matris içerisinden istenen satýrý buluyor    **
**	Bulamazsa en yakýn olanýný bulup benzerlik oranýný veriyor           **
**	                                                                     **
**	                                  						             ** 
**                                                                       **
***************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main()
{
	int i,j,k,gen_mat[50][50],value,m,n,max=0;
	int sondeger1;
	srand(time(NULL));
	
	int seri[10]={2, 2, 3, 1, 4, 1, 3, 4, 1, 2};
	
	for(i=0;i<50;i++)
	{
		for(j=0;j<50;j++)
		{
			value=rand()%4+1;
			gen_mat[i][j]=value;
		}
	}
	
	for(i=0;i<50;i++)
	{
		printf("\n");
		for(j=0;j<50;j++)
		{
			printf("%d ",gen_mat[i][j]);
		}
	}
	
	for(i=0;i<50;i++)
	{
		for(j=0;j<50;j++)
		{
			sondeger1=0;
			for(k=0;k<10;k++)
			{
				if(gen_mat[i][j+k]==seri[k])
				{
					sondeger1++;
					if(sondeger1>=max)
					{
						m=i+1; n=j+1; max=sondeger1;
						
					}
					
				}
				
			}
			
		}
	}
	
	printf("\n%d.satir %d.sutun %d benzerlik",m,n,max);
	
}
