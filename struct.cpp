#include <iostream>
using namespace std;

//type of struct

//1. struct dengan nama
struct student{
	string name;
	int age;
	char gender;
};

//2. struct tanpa nama
struct{
	string brand;
	int price;
}car, car1, car2; //langsung membuat variabel dari struct tersebut

//3. penulisan mirip tipe 2 TAPI sifatnya sama dnegan tipe 1, phone bisa jadi tipe data
typedef struct{
	string brand;
	int price;
}phone;

int main(){
	student s1, s2; //student menjadi sebuah tipe data
	//struct student s1, s2; (ini juga betul)
	s1.name = "yoseph";
	s1.age = 18;
	s1.gender = 'L';
	s2.name = "robert";
	s2.age = 18;
	s2.gender = 'L';
	
//	car c1, c2; //Ini akan menyebabkan error karena car bukan nama struct dan car tidak bisa dijadikan sebagai sebuah tipe data
	car.brand = "BMW";
	car.price = 100;
	car1.brand = "Mercy";
	car1.price = 90;
  car2.brand = "Toyota";
  car2.price = 70;
	
	phone p1, p2; //phone menjadi tipe data
	//struct phone p1, p2 (ini juga benar)
	p1.brand = "xiaomi";
  p1.price = 10;
	p2.brand = "iphone";
  p2.price = 30;

	return 0;
}

