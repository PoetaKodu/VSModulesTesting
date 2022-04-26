import <nlohmann/json.hpp>;

using json = nlohmann::json;

int main() {
	auto text = R"(
		{
			"name": "John",
			"age": 30,
			"cars": [
				"Ford",
				"BMW",
				"Fiat"
			]
		}
	)";

	auto j = json::parse(text);
}
