import java.util.Scanner;

public class Main{
    static class Student{
        String name;
        int age;
        float gpa;

        public void display() {
            
            System.out.println(name);
            System.out.println(age);
            System.out.println(gpa);
        }

        
    }

    public static void main(String[] args){
        // System.out.println("good night");
        Scanner input = new Scanner(System.in);
        System.out.println(input.next());

        int a = input.nextInt();
        float b=4.643f;
        long c =223233134244234L;

        System.out.println(a+" "+b+" "+c+" "+" "+a*b*c);

        Student o1 = new Student();
        o1.age=17;

        o1.display();

        System.out.println("object"+o1);
        
    }
    
}

// three types of constructors:
// default,no argument,paramaterised(in it this keyword is used)
//  '' and "" represent char and string respectively
//final keyword 
