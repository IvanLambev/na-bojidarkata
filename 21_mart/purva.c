#include <stdio.h>
#include <limits.h>

int main()
{
    printf("%-20s %-7s %-4s %-20s %-20s %-20s %-20s\n", "Type", "Format", "Bytes", "Max Signed Value", "Min Signed Value", "Max Unsigned Value", "Shape of Unsigned");
    printf("%-20s %-7s %-4zu %-20lld %-20lld %-20llu %-20llu\n", "char", "%hhd", sizeof(char), CHAR_MAX, CHAR_MIN, (unsigned char)-1, (unsigned char)0);
    printf("%-20s %-7s %-4zu %-20hd %-20hd %-20hu %-20hu\n", "short", "%hd", sizeof(short), SHRT_MAX, SHRT_MIN, (unsigned short)-1, (unsigned short)0);
    printf("%-20s %-7s %-4zu %-20d %-20d %-20u %-20u\n", "int", "%d", sizeof(int), INT_MAX, INT_MIN, (unsigned int)-1, (unsigned int)0);
    printf("%-20s %-7s %-4zu %-20ld %-20ld %-20lu %-20lu\n", "long", "%ld", sizeof(long), LONG_MAX, LONG_MIN, (unsigned long)-1, (unsigned long)0);
    printf("%-20s %-7s %-4zu %-20lld %-20lld %-20llu %-20llu\n", "long long", "%lld", sizeof(long long), LLONG_MAX, LLONG_MIN, (unsigned long long)-1, (unsigned long long)0);
    printf("%-20s %-7s %-4zu %-20hhu %-20hhu %-20hhu %-20hhu\n", "unsigned char", "%hhu", sizeof(unsigned char), (unsigned char)-1, 0, (unsigned char)-1, (unsigned char)0);
    printf("%-20s %-7s %-4zu %-20hu %-20hu %-20hu %-20hu\n", "unsigned short", "%hu", sizeof(unsigned short), (unsigned short)-1, 0, (unsigned short)-1, (unsigned short)0);
    printf("%-20s %-7s %-4zu %-20u %-20u %-20u %-20u\n", "unsigned int", "%u", sizeof(unsigned int), (unsigned int)-1, 0, (unsigned int)-1, (unsigned int)0);
    printf("%-20s %-7s %-4zu %-20lu %-20lu %-20lu %-20lu\n", "unsigned long", "%lu", sizeof(unsigned long), (unsigned long)-1, 0, (unsigned long)-1, (unsigned long)0);
    printf("%-20s %-7s %-4zu %-20llu %-20llu %-20llu %-20llu\n", "unsigned long long", "%llu", sizeof(unsigned long long), (unsigned long long)-1, 0, (unsigned long long)-1, (unsigned long long)0);
    return 0;
}
