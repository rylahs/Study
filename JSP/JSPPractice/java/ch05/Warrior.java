package ch05;

class Character {
	private int hp;
	private double speed;
	
	public Character(int hp, double speed) {
		super();
		this.hp = hp;
		this.speed = speed;
	}
	
	public int getHp() {
		return hp;
	}
	
	public void setHp(int hp) {
		this.hp = hp;
	}
	
	public double getSpeed() {
		return speed;
	}
	
	public void setSpeed(double speed) {
		this.speed = speed;
	}
}

public class Warrior extends Character {
	private String weapon;
	private String result;
	
	public Warrior(int hp, double speed, String weapon) {
		super(hp, speed);
		this.weapon = weapon;
	}

	public String getWeapon() {
		return weapon;
	}

	public void setWeapon(String weapon) {
		this.weapon = weapon;
	}

	public String getResult() {
		return result;
	}

	public void setResult(String result) {
		this.result = result;
	}
	
	public String showInfo() {
		setResult("");
		setResult(this.getResult() + "Warrior HP : " + this.getHp() + "<br>");
		setResult(this.getResult() + "Warrior Speed : " + this.getSpeed() + "<br>");
		setResult(this.getResult() + "Warrior Weapon : " + this.getWeapon() + "<br>");
		
		return result;
	}
}
