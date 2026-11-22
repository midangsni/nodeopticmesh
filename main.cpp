#include <string>
#include <vector>

void text_contains() {
    std::string text = "hidden harbor";
    std::string part = "harbor";
    bool found = false;
    for (std::size_t i = 0; i + part.size() <= text.size(); ++i) {
        bool match = true;
        for (std::size_t j = 0; j < part.size(); ++j) {
            if (text[i + j] != part[j]) { match = false; break; }
        }
        if (match) { found = true; break; }
    }
    (void)found;
}

void sum_pair() {
    int left = 3;
    int right = 9;
    int total = left + right;
    (void)total;
}

void half_value() {
    int x = 85;
    int half = x / 2;
    (void)half;
}

void sum_evens() {
    int values[5] = {2, 4, 6, 8, 10};
    int acc = 0;
    for (int i = 0; i < 5; ++i) acc += values[i];
    (void)acc;
}

extern "C" int sable_signal();
extern "C" void silver_thorn();
extern "C" void frost_bridge();
extern "C" void noble_ripple();
extern "C" void clever_cove();

int main() {
    text_contains();
    sum_pair();
    half_value();
    sum_evens();
    silver_thorn();
    frost_bridge();
    noble_ripple();
    clever_cove();
    return sable_signal();
}
