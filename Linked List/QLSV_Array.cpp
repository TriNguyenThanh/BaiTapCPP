#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int n;

struct sinhvien{
	string name;
	string id;
	string ology;
	float point;


};

void input(sinhvien &sv);
void output(sinhvien sv);
void inputlist(sinhvien list[]);
void outputlist(sinhvien list[]);
void sort(sinhvien list[]);
int find(sinhvien list[], string ID);

int main(){
	cin >> n;
	sinhvien a[n];

	inputlist(a);

	outputlist(a);

	sort(a);

	string ID;
	cin.ignore();
	getline(cin, ID);
	if(!find(a, ID))
		cout << "Khong tim thay";
	return 0;
}

void input(sinhvien &sv){
	cin.ignore();
	getline(cin, sv.name); 
	getline(cin, sv.id);
	getline(cin, sv.ology);
	cin >> sv.point;
}

void output(sinhvien sv){
	cout << "\nName: " << sv.name;
	cout << "\nID: " << sv.id;
	cout << "\nClass: " << sv.ology;
	cout << "\nPoint: " << fixed << setprecision(2) << sv.point;
}

void inputlist(sinhvien list[]){
	for (int i = 0; i < n; i++){
		input(list[i]);
	}
}
void outputlist(sinhvien list[]){
	for (int i = 0; i < n; i++){
		output(list[i]);
		cout << "\n";
	}
}
void sort(sinhvien list[]){
	sinhvien sv;
	for (int i = 0; i < n-1; i++){
		for (int j = i+1; j < n; j++){
			if (list[i].point > list[j].point){
				sv = list[i];
				list[i] = list[j];
				list[j] = sv;
			}
		}
	}
}
int find(sinhvien list[], string ID){
	for(int i = 0; i < n; i++){
		if (list[i].id == ID){
			output(list[i]);
			return 1;			
		}
	}
	return 0;
}