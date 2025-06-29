/*Maksim Lazarev st128707@student.spbu.ru
second tusk a*/

#include <iostream>
#include <fstream>
#include <filesystem>


int main() {

  std::ifstream infile("input.txt", std::ios::binary);
  int fileSize = std::filesystem::file_size("input.txt");
  std::cout << "Размер файла: " << fileSize << "\n";

  char* buffer = new char[fileSize];
  infile.read(buffer, fileSize);

  for (int i = 0; i < fileSize / 2; i++) {
    std::swap(buffer[i], buffer[fileSize - i - 1]);
  }

  std::ofstream outfile("output.bin", std::ios::binary);
  outfile.write(buffer, fileSize);

  infile.close();
  outfile.close();

  delete[] buffer;
  return 0;
}