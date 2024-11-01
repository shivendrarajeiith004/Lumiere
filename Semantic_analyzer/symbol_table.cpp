#include "symbol_table.h"
#include <iostream>

// Constructors for DataRecord with line and column numbers
void DataRecord::display(int scope_level) const {
  std::cout << "Identifier Name: " << identifier_name << " | Type: "
            << (identifier_type == TYPE::PRIMITIVE ? "PRIMITIVE" : "CLUSTER")
            << " | Element Type: ";
  switch (element_type) {
  case ELEMENT_TYPE::INT:
    std::cout << "INT";
    break;
  case ELEMENT_TYPE::FLOAT:
    std::cout << "FLOAT";
    break;
  case ELEMENT_TYPE::CHAR:
    std::cout << "CHAR";
    break;
  case ELEMENT_TYPE::BOOL:
    std::cout << "BOOL";
    break;
  case ELEMENT_TYPE::STRING:
    std::cout << "STRING";
    break;
  case ELEMENT_TYPE::VECT:
    std::cout << "VECT";
    break;
  case ELEMENT_TYPE::VOID:
    std::cout << "VOID";
    break;
  }
  std::cout << " | Dimensions: ";
  for (const auto &dim : dimensions) {
    std::cout << dim << " ";
  }
  std::cout << "| Scope Level: " << scope_level << " | Line: " << line_no
            << " | Column: " << col_no << std::endl;
}

void SymbolTableVAR::addVar(std::string name, TYPE type, ELEMENT_TYPE eleType,
                            int line_no, int col_no,
                            std::vector<int> dimensions) {
  for (const auto &var : variable_list) {
    if (var->getName() == name) {
      std::string errorMsg =
          "Variable " + name +
          " already declared at the same scope level on line " +
          std::to_string(var->getLineNo()) + ":" +
          std::to_string(var->getColNo());
      yyerror(errorMsg);
      return;
    }
  }
  variable_list.push_back(
      new DataRecord(name, type, eleType, dimensions, line_no, col_no));
}

void SymbolTableVAR::addVar(std::vector<std::string> names, TYPE type,
                            ELEMENT_TYPE eleType,
                            std::vector<std::vector<int>> dimensions,
                            int line_no, int col_no) {
  for (size_t i = 0; i < names.size(); ++i) {
    const auto &name = names[i];
    std::vector<int> dim =
        (i < dimensions.size()) ? dimensions[i] : std::vector<int>{};
    addVar(name, type, eleType, line_no, col_no, dim);
  }
}

void SymbolTableVAR::addVarList() {}

DataRecord *SymbolTableVAR::getVar(std::string name, int scope) {
  DataRecord *result = nullptr;
  for (const auto &var : variable_list) {
    if (var->getName() == name) {
      result = var;
      break;
    }
  }
  if (!result) {
    std::string errorMsg =
        "Error: Variable " + name + " not found in scope " + "\n";
    yyerror(errorMsg);
  }
  return result;
}

void SymbolTableVAR::displayInfo(int scope_level) {
  std::cout << "Symbol Table Variables:\n";
  for (const auto &var : variable_list) {
    var->display(scope_level);
  }
}
