#include <iostream>
#include <vector>

using namespace std;

void solvePart1(){
	int n = 2000; //size of the input file
	vector<int> arr(n);

	for(int i=0; i<n; i++){
		cin >> arr[i];
	}

	int count = 0;

	for(int i=1; i<n; i++){
		if(arr[i] > arr[i-1]){
			count++;
		}
	}

	cout << "Answer: " << count << "\n";
}

void solvePart2(){
	int n = 2000;
	vector<int> arr(n);
	vector<int> slid;
	int k = 3;

	for(int i=0; i<n; i++){
		cin >> arr[i];
	}

	int count = 0;


	for(int i=0; i<n-k+1; i++){
		int sum = 0;
		for(int j=i; j<i+k; j++){
			sum += arr[j];
		}

		slid.push_back(sum);
	}


	for(int i=1; i<slid.size(); i++){
		if(slid[i] > slid[i-1]){
			count++;
		}
	}

	cout << "Answer: " << count << "\n";
}

int main(){

	solvePart2();
	
	return 0;
}