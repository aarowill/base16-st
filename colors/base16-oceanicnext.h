// Base16 OceanicNext dark - simple terminal color setup
// https://github.com/voronianski/oceanic-next-color-scheme
static const char *colorname[] = {
	/* Normal colors */
	"#1b2b34", /*  0: Base 00 - Black   */
	"#ec5f67", /*  1: Base 08 - Red     */
	"#99c794", /*  2: Base 0B - Green   */
	"#fac863", /*  3: Base 0A - Yellow  */
	"#6699cc", /*  4: Base 0D - Blue    */
	"#c594c5", /*  5: Base 0E - Magenta */
	"#5fb3b3", /*  6: Base 0C - Cyan    */
	"#c0c5ce", /*  7: Base 05 - White   */

	/* Bright colors */
	"#65737e", /*  8: Base 03 - Bright Black */
	"#f99157", /* 16: Base 09 */
	"#343d46", /* 18: Base 01 */
	"#4f5b66", /* 19: Base 02 */
	"#a7adba", /* 20: Base 04 */
	"#cdd3de", /* 21: Base 06 */
	"#ab7967", /* 17: Base 0F */
	"#d8dee9", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#c0c5ce", /* default fg: Base 05 */
	[257] = "#1b2b34", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
