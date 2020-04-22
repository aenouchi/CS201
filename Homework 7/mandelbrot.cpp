/**
*mandelbrot.cpp
*Homework 7
*Aaron Nouchi
*CS 201
*Jon Genetti
*April 13,2020
*/

#include <iostream>
#include <vector>
#include "Color3.hpp"
#include "Image3.hpp"
#include <cmath>
#include <fstream>
#include <sstream>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;
using std::ifstream;
using std::ofstream;

//Wikipedia Psuedo code
//for each pixel(Px, Py) on the screen do
//x0 = scaled x coordinate of pixel(scaled to lie in the Mandelbrot X scale(-2.5, 1))
//y0 = scaled y coordinate of pixel(scaled to lie in the Mandelbrot Y scale(-1, 1))
//x : = 0.0
//y : = 0.0
//iteration : = 0
//max_iteration : = 1000
//while (x×x + y×y ? 2×2 AND iteration < max_iteration) do
//    xtemp : = x×x - y×y + x0
//    y : = 2×x×y + y0
//    x : = xtemp
//    iteration : = iteration + 1
//
//    color : = palette[iteration]
//    plot(Px, Py, color)

void mandelbrot(Image3& image) {

	int w = (int)image.w; //width
	int h = (int)image.h;// height

	for (int i = 0; i < w; i++)
	{
		for (int j = 0; j < h; j++)
		{

			int x = i;
			int y = j;

			double x0 = ((double)x / (double)w) * 3.5 - 2.5;

			double y0 = ((double)y / (double)h) * 2 - 1;

			double x_val = 0.0;

			double y_val = 0.0;

			int iteration = 0.0;

			int max_iteration = 1000;

			while (x_val * x_val + y_val * y_val <= 2 * 2 * 2 * 2 && iteration < max_iteration) {

				double x_temp = (double)x_val * x_val - y_val * y_val + x0;

				double y_temp = (double)2 * x_val * y_val + y0;

				y_val = y_temp;

				x_val = x_temp;

				iteration++;
			}

			int r, g, b;
			r = iteration * 15;
			g = r / 3;
			b = g / 2;

			image.setPixel(x, y, Color3(r, g, b));
		}
	}
}



	int main()
{
		double scale = 0.2;
		unsigned width = (unsigned)(5120 * scale);
		unsigned height = (unsigned)(2098 * scale);

		
		Image3 image(width, height);

		
		mandelbrot(image);

		cout << image << endl;


	}