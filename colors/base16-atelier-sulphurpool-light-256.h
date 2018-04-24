// Base16 Atelier Sulphurpool Light dark - simple terminal color setup
// Bram de Haan (http://atelierbramdehaan.nl)
static const char *colorname[] = {
	/* Normal colors */
	"#f5f7ff", /*  0: Base 00 - Black   */
	"#c94922", /*  1: Base 08 - Red     */
	"#ac9739", /*  2: Base 0B - Green   */
	"#c08b30", /*  3: Base 0A - Yellow  */
	"#3d8fd1", /*  4: Base 0D - Blue    */
	"#6679cc", /*  5: Base 0E - Magenta */
	"#22a2c9", /*  6: Base 0C - Cyan    */
	"#5e6687", /*  7: Base 05 - White   */

	/* Bright colors */
	"#898ea4", /*  8: Base 03 - Bright Black */
	"#c94922", /*  9: Base 08 - Red          */
	"#ac9739", /* 10: Base 0B - Green        */
	"#c08b30", /* 11: Base 0A - Yellow       */
	"#3d8fd1", /* 12: Base 0D - Blue         */
	"#6679cc", /* 13: Base 0E - Magenta      */
	"#22a2c9", /* 14: Base 0C - Cyan         */
	"#202746", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#c76b29", /* 16: Base 09 */
	"#9c637a", /* 17: Base 0F */
	"#dfe2f1", /* 18: Base 01 */
	"#979db4", /* 19: Base 02 */
	"#6b7394", /* 20: Base 04 */
	"#293256", /* 21: Base 06 */

	[255] = 0,

	[256] = "#5e6687", /* default fg: Base 05 */
	[257] = "#f5f7ff", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
