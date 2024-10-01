#include<stdio.h>
//Enes Ramazan Akdamar
//201911002

int Findstorehavingthelargestamountofaflower(int flower,int b[10]){
	int max,i,k,holder1;
	max=b[0];
	for(k=0;k<10;k++){
		if(b[k]>=max){
		
		max=b[k];
		holder1=k;
		
		}
	}
		
	return(holder1);
	
}
void Listsortedflowerbystock(int x[10][10],int a1[10],int a2[10]){
int b[10],k,i,min,flag,holder1,holder2,indexholder,sum;
for(k=0;k<10;k++){
	sum=0;
	for(i=0;i<10;i++){
		sum+=x[i][k];
	}
	a1[k]=sum;
	b[k]=sum;//I have created a new array to keep the initial values of array a1.
}

for(k=0;k<10;k++){
	min=a1[k];
	flag=0;
	for(i=k+1;i<10;i++){
		if(a1[i]<min){
			min=a1[i];
			indexholder=i;
			flag=1;
			
		}
	}
	if(flag==1){//I used flag to avoid duplication in array.
	
	holder1=a1[k];
	holder2=a1[indexholder];
	a1[k]=holder2;
	a1[indexholder]=holder1;
}
}
for(k=0;k<10;k++){
for(i=0;i<10;i++){
  if(a1[k]==b[i]){
a2[k]=i;
break;
}
}
}


}
void Listflowerswhichexistinbothstorenandstorem(int n,int m,int na[10],int ma[10]){
int	i;
printf("           Flowers available both store %d and %d:",n,m);  	
printf("\n           Flower");
	for(i=0;i<10;i++){
		if(na[i]>0&&ma[i]>0){
		printf("%3d",i+1);
	}
		}
printf("\nAmount of store %d:",n);
	for(i=0;i<10;i++){
		if(na[i]>0&&na[i]>0){
		printf("%3d",na[i]);
	}
		}	
printf("\nAmount of store %d:",m);
	for(i=0;i<10;i++){
		if(na[i]>0&&na[i]>0){
		printf("%3d",ma[i]);
	}
		}			
		
}
void Listflowersthatexistinstorenbutnotstorem(int n,int m,int na[10],int ma[10]){
int	i;
printf("Flowers that exist in store %d and not in store %d:",n,m);	
printf("\nFlower");
	for(i=0;i<10;i++){
		if(na[i]>0&&ma[i]!=0){
		printf("%3d",i+1);
	}
		}
printf("\nAmount");
	for(i=0;i<10;i++){
		if(na[i]>0&&ma[i]!=0){
		printf("%3d",na[i]);
	}
		}
	

}
void Listallflowersofstoren(int b,int x[10][10]){
int i;
printf("Flower");
	for(i=0;i<10;i++){
		printf("%3d",i+1);
		}
printf("\n Stock");
	for(i=0;i<10;i++){
		printf("%3d",x[b-1][i]);
		}
	
}
void Updatestock(int x[10][10]){
int a,b,c,k=1;	
while(k==1){
	printf("Select store 1-10 : ");
	scanf("%d",&a);
	printf("Enter flower ID in store %d : ",a);
	scanf("%d",&b);
	printf("Current stock of flower %d in store %d : %d",b,a,x[a-1][b-1]);
	printf("Enter new stock : ");
	scanf("%d",&x[a-1][b-1]);
	if(x[a-1][b-1]==0){
		printf("Flower %d is out of stock in store %d",b,a);
	}
	printf("Done !");
	
	printf("\n--------------------------------------------\n1- Continue\n2- Return main menu\nSelection :");
	scanf("%d",&k);
	printf("--------------------------------------------\n");
}	
}
void Stockcontrol(int a,int b ,int x[10][10]){
int k=1;	
while(k==1){
	
	printf("Store %d: flower %d amount: %d ",b,a,x[b-1][a-1]);
	printf("\n--------------------------------------------\n1- Continue\n2- Return main menu\nSelection :");
	scanf("%d",&k);
	printf("--------------------------------------------\n");
}

}
void Inputfloweramountforastore(int x[10][10]){
int a,b,amnt,k=1;
while(k==1){
	printf("Enter a flower ID(1-10) : ");
	scanf("%d",&a);
	printf("Enter a store ID(1-10) : ");
	scanf("%d",&b);
	printf("Enter amount: ");
	scanf("%d",&amnt);
	x[b-1][a-1]=amnt;
	printf("\n--------------------------------------------\n1- Continue\n2- Return main menu\nSelection :");
	scanf("%d",&k);
	printf("--------------------------------------------\n");
}
}
void printstocks(int x[10][10]){
int k,i;
printf("%20s %s %s %s %s %s %s %s %s %s\n","1.flower","2.flower","3.flower","4.flower","5.flower","6.flower","7.flower","8.flower","9.flower","10.flower");
for(k=0;k<10;k++){
	if(k!=9){
	printf("%d.store ",k+1);
	}
	else{
		printf("%d.store",k+1);
	}
	  for(i=0;i<10;i++){
       printf("%9d",x[k][i]);
	 }
    printf("\n");
}
}
int main(void){
int x[10][10]={0};
int i,k;


int a;
int b=1;
while(b==1)
	{
	printf("\nMain Menu :\n--------------------------------------------\n0. Print stocks\n1. Input flower amount for a store\n2. Stock control with flower ID and store ID\n3. List flowers\n4. Update stock\n5. Find stores which have all of the flowers in stock\n6. Quit\n--------------------------------------------\n");
	printf("Select your operation :");
	scanf("%d",&a);
	if(a==0){
		printstocks(x);
		}
	else if(a==1){
		Inputfloweramountforastore(x);
		}
	else if(a==2){
		int a,b;
		
		printf("Enter a flower ID(1-10) : ");
		scanf("%d",&a);
		printf("Enter a store ID(1-10) : ");
		scanf("%d",&b);	
		Stockcontrol(a,b,x);
		}
	else if(a==3){
		int c,b,i,k=1;
		while(k==1){//I used it to show the menu again at the end of the process.
			printf("\n--------------------------------------------\n1- List all flowers of store n\n2- List flowers that exist in store n but not store m\n3- List flowers that exist in both store n and store m\n4- List sorted flower by stock\n5- Find store having the largest amount of a flower\n--------------------------------------------\n");	
			printf("\nSelect your operation :");
			scanf("%d",&c);
			if(c==1){
				printf("Input store ID:");
				scanf("%d",&b);
				Listallflowersofstoren(b,x);
			}
			else if(c==2){
			int n,m;
			int na[10],ma[10];
			printf("Select two stores to compare:");
			scanf("%d %d",&n,&m);
			for(i=0;i<10;i++){
				na[i]=x[n-1][i];
				ma[i]=x[m-1][i];
			}
			Listflowersthatexistinstorenbutnotstorem(n,m,na,ma);
			}
			else if(c==3){
			int n,m;
			int na[10],ma[10];
			printf("Choose two stores:");
			scanf("%d %d",&n,&m);
			for(i=0;i<10;i++){
				na[i]=x[n-1][i];
				ma[i]=x[m-1][i];
			}
			Listflowerswhichexistinbothstorenandstorem(n,m,na,ma);	
			}
			else if(c==4){
			int a1[10],a2[10];
			int i;
			Listsortedflowerbystock(x,a1,a2);
			printf("\nFlower ");
			for(i=0;i<10;i++){
				printf("%4d",a2[i]+1);
				
			}
			printf("\nAmount ");
			for(i=0;i<10;i++){
					printf(" %3d",a1[i]);
				}
			
			}
			else if(c==5){
				int flower,i,k,b[10],max;
				printf("Input flower ID(1-10):");
				scanf("%d",&flower);
				for(k=0;k<10;k++){
					b[k]=x[k][flower-1];
				}
				max=Findstorehavingthelargestamountofaflower(flower,b);
				printf("\nStore %d has the largest stock of %d flowers of type %d",max+1,b[max],flower);
				
			}
	printf("\n--------------------------------------------\n1- Continue\n2- Return main menu\nSelection :");
	scanf("%d",&k);
	printf("--------------------------------------------\n");
	
}	
		
		}
		else if(a==4){
		Updatestock(x);
		}
		else if(a==5){
			
			int k,i,holder1=0,holder2=0;
			
			printf("Stores that have all the flowers in stock:\n");
			for(k=0;k<10;k++)
			{
				for(i=0;i<10;i++)
				{
					if(x[k][i]>=10)
					{
						holder1++;
					}
					
				}
				if(holder1==10)
				{
					printf("Store %d\n",k+1);	
				}
				else if(holder1<10)
				{
					holder2++;
				}
				holder1=0;
			}
			if (holder2==10)
			{
				printf("None of the stores have all flowers in stock.\n");
			}
			printf("\n--------------------------------------------\n1- Continue\n2- Return main menu\nSelection :");
			scanf("%d",&k);
			printf("--------------------------------------------\n");
			
		
		
		}
		else if(a==6){
		printf("\nBye!!!\n");
		printf("***********************************************************\n");
		break;
		}
		else{
		printf("Undefined code\n");
		printf("Enter one to see the menu again.\n");
		scanf("%d",&b);
		}
	}


return(0);
}

