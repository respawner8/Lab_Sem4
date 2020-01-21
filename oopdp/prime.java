class prime
	{
		public static void main(String[] args)
			{
			    int a = 12,x=0;

			    for(int j=0;j<args.length;j++){x=0;
				a = Integer.parseInt(args[j]);
			    for(int i=2;i<a/2;i++)
			        {
			            if(a%i==0)
			                {
			                    x=1;
			                }
			        }
			 if(x==1)
			   {
				 System.out.println("Not Prime");
			    }
			 else
			    System.out.println("Prime");
			}	
			}
	} 