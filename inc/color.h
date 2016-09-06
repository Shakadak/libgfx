#ifndef COLOR_H
# define COLOR_H

t_color	new_color(unsigned char const b,
		unsigned char const g,
		unsigned char const r,
		unsigned char const a);
t_color	linear_interpolation(t_color const src,
		t_color const end,
		double const factor);

#endif
