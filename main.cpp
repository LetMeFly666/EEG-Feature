/*
 * @Author: LetMeFly
 * @Date: 2022-04-22 21:07:21
 * @LastEditors: LetMeFly
 * @LastEditTime: 2022-04-26 12:19:36
 */
#include <MatFeature/MatFeature>
#include <MatFeature/Reader>
#include <Eigen/Dense>
#include <iostream>
#include <cstring>
using namespace std;
using Eigen::MatrixXd;

int main() {
    string sourceFile = "Datas/sample01.txt";
    MatrixXd mat = Read(sourceFile.c_str());
    MatFeature matFeature = MatFeature(mat);
    system("pause");
    return 0;
}