void myprint(char* text) {
  printf(text + "\n");
}

void init() {
  libjlog_init(myprint, "Awesome OS");
  libjlog_printf("System", "I am booting now", 1)
}
