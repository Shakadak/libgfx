#define PIX_H
# define PIX_H

void				clear_image(t_img img);
void				draw_line(t_img const img,
		t_pix const start,
		t_pix const end);
void				draw_basic_line(t_img const img,
		t_pix const start,
		t_pix const end);
void				draw_rectangle(t_img const img,
		t_pix const start,
		t_pix const end);
void				apply_image(t_win const win,
		t_img const img,
		t_pos const origin);

#endif
