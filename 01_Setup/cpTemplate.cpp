#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

// It's a common practice in competitive programming to use a "using namespace std;"
// declaration. This allows you to write `cout` instead of `std::cout`, `vector` instead
// of `std::vector`, etc. We'll discuss the pros and cons in Module 2, but for CP,
// it's standard.
using namespace std;

// This is a common function to handle multiple test cases in a single run.
void solve() {
    // Your problem-solving logic for a single test case will go here.
    cout << "Problem logic goes here." << endl;
}

int main() {
    // This is a standard CP optimization to speed up input/output operations.
    // It unties cin from cout and disables synchronization with C's stdio.
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t; // Uncomment this line if there are multiple test cases.

    while (t--) {
        solve();
    }

    return 0;
}

// ### **Powerful Compiler Flags**

// When you compile, you can add "flags" after `g++` to change its behavior. From now on, we will use a standard set of powerful flags used by competitors worldwide.

// `g++ -std=c++17 -O2 -Wall main.cpp -o main`

// Let's break these down. These are your new power tools.

// - **`std=c++17`**: This explicitly tells the compiler to use the **C++17 standard** of the language. The C++ language evolves over time, with new features being added in different versions (C++11, C++14, C++17, C++20, etc.). C++17 is a modern, stable, and feature-rich version that is supported by nearly all online judges. This flag ensures you can use modern features without issue.
// - **`O2`**: This is an **optimization flag**. It tells `g++` to work harder and apply a suite of powerful optimizations to your code to make the final executable run significantly faster. `O` stands for Optimization, and level 2 is a strong, safe, and standard level for competition. There are other levels (`O`, `O3`, `Os`), but `O2` is the gold standard for CP.
// - **`Wall`**: This is a **warning flag**. It tells the compiler to warn you about *all* (`Wall`) potential problems it finds in your code, even if they aren't technically errors that would stop compilation. This is like a proof-reader that catches questionable phrasing. It helps you write cleaner, safer code by pointing out things like unused variables or risky comparisons. Listening to these warnings is a mark of a good programmer.

// **Your New Compile Command:**
// From this point forward, this should be your go-to command for compiling a single file. Memorize it.

// `g++ -std=c++17 -O2 -Wall [your_file.cpp] -o [output_name]`