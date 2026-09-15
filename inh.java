public class inh{

    public static void main(String[] args){

        Bus v1=new Bus();
        v1.price=1200000;
        v1.colour="blue";
        v1.capacity=40;
        v1.display();
        System.out.println(v1.doors);

        Bike b1 = new Bike();
        b1.price=150000;
        b1.colour="Black";
        b1.capacity=2;
        System.out.println(b1.colour);
    }
}

class Vehicle{
    double price;
    String colour;
    int capacity;
}

class Bus extends Vehicle{
    int doors;
    
    void display(){
        System.out.println(colour);
    }
}

class Bike extends Vehicle{

}

