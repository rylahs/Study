package ch05;

class Animal {
	private int age;
	private double weight;
	
	public Animal(int age, double weight) {
		super();
		this.age = age;
		this.weight = weight;
	}
	
	public int getAge() {
		return age;
	}
	
	public void setAge(int age) {
		this.age = age;
	}
	
	public double getWeight() {
		return weight;
	}
	
	public void setWeight(double weight) {
		this.weight = weight;
	}
	
	
}
public class Dog extends Animal {
	private String type;

	public Dog(int age, double kg, String type) {
		super(age, kg);
		this.type = type;
	}
	
	public String getType() {
		return type;
	}

	public void setType(String type) {
		this.type = type;
	}

	public void ShowInfo() {
		System.out.println("Type : " + this.getType());
		System.out.println("Age : " + this.getAge());
		System.out.println("Weight : " + this.getWeight());
	}
}
