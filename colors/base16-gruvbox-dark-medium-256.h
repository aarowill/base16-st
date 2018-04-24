// Base16 Gruvbox dark, medium dark - simple terminal color setup
// Dawid Kurek (dawikur@gmail.com), morhetz (https://github.com/morhetz/gruvbox)
static const char *colorname[] = {
	/* Normal colors */
	"#282828", /*  0: Base 00 - Black   */
	"#fb4934", /*  1: Base 08 - Red     */
	"#b8bb26", /*  2: Base 0B - Green   */
	"#fabd2f", /*  3: Base 0A - Yellow  */
	"#83a598", /*  4: Base 0D - Blue    */
	"#d3869b", /*  5: Base 0E - Magenta */
	"#8ec07c", /*  6: Base 0C - Cyan    */
	"#d5c4a1", /*  7: Base 05 - White   */

	/* Bright colors */
	"#665c54", /*  8: Base 03 - Bright Black */
	"#fb4934", /*  9: Base 08 - Red          */
	"#b8bb26", /* 10: Base 0B - Green        */
	"#fabd2f", /* 11: Base 0A - Yellow       */
	"#83a598", /* 12: Base 0D - Blue         */
	"#d3869b", /* 13: Base 0E - Magenta      */
	"#8ec07c", /* 14: Base 0C - Cyan         */
	"#fbf1c7", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#fe8019", /* 16: Base 09 */
	"#d65d0e", /* 17: Base 0F */
	"#3c3836", /* 18: Base 01 */
	"#504945", /* 19: Base 02 */
	"#bdae93", /* 20: Base 04 */
	"#ebdbb2", /* 21: Base 06 */

	[255] = 0,

	[256] = "#d5c4a1", /* default fg: Base 05 */
	[257] = "#282828", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
