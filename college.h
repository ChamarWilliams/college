//Guards
#ifndef COLLEGE_H //If file not defined then keep reading.
#define COLLEGE_H //Define the file.

//typedef allows using th short type name "GradeType" instead of specifying "enum GradeType" every reference.
 typedef enum { //A data structure of named integers from o - n ("GRADE_LETTER" = 0, "GRADE_PERCENT" = 1, ect.).
     GRADE_LETTER,
     GRADE_PERCENT,
     GRADE_PASS_FAIL
 } GradeType;

//File end, everything in between is a guarded region.
#endif//COLLEGE_H
