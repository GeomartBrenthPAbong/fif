#include<iostream>
#include <png.h>

int main(int argc, char *argv[])
{
    const char *sample = "images/sample1.png";
    FILE *fp = fopen(sample, "rb");

    png_structp png = png_create_read_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);
    
    if(!png)
        abort();
    
    png_infop info = png_create_info_struct(png);
    if(!info)
        abort();

    if(setjmp(png_jmpbuf(png)))
        abort();

    png_init_io(png, fp);
    png_read_info(png, info);

    int width      = png_get_image_width(png, info);
    int height     = png_get_image_height(png, info);
    png_byte color_type = png_get_color_type(png, info);
    png_byte bit_depth = png_get_bit_depth(png, info);

    std::cout << "This is a test";
    std::cout << "width: " << width;
    std::cout << "height: " << height;

    return 0;
}