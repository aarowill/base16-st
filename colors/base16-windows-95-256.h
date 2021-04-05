// Base16 Windows 95 dark - simple terminal color setup
// Fergus Collins (https://github.com/C-Fergus)
static const char *colorname[] = {
	/* Normal colors */
	"#000000", /*  0: Base 00 - Black   */
	"#fc5454", /*  1: Base 08 - Red     */
	"#54fc54", /*  2: Base 0B - Green   */
	"#fcfc54", /*  3: Base 0A - Yellow  */
	"#5454fc", /*  4: Base 0D - Blue    */
	"#fc54fc", /*  5: Base 0E - Magenta */
	"#54fcfc", /*  6: Base 0C - Cyan    */
	"#a8a8a8", /*  7: Base 05 - White   */

	/* Bright colors */
	"#545454", /*  8: Base 03 - Bright Black */
	"#fc5454", /*  9: Base 08 - Red          */
	"#54fc54", /* 10: Base 0B - Green        */
	"#fcfc54", /* 11: Base 0A - Yellow       */
	"#5454fc", /* 12: Base 0D - Blue         */
	"#fc54fc", /* 13: Base 0E - Magenta      */
	"#54fcfc", /* 14: Base 0C - Cyan         */
	"#fcfcfc", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#a85400", /* 16: Base 09 */
	"#00a800", /* 17: Base 0F */
	"#1c1c1c", /* 18: Base 01 */
	"#383838", /* 19: Base 02 */
	"#7e7e7e", /* 20: Base 04 */
	"#d2d2d2", /* 21: Base 06 */

	[255] = 0,

	[256] = "#a8a8a8", /* default fg: Base 05 */
	[257] = "#000000", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
