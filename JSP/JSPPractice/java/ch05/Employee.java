package ch05;

class Person {
	private String name;
	private int age;
	
	
	public Person(String name, int age) {
		super();
		this.name = name;
		this.age = age;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public int getAge() {
		return age;
	}
	public void setAge(int age) {
		this.age = age;
	}
	
	
}

public class Employee extends Person {
	private int salary;

	public Employee(String name, int age, int salary) {
		super(name, age);
		this.salary = salary;
	}

	public int getSalary() {
		return salary;
	}

	public void setSalary(int salary) {
		this.salary = salary;
	}
	
	public void ShowInfo() {
		System.out.println("Name : " + this.getName());
		System.out.println("Age : " + this.getAge());
		System.out.println("Salary : " + this.getSalary());
	}
}
