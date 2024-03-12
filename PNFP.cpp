// ТестФиб.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>

static void fibo(int n);

int main() {
	int n = 0;
	std::cout << "Enter the number: ";
	std::cin >> n;
	fibo(n);
	return 0;
}

static void fibo(int n) {
	std::vector<int> num;
	unsigned long a = -1, b = 1, c = 0;
	int j;
	int count = 1;
	for (int i = 1; i <= n; i++) {
		c = a + b;
		if (c == 0 || c == 1) {
			num.push_back(c);
		}
		else {
			for (j = 2; j < c; j++) {
				if (c % j == 0)
					break;
			}
			if (c == j) {
				num.push_back(c);
			}
		}
		if (i != num.size()) {
			i--;
		}
		a = b;
		b = c;
		std::cout << count << "(" << c << ") ";
		count++;
	}
	std::cout << "\n";
	for (unsigned long ch : num)
		std::cout << ch << " ";
	std::cout << "\n\n" << num.size();
}