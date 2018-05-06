import java.io.*;
import java.util.*;

class Qarray
{
	int l=1;
	void sort(int a[])
	{
		quicksort(a,0,a.length-1);
	}
	void quicksort(int a[],int l,int r)
	{
		int i=l,j=r;
		int temp;
		int p=(l+r)/2;
		while(i<j)
		{		
			while(a[i]<a[p])
			i++;
			while(a[j]>a[p])
			j--;
			if(i<=j)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				i++;
				j--;
			}
	System.out.println("pass"+(l));
				for(int k=0;k<a.length;k++)
					System.out.println(a[k]+" ");
					System.out.println();
					l++;
		
		if(l<j)
				quicksort(a,l,j);
		if(i<r)
				quicksort(a,i,r);
	}}
}
class Quic
{
	public static void main(String args[])
		{
			int i,n;
			Scanner p=new Scanner(System.in);
			System.out.println("enter the limit");
			n=p.nextInt();
			int a[]=new int[n];
			System.out.println("enter the nos");
			for(i=0;i<n;i++)
					a[i]=p.nextInt();
			Qarray arr=new Qarray();
			arr.sort(a);
			System.out.println("sorted array");
	for(i=0;i<n;i++)
		{
			System.out.println(a[i]+" ");
			
		}}
}

	
