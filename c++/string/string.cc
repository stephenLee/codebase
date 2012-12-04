// implementation string interface
int strlen(const char *a) {
  int i;
  for (i = 0; a[i] != 0; i++);
  return i;
}

char *strcpy(char *a, const char *b) {
  for (int i = 0; (a[i] = b[i]) != 0; i++);
  return a;
}

int strcmp(const char *a, const char *b) {
  int i;
  for (i = 0; a[i] == b[i]; i++)
    if (a[i] == 0) return 0;
  return a[i] - b[i];
}

int strncmp(const char *a, const char *b, int n) {
  int i;
  for (i = 0; i<n && a[i] != 0; i++)
    if (a[i] != b[i]) return a[i] - b[i];
  return 0;
}

char *strcat(char *a, const char *b) {
  int i, j;
  for (i = 0; a[i] != 0; i++);
  for (j = 0; b[j] != 0; i++, j++)
    a[i] = b[j];
  return a;
}


