#include "Warehouse.h"


void Warehouse::setWarehouseId(int id)
{
    warehouseId = id;
}

void Warehouse::setWarehouseName(string name)
{
    warehouseName = name;
}

void Warehouse::setWarehouseValue(double value)
{
    warehouseValue += value;
}

void Warehouse::setWarehouseStock(int quantity)
{
    warehouseStock += quantity;
}

int Warehouse::getWarehouseId()
{
    return warehouseId;
}

string Warehouse::getWarehouseName()
{
    return warehouseName;
}

double Warehouse::getWarehouseValue()
{
    return warehouseValue;
}

int Warehouse::getWarehouseStock()
{
    return warehouseStock;
}

