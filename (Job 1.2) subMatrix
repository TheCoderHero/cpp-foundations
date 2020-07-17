#include <iostream>
#include <vector>

std::vector<std::vector<int>> constructSubmatrix
  (std::vector<std::vector<int>> matrix, 
	std::vector<int> rowsToDelete, 
	std::vector<int> columnsToDelete);

int main(){
	std::vector<std::vector<int>> myVector;
	std::vector<int> tempVector;
	std::vector<int> tempVector2;
	std::vector<int> tempVector3;

	tempVector.push_back(1);
	tempVector.push_back(0);
	tempVector.push_back(0);
	tempVector.push_back(2);

	tempVector2.push_back(0);
	tempVector2.push_back(5);
	tempVector2.push_back(0);
	tempVector2.push_back(1);

	tempVector3.push_back(0);
	tempVector3.push_back(0);
	tempVector3.push_back(3);
	tempVector3.push_back(5);

	myVector.push_back(tempVector);
	myVector.push_back(tempVector2);
	myVector.push_back(tempVector3);

	std::cout << myVector[0][0] << std::endl;

	std::vector<int> myRows;
	std::vector<int> myCols;

	myCols.push_back(0);

	std::vector<std::vector<int>> myNewVector = constructSubmatrix(myVector, myRows, myCols);

	system("pause");

	return 0;
}


std::vector<std::vector<int>> constructSubmatrix
  (std::vector<std::vector<int>> matrix, 
	std::vector<int> rowsToDelete, 
	std::vector<int> columnsToDelete) {

	for (int x = 0; x < rowsToDelete.size(); x++)
		matrix.erase(matrix.begin() + rowsToDelete[x]);

	std::cout << "Finished Deleting Rows" << std::endl;

	for (std::vector<std::vector<int>>::size_type i = 0; i < matrix.size(); i++)
	{
		for (std::vector<int>::size_type j = 0; j < matrix[i].size(); j++)
		{
			std::cout << matrix[i][j] << ' ';
		}
		std::cout << std::endl;
	}

	for (int y = 0; y < matrix.size(); y++) {
		int iteratorCounter = 0;
		for (int z = 0; z < columnsToDelete.size(); z++) {
			int columnToDeleteValue = columnsToDelete[z];
			columnToDeleteValue -= iteratorCounter;
			matrix[y].erase(matrix[y].begin() + columnToDeleteValue);
			iteratorCounter++;
		}
	}

	std::cout << "Finished Deleting Columns" << std::endl;

	for (std::vector<std::vector<int>>::size_type i = 0; i < matrix.size(); i++)
	{
		for (std::vector<int>::size_type j = 0; j < matrix[i].size(); j++)
		{
			std::cout << matrix[i][j] << ' ';
		}
		std::cout << std::endl;
	}

	return matrix;

}
