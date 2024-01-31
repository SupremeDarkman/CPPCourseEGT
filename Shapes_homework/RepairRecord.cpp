#include <iostream>
#include <cstring>
void EnterStats(char string[], int n)
{
	std::cin.get(string, n, '\n');
	std::cin.ignore(n, '\n');
}
struct RepairRecord
{
	const int LICENSE_PLATE = 11;
	const int OWNER_NAME = 16;
	const int REPAIR_DESCRIPTION = 24;

	char licensePlate[11];
	char ownerName[16];
	char repairDescription[24];
	double repairCost;

	int laborHour;
	RepairRecord() : licensePlate("-"), ownerName("-"), repairDescription("-"), repairCost(0), laborHour(0)
	{
	}
	RepairRecord(char LicensePlate[], char OwnerName[], char RepairDescription[], double RepairCost, int LaborHour)
	{
		strcpy_s(licensePlate, LICENSE_PLATE, LicensePlate);
		strcpy_s(ownerName, OWNER_NAME, OwnerName);
		strcpy_s(repairDescription, REPAIR_DESCRIPTION, RepairDescription);
		repairCost = RepairCost;
		laborHour = LaborHour;
	}
	~RepairRecord()
	{

	}

	void addRepairRecord()
	{
		std::cout << "Enter the car's plate number ";
		std::cin.get(licensePlate,11, '\n');
		std::cin.ignore(11, '\n');

		std::cout << "\nEnter the owner's name ";
		EnterStats(ownerName, 16);

		std::cout << "\nEnter the repair description ";
		EnterStats(repairDescription, 24);
		
		std::cout << "\nEnter the repair cost: ";
		std::cin >> repairCost;

		std::cout << "\nEnter the labour hours: ";
		std::cin >> laborHour;

	}
	void displayRepairRecords()
	{
		std::cout << "license plate: " << licensePlate;
		std::cout << "\nOwner name: " << ownerName;
		std::cout << "\nRepair Description: " << repairDescription;
		std::cout << "\nrepair Cost: " << repairCost;
		std::cout << "\nlabour hour: " << laborHour;
	}
};



int main()
{

	RepairRecord test1;
	test1.displayRepairRecords();
	RepairRecord("CC 0240 CP", "Asparuh", "tyre damaged", 23.45, 1);
	//std::cin.get(r.licensePlate, 11, '\n');
	//std::cin.ignore(15, '\n');//safty

	//std::cout << r.licensePlate;


	//int selectionNum;
	//std::cout << "What you want to select: ";
	//std::cin >> selectionNum;
	//switch (selectionNum)
	//{
	//case 1: r.addRepairRecord();
	//case 2: r.displayRepairRecords();
	//default:
	//	break;
	//}
	//char test[12] = {};
	//EnterStats(test, 12);


    return 0;
}
