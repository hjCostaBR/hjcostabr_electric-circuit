
class Branch {

    private:
        int id;
        vector<Segment> segments;

    public:
        void ~Branch(void);
        void setId(int id);
        int getId(void);
        void addSegment(Segment segment);
        vector<Segment> getSegments(void);
        void removeSegment(int id);
}