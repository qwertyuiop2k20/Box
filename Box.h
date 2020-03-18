#ifndef _BOX_H_
#define _BOX_H_

class Box		//паралелепіпед
{
    private:
        double width,	//ширина
               height,	//довжина
               depth;	//висота
    public:
        Box();	//конструктор присвоєння по замовчуванню
        Box(double _w, double _h, double _d);	//конструктор присвоєння з трьома параметрами
        Box(double _len);	//конструктор присвоєння з одним параметром (куб)
        Box(const Box& ob);	//конструктор копіювання
        //--------------
        void set_width(double _w) { width = _w; }
        double get_width() { return width; }
        void set_height(double _h) { height = _h; }
        double get_height() { return height; }
        void set_depth(double _d) { depth = _d; }
        double get_depth() { return depth; }
        //--------------
        double Objem();
        ~Box();	//деструктор
};

#endif //end Box.h
