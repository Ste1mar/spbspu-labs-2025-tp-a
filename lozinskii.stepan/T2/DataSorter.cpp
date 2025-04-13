#include "DataSorter.hpp"
#include <algorithm>

bool compareDataStruct(const DataStruct& a, const DataStruct& b) {
    if (a.key1 != b.key1) return a.key1 < b.key1;
    if (a.key2 != b.key2) return a.key2 < b.key2;
    return a.key3.length() < b.key3.length();
}

void DataSorter::sort(std::vector<DataStruct>& data) {
    std::sort(data.begin(), data.end(), compareDataStruct);
}