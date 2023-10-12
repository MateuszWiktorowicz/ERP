#include <iostream>

using namespace std;

class Warehouse
{
    int warehouseId;
    string warehouseName;
    double warehouseValue;
    int warehouseStock;

public:
    Warehouse(int id, string name, int value = 0, int stock = 0)
    :  warehouseId(id), warehouseName(name), warehouseValue(value), warehouseStock(stock) {}

    void setWarehouseId(int id);
    void setWarehouseName(string name);
    void setWarehouseValue(double value);
    void setWarehouseStock(int quantity);

    int getWarehouseId();
    string getWarehouseName();
    double getWarehouseValue();
    int getWarehouseStock();

};
