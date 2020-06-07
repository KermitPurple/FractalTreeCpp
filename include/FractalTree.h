class FractalTree{
private:
public:
    float offset_angle = 45;
    FractalTree();
    FractalTree(float angle);
    void set_offset_angle(float angle);
    void add_to_offset_angle(float angle);
    void draw();
};
