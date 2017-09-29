
class Segment {

    protected:
        int id;
        Node node1;
        Node node2;

    public:
        void Segment(Node node1, Node node2);
        void ~Segment(void);
        void setId(int id);
        int getId(void);
        double getVoltage(void);
        double getCurrent(void);
        double getElectricPower(void);
}