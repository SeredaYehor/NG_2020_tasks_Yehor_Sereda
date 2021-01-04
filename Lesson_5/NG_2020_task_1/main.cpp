#include <iostream>
#include "computerpicker.h"
#include "Computer.h"
#include <string>

int main()
{
    computerpicker Data;
    Computer PC,Laptop;

    PC.addVideocard_info("MSI","geforce gtx 3060",26500,24);
    PC.addMotherboard_info("ASUS",5499,"LGA1151-V2","TUF GAMING B550-PLUS");
    PC.addCPU_info("Core i9 9900","Intel",12600,9,3.4,"LGA1151-V2",36);
    PC.setname("Kvantoviy razrushitel");
    Data.addComputer(PC);
    Laptop.addVideocard_info("MSI","geforce gtx 1080",18500,20);
    Laptop.addMotherboard_info("ASUS",5499,"LGA1156","Pushka 666 minus minus");
    Laptop.addCPU_info("Core i9 1070","Intel",15000,10,3.6,"LGA1156",41);
    Laptop.setname("Super releyka");
    Data.addComputer(Laptop);
    Data.find_for_CPU_banchmark(36);
    Data.find_for_socket("LGA1156");
    Data.find_for_price(44599);
    return 0;
}
