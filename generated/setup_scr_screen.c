/*
 * Copyright 2022 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "custom.h"

static int screen_analog_clock_1_hour_value = 3;
static int screen_analog_clock_1_min_value = 20;
static int screen_analog_clock_1_sec_value = 50;
void screen_analog_clock_1_timer(lv_timer_t *timer)
{	clock_count(&screen_analog_clock_1_hour_value, &screen_analog_clock_1_min_value, &screen_analog_clock_1_sec_value);
	if (lv_obj_is_valid(guider_ui.screen_analog_clock_1))
	{
		lv_analogclock_set_time(guider_ui.screen_analog_clock_1, screen_analog_clock_1_hour_value, screen_analog_clock_1_min_value, screen_analog_clock_1_sec_value);
	}
}

void setup_scr_screen(lv_ui *ui){

	//Write codes screen
	ui->screen = lv_obj_create(NULL);
	lv_obj_set_scrollbar_mode(ui->screen, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_main_main_default
	static lv_style_t style_screen_main_main_default;
	if (style_screen_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_main_main_default);
	else
		lv_style_init(&style_screen_main_main_default);
	lv_style_set_bg_color(&style_screen_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_opa(&style_screen_main_main_default, 0);
	lv_obj_add_style(ui->screen, &style_screen_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_img2
	ui->screen_img2 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_img2, 570, 100);
	lv_obj_set_size(ui->screen_img2, 597, 511);
	lv_obj_set_scrollbar_mode(ui->screen_img2, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_img2_main_main_default
	static lv_style_t style_screen_img2_main_main_default;
	if (style_screen_img2_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_img2_main_main_default);
	else
		lv_style_init(&style_screen_img2_main_main_default);
	lv_style_set_img_recolor(&style_screen_img2_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_img2_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_img2_main_main_default, 125);
	lv_obj_add_style(ui->screen_img2, &style_screen_img2_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_img2, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_img2,&_scan_example_597x511);
	lv_img_set_pivot(ui->screen_img2, 0,0);
	lv_img_set_angle(ui->screen_img2, 0);

	//Write codes screen_slider0
	ui->screen_slider0 = lv_slider_create(ui->screen);
	lv_obj_set_pos(ui->screen_slider0, 77, 423);
	lv_obj_set_size(ui->screen_slider0, 426, 23);
	lv_obj_set_scrollbar_mode(ui->screen_slider0, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_slider0_main_main_default
	static lv_style_t style_screen_slider0_main_main_default;
	if (style_screen_slider0_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_slider0_main_main_default);
	else
		lv_style_init(&style_screen_slider0_main_main_default);
	lv_style_set_radius(&style_screen_slider0_main_main_default, 50);
	lv_style_set_bg_color(&style_screen_slider0_main_main_default, lv_color_make(0xc4, 0xcf, 0xcf));
	lv_style_set_bg_grad_color(&style_screen_slider0_main_main_default, lv_color_make(0xc1, 0xcc, 0xcd));
	lv_style_set_bg_grad_dir(&style_screen_slider0_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen_slider0_main_main_default, 255);
	lv_style_set_outline_color(&style_screen_slider0_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_outline_width(&style_screen_slider0_main_main_default, 0);
	lv_style_set_outline_opa(&style_screen_slider0_main_main_default, 0);
	lv_obj_add_style(ui->screen_slider0, &style_screen_slider0_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for style_screen_slider0_main_indicator_default
	static lv_style_t style_screen_slider0_main_indicator_default;
	if (style_screen_slider0_main_indicator_default.prop_cnt > 1)
		lv_style_reset(&style_screen_slider0_main_indicator_default);
	else
		lv_style_init(&style_screen_slider0_main_indicator_default);
	lv_style_set_radius(&style_screen_slider0_main_indicator_default, 50);
	lv_style_set_bg_color(&style_screen_slider0_main_indicator_default, lv_color_make(0x02, 0xa2, 0xb1));
	lv_style_set_bg_grad_color(&style_screen_slider0_main_indicator_default, lv_color_make(0x02, 0xa2, 0xb1));
	lv_style_set_bg_grad_dir(&style_screen_slider0_main_indicator_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen_slider0_main_indicator_default, 255);
	lv_obj_add_style(ui->screen_slider0, &style_screen_slider0_main_indicator_default, LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for style_screen_slider0_main_knob_default
	static lv_style_t style_screen_slider0_main_knob_default;
	if (style_screen_slider0_main_knob_default.prop_cnt > 1)
		lv_style_reset(&style_screen_slider0_main_knob_default);
	else
		lv_style_init(&style_screen_slider0_main_knob_default);
	lv_style_set_radius(&style_screen_slider0_main_knob_default, 50);
	lv_style_set_bg_color(&style_screen_slider0_main_knob_default, lv_color_make(0x02, 0xa2, 0xb1));
	lv_style_set_bg_grad_color(&style_screen_slider0_main_knob_default, lv_color_make(0x02, 0xa2, 0xb1));
	lv_style_set_bg_grad_dir(&style_screen_slider0_main_knob_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen_slider0_main_knob_default, 255);
	lv_obj_add_style(ui->screen_slider0, &style_screen_slider0_main_knob_default, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_slider_set_range(ui->screen_slider0,0, 100);
	lv_slider_set_value(ui->screen_slider0,50,false);

	//Write codes screen_label3
	ui->screen_label3 = lv_label_create(ui->screen);
	lv_obj_set_pos(ui->screen_label3, 112, 500);
	lv_obj_set_size(ui->screen_label3, 346, 147);
	lv_obj_set_scrollbar_mode(ui->screen_label3, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->screen_label3, "Please slide");
	lv_label_set_long_mode(ui->screen_label3, LV_LABEL_LONG_WRAP);

	//Write style state: LV_STATE_DEFAULT for style_screen_label3_main_main_default
	static lv_style_t style_screen_label3_main_main_default;
	if (style_screen_label3_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_label3_main_main_default);
	else
		lv_style_init(&style_screen_label3_main_main_default);
	lv_style_set_radius(&style_screen_label3_main_main_default, 0);
	lv_style_set_bg_color(&style_screen_label3_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen_label3_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen_label3_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen_label3_main_main_default, 0);
	lv_style_set_text_color(&style_screen_label3_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_screen_label3_main_main_default, &lv_font_arial_32);
	lv_style_set_text_letter_space(&style_screen_label3_main_main_default, 2);
	lv_style_set_text_line_space(&style_screen_label3_main_main_default, 0);
	lv_style_set_text_align(&style_screen_label3_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_pad_left(&style_screen_label3_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_label3_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_label3_main_main_default, 0);
	lv_style_set_pad_bottom(&style_screen_label3_main_main_default, 0);
	lv_obj_add_style(ui->screen_label3, &style_screen_label3_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_label4
	ui->screen_label4 = lv_label_create(ui->screen);
	lv_obj_set_pos(ui->screen_label4, 146, 126);
	lv_obj_set_size(ui->screen_label4, 266, 235);
	lv_obj_set_scrollbar_mode(ui->screen_label4, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->screen_label4, "50");
	lv_label_set_long_mode(ui->screen_label4, LV_LABEL_LONG_WRAP);

	//Write style state: LV_STATE_DEFAULT for style_screen_label4_main_main_default
	static lv_style_t style_screen_label4_main_main_default;
	if (style_screen_label4_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_label4_main_main_default);
	else
		lv_style_init(&style_screen_label4_main_main_default);
	lv_style_set_radius(&style_screen_label4_main_main_default, 0);
	lv_style_set_bg_color(&style_screen_label4_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen_label4_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen_label4_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen_label4_main_main_default, 0);
	lv_style_set_text_color(&style_screen_label4_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_screen_label4_main_main_default, &lv_font_arial_128);
	lv_style_set_text_letter_space(&style_screen_label4_main_main_default, 2);
	lv_style_set_text_line_space(&style_screen_label4_main_main_default, 0);
	lv_style_set_text_align(&style_screen_label4_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_pad_left(&style_screen_label4_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_label4_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_label4_main_main_default, 0);
	lv_style_set_pad_bottom(&style_screen_label4_main_main_default, 0);
	lv_obj_add_style(ui->screen_label4, &style_screen_label4_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	static bool screen_analog_clock_1_timer_enabled = false;

	//Write codes screen_analog_clock_1
	ui->screen_analog_clock_1 = lv_analogclock_create(ui->screen);
	lv_obj_set_pos(ui->screen_analog_clock_1, 179, 557);
	lv_obj_set_size(ui->screen_analog_clock_1, 200, 200);
	lv_analogclock_set_major_ticks(ui->screen_analog_clock_1, 2, 10, lv_color_make(0x55, 0x55, 0x55), 10);
	lv_analogclock_set_ticks(ui->screen_analog_clock_1, 2, 5, lv_color_make(0x33, 0x33, 0x33));
	lv_analogclock_set_hour_needle_line(ui->screen_analog_clock_1, 2, lv_color_make(0x00, 0xff, 0x00), -40);
	lv_analogclock_set_min_needle_line(ui->screen_analog_clock_1, 2, lv_color_make(0xE1, 0xFF, 0x00), -30);
	lv_analogclock_set_sec_needle_line(ui->screen_analog_clock_1, 2, lv_color_make(0x66, 0x00, 0xFF), -10);
	lv_analogclock_set_time(ui->screen_analog_clock_1, screen_analog_clock_1_hour_value, screen_analog_clock_1_min_value, screen_analog_clock_1_sec_value);

	//create timer
	if (!screen_analog_clock_1_timer_enabled) {
		lv_timer_create(screen_analog_clock_1_timer, 1000, NULL);
		screen_analog_clock_1_timer_enabled = true;
	}
	//Write style state: LV_STATE_DEFAULT for style_screen_analog_clock_1_main_main_default
	static lv_style_t style_screen_analog_clock_1_main_main_default;
	if (style_screen_analog_clock_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_analog_clock_1_main_main_default);
	else
		lv_style_init(&style_screen_analog_clock_1_main_main_default);
	lv_style_set_bg_color(&style_screen_analog_clock_1_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen_analog_clock_1_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen_analog_clock_1_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_analog_clock_1_main_main_default, 255);
	lv_style_set_border_color(&style_screen_analog_clock_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_border_width(&style_screen_analog_clock_1_main_main_default, 0);
	lv_style_set_border_opa(&style_screen_analog_clock_1_main_main_default, 255);
	lv_obj_add_style(ui->screen_analog_clock_1, &style_screen_analog_clock_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for style_screen_analog_clock_1_main_ticks_default
	static lv_style_t style_screen_analog_clock_1_main_ticks_default;
	if (style_screen_analog_clock_1_main_ticks_default.prop_cnt > 1)
		lv_style_reset(&style_screen_analog_clock_1_main_ticks_default);
	else
		lv_style_init(&style_screen_analog_clock_1_main_ticks_default);
	lv_style_set_text_color(&style_screen_analog_clock_1_main_ticks_default, lv_color_make(0xff, 0x00, 0x00));
	lv_style_set_text_font(&style_screen_analog_clock_1_main_ticks_default, &lv_font_simsun_12);
	lv_obj_add_style(ui->screen_analog_clock_1, &style_screen_analog_clock_1_main_ticks_default, LV_PART_TICKS|LV_STATE_DEFAULT);

	//Init events for screen
	events_init_screen(ui);
}