// ���������� ������� ��������� ����������� �� ������ �������. �������� ������� min_from_top_sector(), ������� ����� �������� �������� ������, ����������� ��� ���� ����� �������� �������, ������� ������� ����������, ������������ ���� ������.
#include <iostream>

const int c_kM = 5;
typedef int Matrix[c_kM][c_kM];

int min_from_top_sector(Matrix& m)
{
    min = m[0][0];
    for (int i = 0; i < (c_kM / 2 + c_kM % 2); i++)
    {
        for (int j = i; j < c_kM - i; j++)
            if (min > m[i][j])
                min = m[i][j];
    }

    return min;
}

int _tmain(int argc, _TCHAR* argv[])
{
	Matrix matrix;

	std::cout << min_from_top_sector(matrix) << std::endl;

	return 0;
}
