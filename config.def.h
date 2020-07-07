/* See LICENSE file for copyright and license details. */

static int topbar = 1;
static const char *fonts[] = {
  "Dank Mono:pixelsize=13",
  "Apple Emoji"
};
static const char *prompt      = NULL;
static const char *colors[SchemeLast][2] = {
  [SchemeNorm] = { "#e6e9ed", "#2d2d2d" },
  [SchemeSel] = { "#e6e9ed", "#b48cad" },
  [SchemeOut] = { "#000000", "#00ffff" },
};
static unsigned int lines      = 0;

static const char worddelimiters[] = " ";
