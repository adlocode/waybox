#ifndef _WB_OUTPUT_H
#define _WB_OUTPUT_H

#include <stdlib.h>
#include <time.h>

#include "waybox/server.h"

struct wb_output {
	struct wlr_output *wlr_output;
	struct wb_server *server;

	struct {
		struct wlr_scene_tree *shell_background;
		struct wlr_scene_tree *shell_bottom;
		struct wlr_scene_tree *shell_fullscreen;
		struct wlr_scene_tree *shell_overlay;
		struct wlr_scene_tree *shell_top;
	} layers;

#if ! WLR_CHECK_VERSION(0, 17, 0)
	/* DEPRECATED: Use a tool like swaybg instead */
	struct wlr_scene_rect *background;
#endif
	struct wlr_box geometry;

	struct wl_listener destroy;
	struct wl_listener frame;
	struct wl_listener request_state;

	struct wl_list link;
};

struct wb_view {
	struct wl_list link;
	struct wb_server *server;
	struct wlr_xdg_toplevel *xdg_toplevel;
	struct wlr_xwayland_surface *xwayland_surface;
	struct wlr_scene_tree *scene_tree;

	struct wlr_xdg_toplevel_decoration_v1 *decoration;

	struct wl_listener map;
	struct wl_listener unmap;
	struct wl_listener destroy;
	struct wl_listener new_popup;
	struct wl_listener request_fullscreen;
	struct wl_listener request_maximize;
	struct wl_listener request_minimize;
	struct wl_listener request_move;
	struct wl_listener request_resize;

	struct wlr_box geometry;
	struct wlr_box previous_geometry;
};

void output_frame_notify(struct wl_listener* listener, void *data);
void output_destroy_notify(struct wl_listener* listener, void *data);
void new_output_notify(struct wl_listener* listener, void *data);

#endif /* output.h */
