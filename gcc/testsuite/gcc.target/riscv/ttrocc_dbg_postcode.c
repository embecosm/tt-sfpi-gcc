// { dg-do-compile }
// { dg-options "-mcpu=tt-wh" }

int main(void) {
  __builtin_riscv_ttrocc_dbg_postcode(1); // { dg-final { "scan-assembler" "tt\.rocc\.dbg_postcode\t1" } }
}
