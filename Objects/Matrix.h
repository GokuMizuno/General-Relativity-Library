//simple matrix class
#ifndef MATRIX_H
#define MATRIX_H
#pragma once

#include <vector>
#include <omp>

template<typename Object>
class Matrix
{
	public:
		matrix(int rows, int columns) : array(rows)
		{
			#pragma omp parallel
			for(auto &thisRow : array)
				thisRow.resize(columns);
		}

		matrix(std::vector<std::vector<Object>> v : array{v} {}
		matrix(std::vector<std::vector<Object>> &&v : array{std::move(v)} {}
		const std::vector<Object> & operator [](int row) const {  return array[row];  }
		const std::vector<Object> & operator [](int row) {  return array[row];  }
		int numRows() const {  return array.size();  }
		int numCols() const {  return numRows() ? array[0].size : 0;  }

		/*An identity matrix is one that has the identity element down the diagonal
		  but zero everywhere else.  For R^n, I = 1.*/
		matrix Id(int dim)
		{
			matrix mat = Id(dim, dim);
			return mat;
		}

		matrix Id(int row, int col)
		{
			//construct matrix
			mat = new matrix(row, col);
			//assert it was made
			//assert(mat, blahblah)
			//then
			#pragma omp parallel
			for (int i = 0; i < row, i++)
			{
				for (int j = 0; j < col; j++)
				{
					if (i == j)  mat[i][j] = 1;
					else  mat[i][j] = 0;
				}
			}
			return mat;
		}

		matrix Zero(int dim)
		{
			matrix mat = Zero(dim, dim);
			return mat;
		}

		matrix Zero(int row, int col)
		{
			mat = new matrix(row, col);
			//assert

			#pragma omp parallel
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
				{
					mat[i][j] = 0;
				}
			}
			return mat;
		}

		//matrix diag(int dim = 4, ...)
		//{
		//	;
		//}
		//matrix diag(std::vector<Object> v)
		//{
		//	//put at diags
		//	for(auto i : v)
		//}

	private:
		std::vector<std::vector<Object>> array;
};
#endif
