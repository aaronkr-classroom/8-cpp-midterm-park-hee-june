#pragma once

#ifndef GUARD_analysis_h
#define GUARD_analysis_h


#include "Student_info.h"
#include "grade.h"
#include "median.h"
#include "util.h"


bool did_all_hw(const Student_info&);
double grade_aux(const Student_info&);
double median_analysis(const vector<Student_info>&);
double optimimstic_median(const Student_info&);
double optimistic_median_analysis(const vector<Student_info>&);
double average(const vector<double>&);
double average_grade(const Student_info&);
double average_analysis(const vector<Student_info>&);
void write_analysis(ostream& out, const string& ,
	double analsis(const vector<Student_info>&),
	const vector < Student_info>& ,
	const vector<Student_info>& );

#endif