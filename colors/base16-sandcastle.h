// Base16 Sandcastle dark - simple terminal color setup
// George Essig (https://github.com/gessig)
static const char *colorname[] = {
	/* Normal colors */
	"#282c34", /*  0: Base 00 - Black   */
	"#83a598", /*  1: Base 08 - Red     */
	"#528b8b", /*  2: Base 0B - Green   */
	"#a07e3b", /*  3: Base 0A - Yellow  */
	"#83a598", /*  4: Base 0D - Blue    */
	"#d75f5f", /*  5: Base 0E - Magenta */
	"#83a598", /*  6: Base 0C - Cyan    */
	"#a89984", /*  7: Base 05 - White   */

	/* Bright colors */
	"#665c54", /*  8: Base 03 - Bright Black */
	"#a07e3b", /* 16: Base 09 */
	"#2c323b", /* 18: Base 01 */
	"#3e4451", /* 19: Base 02 */
	"#928374", /* 20: Base 04 */
	"#d5c4a1", /* 21: Base 06 */
	"#a87322", /* 17: Base 0F */
	"#fdf4c1", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#a89984", /* default fg: Base 05 */
	[257] = "#282c34", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
