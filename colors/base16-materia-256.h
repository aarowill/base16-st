// Base16 Materia dark - simple terminal color setup
// Defman21
static const char *colorname[] = {
	/* Normal colors */
	"#263238", /*  0: Base 00 - Black   */
	"#ec5f67", /*  1: Base 08 - Red     */
	"#8bd649", /*  2: Base 0B - Green   */
	"#ffcc00", /*  3: Base 0A - Yellow  */
	"#89ddff", /*  4: Base 0D - Blue    */
	"#82aaff", /*  5: Base 0E - Magenta */
	"#80cbc4", /*  6: Base 0C - Cyan    */
	"#cdd3de", /*  7: Base 05 - White   */

	/* Bright colors */
	"#707880", /*  8: Base 03 - Bright Black */
	"#ec5f67", /*  9: Base 08 - Red          */
	"#8bd649", /* 10: Base 0B - Green        */
	"#ffcc00", /* 11: Base 0A - Yellow       */
	"#89ddff", /* 12: Base 0D - Blue         */
	"#82aaff", /* 13: Base 0E - Magenta      */
	"#80cbc4", /* 14: Base 0C - Cyan         */
	"#ffffff", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#ea9560", /* 16: Base 09 */
	"#ec5f67", /* 17: Base 0F */
	"#2c393f", /* 18: Base 01 */
	"#37474f", /* 19: Base 02 */
	"#c9ccd3", /* 20: Base 04 */
	"#d5dbe5", /* 21: Base 06 */

	[255] = 0,

	[256] = "#cdd3de", /* default fg: Base 05 */
	[257] = "#263238", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
