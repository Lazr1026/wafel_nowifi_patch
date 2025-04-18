#include <wafel/patch.h>

// This fn runs before everything else in kernel mode.
// It should be used to do extremely early patches
// (ie to BSP and kernel, which launches before MCP)
// It jumps to the real IOS kernel entry on exit.
__attribute__((target("arm")))
void kern_main()
{
    // Make sure relocs worked fine and mappings are good
    debug_printf("we in here WiFi patch kern %p\n", kern_main);

    debug_printf("init_linking symbol at: %08x\n", wafel_find_symbol("init_linking"));

    // Make opening /dev/net/ifmgr/ncl not depend on /dev/net/ifmgr/wd
    ASM_PATCH_K(0x12309ad4,
        "mov r1, r5\n"
        "nop"
    );

    debug_printf("WiFi patches applied!\n");
}

// This fn runs before MCP's main thread, and can be used
// to perform late patches and spawn threads under MCP.
// It must return.
void mcp_main()
{


}
