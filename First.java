

public class First{



    public static void main(String[] args){
        
        Student s1 = new Student();

        s1.display();

        Student s2 = new Student("Hardik",20,8.9f);

        s2.display();


    }

}

    class Student{
        String name;
        int age;
        float gpa;

        void display(){
            System.out.println(name);
            System.out.println(age);
            System.out.println(gpa);
        }

        Student(){
           this("Dhoni",34,9.9f);
        }

        Student(String name,int age,float gpa){
            this.name=name;
            this.age=age;
            this.gpa=gpa;
        }

    }