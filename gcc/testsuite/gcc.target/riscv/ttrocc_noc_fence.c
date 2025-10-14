// { dg-do-compile }
// { dg-options "-mcpu=tt-wh" }

int main(void) {
  __builtin_riscv_ttrocc_noc_fence(); // { dg-final { "scan-assembler" "tt\.rocc\.noc_fence" } }
}
