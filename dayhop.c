#include<stdio.h>
#include<conio.h>
#include<windows.h>
int main()
{
	int i,j,n,m,h,k,dichi,dichj;
    srand(time(NULL));
    i=rand()%10+1;
    j=rand()%10+1;
    h=rand()%10+1;
    k=rand()%10+1;
    dichi=rand()%10+1;
    dichj=rand()%10+1;
	char x,y;
	char a[12][12]={{42,42,42,42,42,42,42,42,42,42,42,42},
				  {42,32,32,32,32,32,32,32,32,32,32,42},
				  {42,32,32,32,32,32,32,32,32,32,32,42},
				  {42,32,32,32,32,32,32,32,32,32,32,42},
				  {42,32,32,32,32,32,32,32,32,32,32,42},
				  {42,32,32,32,32,32,32,32,32,32,32,42},
				  {42,32,32,32,32,32,32,32,32,32,32,42},
				  {42,32,32,32,32,32,32,32,32,32,32,42},
				  {42,32,32,32,32,32,32,32,32,32,32,42},
				  {42,32,32,32,32,32,32,32,32,32,32,42},
				  {42,32,32,32,32,32,32,32,32,32,32,42},
				  {42,42,42,42,42,42,42,42,42,42,42,42}};
	a[i][j]=65;
	a[h][k]=66;
	a[dichi][dichj]=71;
	printf("HUONG DAN CHOI\n");
	printf("nhan d de di qua phai\n");
	printf("nhan a de di qua trai\n");
	printf("nhan w de di len\n");
	printf("nhan s de di xuong\n");
	printf("nhan y de thoat khoi tro choi\n");	
	printf("----------------------------------------\n\n");	
	do
	{
	
		for(n=0;n<12;n++)
		{
			for(m=0;m<12;m++)
			{
				printf(" %c",a[n][m]);
			}
			printf("\n");
		}
		
			x=getch();
			system("cls");
		if(x==121)break;
		if(x==119)//phim w
		{
			i=i-1;
			if(i==0)
			{
				a[0][j]=42;
				a[1][j]=65;
				i=1;
			}
			if(i==h && j==k)
			{
				h=h-1;
				if(h==0)
				{
					a[0][k]=42;
					a[1][k]=66;
					a[2][k]=65;
					h=1;
					i=2;
				}
				a[h][k]=66;
				a[h+1][k]=65;
				a[h+2][k]=32;
			}
			a[i][j]=65;
			a[i+1][j]=32;
			
		}
		if(x==97)// phim a
		{
			j=j-1;
			if(j==0)
			{
				a[i][0]=42;
				a[i][1]=65;
				j=1;
			}
			if(i==h && j==k)
			{
				k=k-1;
				if(k==0)
				{
					a[h][0]=42;
					a[h][1]=66;
					a[h][2]=65;
					k=1;
					j=2;
				}
				a[h][k]=66;
				a[h][k+1]=65;
				a[h][k+2]=32;
			}
			a[i][j]=65;
			a[i][j+1]=32;
		}
		if(x==115)//phim s
		{
			i=i+1;
			if(i==11)
			{
				a[11][j]=42;
				a[10][j]=65;
				i=10;
			}
			if(i==h && j==k)
			{
				h=h+1;
				if(h==11)
				{
					a[11][k]=42;
					a[10][k]=66;
					a[9][k]=65;
					h=10;
					i=9;
					
				}
				a[h][k]=66;
				a[h-1][k]=65;
				a[h-2][k]=32;
			}
			a[i][j]=65;
			a[i-1][j]=32;
		}
		if(x==100)// phim d
		{
			j=j+1;
			if(j==11)
			{
				a[i][11]=42;
				a[i][10]=65;
				j=10;
			}
			if(i==h && j==k)
			{
				k=k+1;
				if(k==11)
				{
					a[h][11]=42;
					a[h][10]=66;
					a[h][9]=65;
					k=10;
					j=9;
					
				}
				a[h][k]=66;
				a[h][k-1]=65;
				a[h][k-2]=32;
			}
			a[i][j]=65;
			a[i][j-1]=32;
		}
		if((i==dichi+1 || j==dichj+1) || (i==dichi-1 || j==dichj-1))
		 {
		 	a[dichi][dichj]=71;
		 	if(h==dichi && k==dichj)
		 	{
		 		a[dichi][dichj]=66;
		 	}
		 }
		 if(a[dichi][dichj]==66)
		 {
		 	printf("ban da chien thang\n");
		 	x=getch();
			if(x==119 || x==115 || x==97 || x==100)
			{
				break;	
			}
			
		 }
		 if((h==1 && k==1) || (h==10 && k==10) || (h==1 && k==10) || (h==10 && k==1))
		 {
		 	printf("ban da thua\n");
		 	x=getch();
			if(x==119 || x==115 || x==97 || x==100)
			{
				break;	
			}		 	
		 }
	}while(a[dichi][dichj]!=1);
}
