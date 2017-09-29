
class ElectricCircuit {
    
    private:
        vector<Branch> branches;

    public:
        void ElectricCircuit(void);
        void ~ElectricCircuit(void);
        void calculateCircuit(void);
        void addBranch(Branch branch);
        void removeBranch(int id);
        vector<Branch> getBranches(void);
}