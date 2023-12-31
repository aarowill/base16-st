// Base16 Catppuccin Latte dark - simple terminal color setup
// https://github.com/catppuccin/catppuccin
static const char *colorname[] = {
	/* Normal colors */
	"#eff1f5", /*  0: Base 00 - Black   */
	"#d20f39", /*  1: Base 08 - Red     */
	"#40a02b", /*  2: Base 0B - Green   */
	"#df8e1d", /*  3: Base 0A - Yellow  */
	"#1e66f5", /*  4: Base 0D - Blue    */
	"#8839ef", /*  5: Base 0E - Magenta */
	"#179299", /*  6: Base 0C - Cyan    */
	"#4c4f69", /*  7: Base 05 - White   */

	/* Bright colors */
	"#bcc0cc", /*  8: Base 03 - Bright Black */
	"#d20f39", /*  9: Base 08 - Red          */
	"#40a02b", /* 10: Base 0B - Green        */
	"#df8e1d", /* 11: Base 0A - Yellow       */
	"#1e66f5", /* 12: Base 0D - Blue         */
	"#8839ef", /* 13: Base 0E - Magenta      */
	"#179299", /* 14: Base 0C - Cyan         */
	"#7287fd", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#fe640b", /* 16: Base 09 */
	"#dd7878", /* 17: Base 0F */
	"#e6e9ef", /* 18: Base 01 */
	"#ccd0da", /* 19: Base 02 */
	"#acb0be", /* 20: Base 04 */
	"#dc8a78", /* 21: Base 06 */

	[255] = 0,

	[256] = "#4c4f69", /* default fg: Base 05 */
	[257] = "#eff1f5", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
