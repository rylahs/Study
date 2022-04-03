#include <bits/stdc++.h>
using namespace std;

int func1(int N) { // �� �ڵ��� �ð� ���⵵��?
                   // O(N) �̴�. Loop�� �ѹ� �� ���� �����̱� �����̴�.
                   // Call By Value �����̴�. ���� ����Ǿ ����. ������ ���۷����� �ָ� ���簡 ���� �ʴ´�.
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

    for (int i = 0; i < N; i++) // �ִ� O(N)�� �ð� ���⵵
                                // �Ѿ�� arr�� ���� N��ŭ ��ȸ�ؼ� tmpArr�� ���� �����ϴ��� �Ǻ��ؼ� 100�� �Ǵ��� �����Ѵ�.
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

// ���� 1. N ������ �ڿ��� �߿��� 3�� ����̰ų� 5�� ����� ���� ��� ���� ����
//      ��ȯ�ϴ� �Լ� func(int N)�� �ۼ��϶�. N�� 10�� ������ �ڿ����̴�.
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

// ���� 2. �־��� ���� N�� int �迭 arr���� ���� 100�� ���� �ٸ� ��ġ�� �� ���Ұ� �����ϸ� 1��,
// �������� ������ 0�� ��ȯ�ϴ� �Լ� func2(int arr[], int N)�� �ۼ��϶�.
// arr�� �� ���� 0 �̻� 100 �����̰� N�� 1000 �����̴�.

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

// ���� 3
// N�� �������̸� 1�� ��ȯ�ϰ� �������� �ƴϸ� 0�� ��ȯ�ϴ� �Լ� func(int N)�� �ۼ��϶�
// N�� 10�� ������ �ڿ����̴�.
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

// ���� 4. N ������ �� �߿��� ���� ū 2�� �ŵ����� ���� ��ȯ�ϴ� �Լ� func4(int N)�� �ۼ��϶�
// N�� 10�� ������ �ڿ����̴�.
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
