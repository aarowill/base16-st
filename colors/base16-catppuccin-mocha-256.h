// Base16 Catppuccin Mocha dark - simple terminal color setup
// https://github.com/catppuccin/catppuccin
static const char *colorname[] = {
	/* Normal colors */
	"#1e1e2e", /*  0: Base 00 - Black   */
	"#f38ba8", /*  1: Base 08 - Red     */
	"#a6e3a1", /*  2: Base 0B - Green   */
	"#f9e2af", /*  3: Base 0A - Yellow  */
	"#89b4fa", /*  4: Base 0D - Blue    */
	"#cba6f7", /*  5: Base 0E - Magenta */
	"#94e2d5", /*  6: Base 0C - Cyan    */
	"#cdd6f4", /*  7: Base 05 - White   */

	/* Bright colors */
	"#45475a", /*  8: Base 03 - Bright Black */
	"#f38ba8", /*  9: Base 08 - Red          */
	"#a6e3a1", /* 10: Base 0B - Green        */
	"#f9e2af", /* 11: Base 0A - Yellow       */
	"#89b4fa", /* 12: Base 0D - Blue         */
	"#cba6f7", /* 13: Base 0E - Magenta      */
	"#94e2d5", /* 14: Base 0C - Cyan         */
	"#b4befe", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#fab387", /* 16: Base 09 */
	"#f2cdcd", /* 17: Base 0F */
	"#181825", /* 18: Base 01 */
	"#313244", /* 19: Base 02 */
	"#585b70", /* 20: Base 04 */
	"#f5e0dc", /* 21: Base 06 */

	[255] = 0,

	[256] = "#cdd6f4", /* default fg: Base 05 */
	[257] = "#1e1e2e", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
