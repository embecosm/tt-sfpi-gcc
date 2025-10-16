// { dg-do-compile }
// { dg-options "-mcpu=tt-wh" }

int main (void) {
  __builtin_riscv_ttrocc_llk_intf_write(0, 15); // { dg-final { "scan-assembler" "tt\.rocc\.llk_intf_write" } }
  unsigned long value = __builtin_riscv_ttrocc_llk_intf_read(0); // { dg-final { "scan-assembler" "tt\.rocc\.llk_intf_read" } }
}
