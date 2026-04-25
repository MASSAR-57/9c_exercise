#include <iostream>
#include <vector>
#include <eigen3/Eigen/Dense>

using namespace Eigen;
using namespace std;

int main(void) {
    Matrix3d m;

    m << 1, 2, 3,
         4, 5, 6,
         7, 8, 9;

    cout << "m" << m << endl;
    cout << "m_inverse" << m.inverse() << endl;

    return 0;
}
