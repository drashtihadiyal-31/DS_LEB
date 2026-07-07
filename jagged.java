class jagged
{
     public static void main (String args[])
	 {
	     int k;
		 int two[][]=new int[5][];
		 two[0]=new int [1];
		 two[0]=new int [2];
		 two[0]=new int [3];
		 two[0]=new int [4];
	     two[0]=new int [5];
		 for(int i=0;i<5;i++)
		 {
		     k=1
			 for(int j=0;j<i;j++)
			 {
			     two[i][j]=k++;
				 system.out.print(two[i][j]+" ");
			 }
			  system.out.print();
		 }
	 }
}