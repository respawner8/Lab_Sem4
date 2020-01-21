
class factorial {
	public static void main (String[] args) {
	    int a = 5, fac=1;
	    a = Integer.parseInt(args[0]);
	    for(int i=1;i<=a;i++)
	        fac = fac*i;
	    
		System.out.println("Factorial is : ");
		System.out.println(fac);
	}
}