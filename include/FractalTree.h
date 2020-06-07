class FractalTree{
private:
    float offset_angle;
    float min_length;
    float divisor;
public:
    FractalTree();
    FractalTree(float angle);
    FractalTree(float angle, float length);
    FractalTree(float angle, float length, float d);
    void set_offset_angle(float angle);
    void add_to_offset_angle(float angle);
    void set_min_length(float length);
    void add_to_min_length(float length);
    void set_divisor(float d);
    void add_to_divisor(float d);
    void draw(float x, float y, float angle, float length);
    void kbin(int key, int x, int y);
};
