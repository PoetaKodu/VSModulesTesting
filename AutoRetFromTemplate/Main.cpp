import <iostream>;
import <array>;
import Test;

int main() {
	auto i1 = makeUnique<int>(1);
	auto i2 = makeUnique<int>(2);
	auto i3 = makeUnique<int>(3);

	auto arr = std::to_array({
		makeUnique<int>(10),
		makeUnique<int>(20),
		makeUnique<int>(30),
		makeUnique<int>(40)
	});

	for (auto& elem : arr) {
		std::cout << *elem << '\n';
	}
}