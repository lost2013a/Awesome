

//#include <_exports.h>
//EXPORT_FUNC(get_version)
//EXPORT_FUNC(getc)
//EXPORT_FUNC(tstc)
//EXPORT_FUNC(putc)
//EXPORT_FUNC(puts)
//EXPORT_FUNC(printf)
//EXPORT_FUNC(install_hdlr)
//EXPORT_FUNC(free_hdlr)
//EXPORT_FUNC(malloc)
//EXPORT_FUNC(free)
//EXPORT_FUNC(udelay)
//EXPORT_FUNC(get_timer)
//EXPORT_FUNC(vprintf)
//EXPORT_FUNC(do_reset)
//EXPORT_FUNC(getenv)
//EXPORT_FUNC(setenv)
//EXPORT_FUNC(simple_strtoul)
//EXPORT_FUNC(strict_strtoul)
//EXPORT_FUNC(simple_strtol)
//EXPORT_FUNC(strcmp)
//EXPORT_FUNC(i2c_write)
//EXPORT_FUNC(i2c_read)
//EXPORT_FUNC(spi_init)
//EXPORT_FUNC(spi_setup_slave)
//EXPORT_FUNC(spi_free_slave)
//EXPORT_FUNC(spi_claim_bus)
//EXPORT_FUNC(spi_release_bus)
//EXPORT_FUNC(spi_xfer)
//enum {
//#define EXPORT_FUNC(x) XF_ ## x ,
//#include <_exports.h>
//#undef EXPORT_FUNC

//	XF_MAX
//};



#define EXPORT_FUNC(sym) gd->jt[XF_##sym] = (void *)sym;



void jumptable_init(void)
{
	gd->jt = malloc(XF_MAX * sizeof(void *));
#include <_exports.h>
}
