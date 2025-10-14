// { dg-do-compile }
// { dg-options "-mcpu=tt-wh" }

int main (void) {
  __builtin_riscv_ttrocc_fds_intf_write(0, 15); // { dg-final { "scan-assembler" "tt\.rocc\.fds_intf_write" } }
  unsigned long value = __builtin_riscv_ttrocc_fds_intf_read(0); // { dg-final { "scan-assembler" "tt\.rocc\.fds_intf_read" } }
}
