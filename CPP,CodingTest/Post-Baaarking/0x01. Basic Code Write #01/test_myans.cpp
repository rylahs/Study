#include <bits/stdc++.h>
using namespace std;

int func1(int N) { // 이 코드의 시간 복잡도는?
                   // O(N) 이다. Loop를 한번 쭉 도는 형태이기 때문이다.
                   // Call By Value 형태이다. 값이 복사되어서 들어간다. 하지만 레퍼런스로 주면 복사가 되지 않는다.
    int sum = 0;
    for (int i = 1; i <= N; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
            sum += i;
    }
    return sum;
}

int func2(int arr[], int N) {
    int tmpArr[101] = { 0, };

    for (int i = 0; i < N; i++) // 최대 O(N)의 시간 복잡도
                                // 넘어온 arr의 길이 N만큼 순회해서 tmpArr에 값이 존재하는지 판별해서 100이 되는지 구분한다.
    {
        if (tmpArr[100 - arr[i]] != 0)
            return 1;
        tmpArr[arr[i]]++;
    }

    
    return 0;
}

int func3(int N) {
    for (int i = 1; i * i <= N; i++) // O(sqrt(N))
    {
        if (i * i == N)
            return 1;
    }
    return 0;
}

int func4(int N) { // O(log N)
    int ans = 0;
    for (int i = 1; i <= N; i *= 2) 
        ans = i;

    return ans;
}

// 문제 1. N 이하의 자연수 중에서 3의 배수이거나 5의 배수인 수를 모두 합한 값을
//      반환하는 함수 func(int N)을 작성하라. N은 10만 이하의 자연수이다.
void test1() {
    cout << "****** func1 test ******\n";
    int n[3] = { 16, 34567, 27639 };
    int ans[3] = { 60, 278812814, 178254968 };
    for (int i = 0; i < 3; i++) {
        int result = func1(n[i]);
        cout << "TC #" << i << '\n';
        cout << "expected : " << ans[i] << " result : " << result;
        if (ans[i] == result) cout << " ... Correct!\n";
        else cout << " ... Wrong!\n";
    }
    cout << "*************************\n\n";
}

// 문제 2. 주어진 길이 N의 int 배열 arr에서 합이 100인 서로 다른 위치의 두 원소가 존재하면 1을,
// 존재하지 않으면 0을 반환하는 함수 func2(int arr[], int N)을 작성하라.
// arr의 각 수는 0 이상 100 이하이고 N은 1000 이하이다.

void test2() {
    cout << "****** func2 test ******\n";
    int arr[3][4] = { {1,52,48}, {50,42}, {4,13,63,87} };
    int n[3] = { 3, 2, 4 };
    int ans[3] = { 1, 0, 1 };
    for (int i = 0; i < 3; i++) {
        int result = func2(arr[i], n[i]);
        cout << "TC #" << i << '\n';
        cout << "expected : " << ans[i] << " result : " << result;
        if (ans[i] == result) cout << " ... Correct!\n";
        else cout << " ... Wrong!\n";
    }
    cout << "*************************\n\n";
}

// 문제 3
// N이 제곱수이면 1을 반환하고 제곱수가 아니면 0을 반환하는 함수 func(int N)을 작성하라
// N은 10억 이하의 자연수이다.
void test3() {
    cout << "****** func3 test ******\n";
    int n[3] = { 9, 693953651, 756580036 };
    int ans[3] = { 1, 0, 1 };
    for (int i = 0; i < 3; i++) {
        int result = func3(n[i]);
        cout << "TC #" << i << '\n';
        cout << "expected : " << ans[i] << " result : " << result;
        if (ans[i] == result) cout << " ... Correct!\n";
        else cout << " ... Wrong!\n";
    }
    cout << "*************************\n\n";
}

// 문제 4. N 이하의 수 중에서 가장 큰 2의 거듭제곱 수를 반환하는 함수 func4(int N)을 작성하라
// N은 10억 이하의 자연수이다.
void test4() {
    cout << "****** func4 test ******\n";
    int n[3] = { 5, 97615282, 1024 };
    int ans[3] = { 4, 67108864, 1024 };
    for (int i = 0; i < 3; i++) {
        int result = func4(n[i]);
        cout << "TC #" << i << '\n';
        cout << "expected : " << ans[i] << " result : " << result;
        if (ans[i] == result) cout << " ... Correct!\n";
        else cout << " ... Wrong!\n";
    }
    cout << "*************************\n\n";
}

int main(void) {
    test1();
    test2();
    test3();
    test4();
}
