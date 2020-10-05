// Base16 vulcan dark - simple terminal color setup
// Andrey Varfolomeev
static const char *colorname[] = {
	/* Normal colors */
	"#041523", /*  0: Base 00 - Black   */
	"#818591", /*  1: Base 08 - Red     */
	"#977d7c", /*  2: Base 0B - Green   */
	"#adb4b9", /*  3: Base 0A - Yellow  */
	"#977d7c", /*  4: Base 0D - Blue    */
	"#9198a3", /*  5: Base 0E - Magenta */
	"#977d7c", /*  6: Base 0C - Cyan    */
	"#5b778c", /*  7: Base 05 - White   */

	/* Bright colors */
	"#7a5759", /*  8: Base 03 - Bright Black */
	"#818591", /*  9: Base 08 - Red          */
	"#977d7c", /* 10: Base 0B - Green        */
	"#adb4b9", /* 11: Base 0A - Yellow       */
	"#977d7c", /* 12: Base 0D - Blue         */
	"#9198a3", /* 13: Base 0E - Magenta      */
	"#977d7c", /* 14: Base 0C - Cyan         */
	"#214d68", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#9198a3", /* 16: Base 09 */
	"#977d7c", /* 17: Base 0F */
	"#122339", /* 18: Base 01 */
	"#003552", /* 19: Base 02 */
	"#6b6977", /* 20: Base 04 */
	"#333238", /* 21: Base 06 */

	[255] = 0,

	[256] = "#5b778c", /* default fg: Base 05 */
	[257] = "#041523", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
