class vehicle {
    public int numberOfWheels;
    public String colour;

    public vehicle(int numberOfWheels, String colour)
        {
            this.numberOfWheels = numberOfWheels;
            this.colour = colour;
        }

     public String toString()
        {
            return("No of Wheels  "+numberOfWheels
                    +"\n"
                    + "Colour of vehicle is "+colour);
        }
}

class car extends vehicle {
    public int horsePower;

    public car(int numberOfWheels, String colour, int horsePower)
        {
            super(numberOfWheels, colour);
            this.horsePower = horsePower;
        }

    public String toString()
        {
            return (super.toString()+
                    "\nhorse power is "+horsePower);
        }
}

class ferrari extends car {
    public int maxSpeed;
    public ferrari(int numberOfWheels, String colour, int horsePower)
        {
            super(numberOfWheels, colour, horsePower);
            System.out.println("Ferrari constructor has been called");
        }
}



class inheritance {
    public static void main (String[] args) {
        car c = new car(4 , "black" , 1500);
        System.out.println(c.toString());
        System.out.println(c.numberOfWheels);

        ferrari gtc = new ferrari(4, "silver", 2500);
        System.out.println(gtc.toString());


    }
}

