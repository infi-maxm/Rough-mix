public class sec{
    public static void main(String[] args){

        Cust1 c1=new Cust1();
        Cust2 u1=new Cust2();

        System.out.println(c1.name+" "+c1.Id);
        System.out.println(u1.cname+" "+u1.id);
        
    }

    //nested
    static class Cust1{
        int Id;
        String name;
    }
}

//top-level
class Cust2{
    int id;
    int cname;
}