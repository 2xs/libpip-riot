#ifndef __FAE_CRT0_CONTEXT_H__
#define __FAE_CRT0_CONTEXT_H__

/**
 * @brief Data structure that describes the memory layout
 * required by the CRT0 to execute the relocatable binary
 */
typedef struct crt0_ctx_s {
    /*
     * Start address of the binary in the NVM
     */
    void *bin_base;
    /**
     * Start address of the available free RAM
     */
    void *ram_start;
    /**
     * End address of the available free RAM
     */
    void *ram_end;
    /**
     * Start address of the free NVM
     */
    void *nvm_start;
    /**
     * End address of the free NVM
     */
    void *nvm_end;
    /*
     * Table of function pointers for functions used by CRT0 and/or stdriot.
     */
    const void **syscall_table;
    /**
     * Arguments passed to the relocatable binary.
     * This is up to caller and callee to agree on a common arguments type.
     */
    void *argv;
} crt0_ctx_t;

#endif /*  __FAE_CRT0_CONTEXT_H__ */
