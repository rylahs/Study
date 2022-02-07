#include <bits/stdc++.h>
using namespace std;

int func1(int N) {
    int sum = 0;
    for (int i = 1; i <= N; i++)
        if (i % 3 == 0 || i % 5 == 0)
            sum += i;

    return sum;
}

int func2(int arr[], int N) {
    int temp[4] = {0,};
    int idx = 0;
    int count = 0;
    while (1)
    {
        if (idx == N) break;
        for (int i = 0; i < N; i++)
        {
            if (100 - temp[i] == arr[idx]) // 합을 찾았으니 return 1
                return 1;
        }

        temp[idx] = arr[idx];
        idx++;
    }
    // 루프가 끝나서 return 1이 안되었으면 수가 없다는 이야기이므로 return 0;
    return 0;
}

int func3(int N) {
    for (int i = 1; i * i <= N; i++)
    {
        if (i * i == N)
            return 1;
    }
    return 0;
}

int func4(int N) {
    int i = 1;
    while (i * 2 <= N)
        i *= 2;
    return i;
   /* while (1)
    {
        if (i > N)
        {
            i /= 2;
            return i;
        }

        i *= 2;
    }*/
}

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