
class Node {

    private:
        int id;
        double voltage;

    public:
        void Node(void);
        void ~Node(void);
        void setId(int id);
        int getId(void);
        void setVoltage(double voltage);
        double getVoltage(void);
}