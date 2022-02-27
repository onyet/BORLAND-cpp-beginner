#include "iostream"

using namespace std;

template <class T, class U>
T smaller(T a, U b) {
  return (a < b ? a : b);
}
// tempalte digunakan untuk pembuatan function dengan tipe data yang tidak diketahuitau generic

// tempplate juga bisa dugunakan pada class
template <class T>
class Pair {
 private:
  T first, second;
 public:
  Pair (T a, T b):
   first(a), second(b) {
  }
  T bigger();
};

template <class T>
T Pair<T>::bigger() {
  return (first>second ? first : second);
}

template <class T>
class MyClass {
 public:
  MyClass (T x) {
   cout <<x<<" -  not a char"<<endl;
  }
};

template < >
class MyClass<char> {
 public:
  MyClass (char x) {
   cout <<x<<" is a char!"<<endl;
  }
};

int main () {
    int x=72;
    double y=15.34;

    Pair <int> obj(11, 22);
    Pair <double> obj2(23.43, 5.68);

    MyClass<int> ob1(42);
    MyClass<double> ob2(5.47);
    MyClass<char> ob3('s');

    cout << obj.bigger();
    cout << obj2.bigger();
    cout << smaller(x, y) << endl;
}
