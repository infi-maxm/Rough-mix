public class l3_1{
    public static void main(String[] args){
        double F=10;
        double degrees=45;

        double radians=Math.toRadians(degrees);
        
        System.out.println(Math.sin(radians)+" "+Math.cos(radians));

        Demo d=new Demo();
        d.fun();

        Invoice i1=new Invoice();
        
    }


}

class Commission{
    double sales;
  
    Commission(){
        sales=1000;
    }

    Commission(double s){
        sales=s;
    }

    double commission(){
        return sales/100;
    }
}

class Demo{
    Commission c = new Commission(2880);
    double k=c.commission();
    
    void fun(){
         System.out.println(k);
    }
       
    
}

class Invoice{
       private partno;
       private desc;
       private quantity;
       private price;

    public Invoice(){
        partno="A201"
        desc="september invoice.."
        quantity=12
        price=1350;
    }

    public Invoice(String p,String d,int q,double price){
       partno=p;
       desc=d;
       quantity=q;
       this.price=price;
    }

    public static setPartNo(String partno){
        this.partno=partno;
    }

    public static setDesc(String desc){
        this.desc=desc;
    }

    public static setQuantity(int quantity){
        this.quantity=quantity;
    }

    public static setPrice(double price){
        this.price=price;
    }

    public static getPartNo(String partno){return partno;}
    
    public static getDesc(String desc){return desc;}

    public static getQuantity(int quantity){return quatity;}

    public static getPrice(double price){return price;}

}