#include <cstdlib>
#include <map>
#include <string>
#include <vector>
#ifndef SYM_TAB_HPP
#define SYM_TAB_HPP

extern void yyerror(std::string s);
enum class TYPE { PRIMITIVE, CLUSTER };

enum class ELEMENT_TYPE {
  INT,
  FLOAT,
  CHAR,
  BOOL,
  STRING,
  VECT,
  VOID,
};

class DataRecord {
private:
  std::string identifier_name;
  TYPE identifier_type;
  ELEMENT_TYPE element_type;
  std::vector<int> dimensions;
  int line_no;
  int col_no;

public:
  DataRecord() = default;

  DataRecord(const std::string &name, TYPE type, ELEMENT_TYPE ele_type,
             const std::vector<int> &dim_list, int line = 0, int col = 0)
      : identifier_name(name), identifier_type(type), element_type(ele_type),
        dimensions(dim_list), line_no(line), col_no(col) {}

  DataRecord(const std::string &name, TYPE type, ELEMENT_TYPE ele_type,
             int line = 0, int col = 0)
      : identifier_name(name), identifier_type(type), element_type(ele_type),
        line_no(line), col_no(col) {}

  // Accessor methods
  std::string getName() const { return identifier_name; }
  TYPE getType() const { return identifier_type; }
  ELEMENT_TYPE getElementType() const { return element_type; }
  std::vector<int> getDimensions() const { return dimensions; }
  int getLineNo() const { return line_no; }
  int getColNo() const { return col_no; }

  void display(int scopeLevel) const;
};

class SymbolTableVAR {
private:
  int surr_scope;
  std::vector<DataRecord *> variable_list;

public:
  SymbolTableVAR(int surr_scope);
  void addVar(std::string name, TYPE type, ELEMENT_TYPE eleType, int line_no,
              int col_no, std::vector<int> dimensions = {});
  void addVar(std::vector<std::string> names, TYPE type, ELEMENT_TYPE eleType,
              std::vector<std::vector<int>> dimensions = {}, int line_no = 0,
              int col_no = 0);
  void addVarList(SymbolTableVAR *oldSymT);
  DataRecord *getVar(std::string name);
  void displayInfo(int scopeLevel);

  int get_surr_scope();
  std::vector<DataRecord *> getVarList();
  // Destructor to clean up dynamically allocated DataRecords
  ~SymbolTableVAR() {
    for (auto var : variable_list) {
      delete var;
    }
    variable_list.clear();
  }
};

DataRecord *get_var(std::map<int, SymbolTableVAR *>, std::string name,
                    int curr_scope);

#endif
