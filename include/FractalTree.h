class FractalTree{
private:
public:
    float offset_angle;
    float min_length;
    float divisor;
    FractalTree();
    FractalTree(float angle);
    FractalTree(float angle, float length);
    FractalTree(float angle, float length, float d);
    void set_offset_angle(float angle);
    void add_to_offset_angle(float angle);
    void draw(float x, float y, float angle, float length);
};
