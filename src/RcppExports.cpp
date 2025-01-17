// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// C_time_get
Rcpp::List C_time_get(const NumericVector& dt, const CharacterVector& components, const int week_start);
RcppExport SEXP _timechange_C_time_get(SEXP dtSEXP, SEXP componentsSEXP, SEXP week_startSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type dt(dtSEXP);
    Rcpp::traits::input_parameter< const CharacterVector& >::type components(componentsSEXP);
    Rcpp::traits::input_parameter< const int >::type week_start(week_startSEXP);
    rcpp_result_gen = Rcpp::wrap(C_time_get(dt, components, week_start));
    return rcpp_result_gen;
END_RCPP
}
// C_time_ceiling
Rcpp::newDatetimeVector C_time_ceiling(const NumericVector dt, const std::string unit_name, const double nunits, const int week_start, const bool change_on_boundary);
RcppExport SEXP _timechange_C_time_ceiling(SEXP dtSEXP, SEXP unit_nameSEXP, SEXP nunitsSEXP, SEXP week_startSEXP, SEXP change_on_boundarySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector >::type dt(dtSEXP);
    Rcpp::traits::input_parameter< const std::string >::type unit_name(unit_nameSEXP);
    Rcpp::traits::input_parameter< const double >::type nunits(nunitsSEXP);
    Rcpp::traits::input_parameter< const int >::type week_start(week_startSEXP);
    Rcpp::traits::input_parameter< const bool >::type change_on_boundary(change_on_boundarySEXP);
    rcpp_result_gen = Rcpp::wrap(C_time_ceiling(dt, unit_name, nunits, week_start, change_on_boundary));
    return rcpp_result_gen;
END_RCPP
}
// C_time_floor
Rcpp::newDatetimeVector C_time_floor(const NumericVector dt, const std::string unit_name, const double nunits, const int week_start);
RcppExport SEXP _timechange_C_time_floor(SEXP dtSEXP, SEXP unit_nameSEXP, SEXP nunitsSEXP, SEXP week_startSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector >::type dt(dtSEXP);
    Rcpp::traits::input_parameter< const std::string >::type unit_name(unit_nameSEXP);
    Rcpp::traits::input_parameter< const double >::type nunits(nunitsSEXP);
    Rcpp::traits::input_parameter< const int >::type week_start(week_startSEXP);
    rcpp_result_gen = Rcpp::wrap(C_time_floor(dt, unit_name, nunits, week_start));
    return rcpp_result_gen;
END_RCPP
}
// C_local_tz
Rcpp::CharacterVector C_local_tz();
RcppExport SEXP _timechange_C_local_tz() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(C_local_tz());
    return rcpp_result_gen;
END_RCPP
}
// C_valid_tz
Rcpp::LogicalVector C_valid_tz(const Rcpp::CharacterVector& tz_name);
RcppExport SEXP _timechange_C_valid_tz(SEXP tz_nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::CharacterVector& >::type tz_name(tz_nameSEXP);
    rcpp_result_gen = Rcpp::wrap(C_valid_tz(tz_name));
    return rcpp_result_gen;
END_RCPP
}
// C_time_update
Rcpp::newDatetimeVector C_time_update(const Rcpp::NumericVector& dt, const Rcpp::List& updates, const SEXP tz, const std::string roll_month, const std::string roll_dst, const int week_start);
RcppExport SEXP _timechange_C_time_update(SEXP dtSEXP, SEXP updatesSEXP, SEXP tzSEXP, SEXP roll_monthSEXP, SEXP roll_dstSEXP, SEXP week_startSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type dt(dtSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type updates(updatesSEXP);
    Rcpp::traits::input_parameter< const SEXP >::type tz(tzSEXP);
    Rcpp::traits::input_parameter< const std::string >::type roll_month(roll_monthSEXP);
    Rcpp::traits::input_parameter< const std::string >::type roll_dst(roll_dstSEXP);
    Rcpp::traits::input_parameter< const int >::type week_start(week_startSEXP);
    rcpp_result_gen = Rcpp::wrap(C_time_update(dt, updates, tz, roll_month, roll_dst, week_start));
    return rcpp_result_gen;
END_RCPP
}
// C_time_add
Rcpp::newDatetimeVector C_time_add(const Rcpp::NumericVector& dt, const Rcpp::List& periods, const std::string roll_month, const std::string roll_dst);
RcppExport SEXP _timechange_C_time_add(SEXP dtSEXP, SEXP periodsSEXP, SEXP roll_monthSEXP, SEXP roll_dstSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type dt(dtSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type periods(periodsSEXP);
    Rcpp::traits::input_parameter< const std::string >::type roll_month(roll_monthSEXP);
    Rcpp::traits::input_parameter< const std::string >::type roll_dst(roll_dstSEXP);
    rcpp_result_gen = Rcpp::wrap(C_time_add(dt, periods, roll_month, roll_dst));
    return rcpp_result_gen;
END_RCPP
}
// C_force_tz
Rcpp::newDatetimeVector C_force_tz(const NumericVector dt, const CharacterVector tz, const std::string roll_dst);
RcppExport SEXP _timechange_C_force_tz(SEXP dtSEXP, SEXP tzSEXP, SEXP roll_dstSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector >::type dt(dtSEXP);
    Rcpp::traits::input_parameter< const CharacterVector >::type tz(tzSEXP);
    Rcpp::traits::input_parameter< const std::string >::type roll_dst(roll_dstSEXP);
    rcpp_result_gen = Rcpp::wrap(C_force_tz(dt, tz, roll_dst));
    return rcpp_result_gen;
END_RCPP
}
// C_force_tzs
newDatetimeVector C_force_tzs(const NumericVector dt, const CharacterVector tzs, const CharacterVector tz_out, const std::string roll_dst);
RcppExport SEXP _timechange_C_force_tzs(SEXP dtSEXP, SEXP tzsSEXP, SEXP tz_outSEXP, SEXP roll_dstSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector >::type dt(dtSEXP);
    Rcpp::traits::input_parameter< const CharacterVector >::type tzs(tzsSEXP);
    Rcpp::traits::input_parameter< const CharacterVector >::type tz_out(tz_outSEXP);
    Rcpp::traits::input_parameter< const std::string >::type roll_dst(roll_dstSEXP);
    rcpp_result_gen = Rcpp::wrap(C_force_tzs(dt, tzs, tz_out, roll_dst));
    return rcpp_result_gen;
END_RCPP
}
// C_local_clock
NumericVector C_local_clock(const NumericVector dt, const CharacterVector tzs);
RcppExport SEXP _timechange_C_local_clock(SEXP dtSEXP, SEXP tzsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector >::type dt(dtSEXP);
    Rcpp::traits::input_parameter< const CharacterVector >::type tzs(tzsSEXP);
    rcpp_result_gen = Rcpp::wrap(C_local_clock(dt, tzs));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP C_parse_period(SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_timechange_C_time_get", (DL_FUNC) &_timechange_C_time_get, 3},
    {"_timechange_C_time_ceiling", (DL_FUNC) &_timechange_C_time_ceiling, 5},
    {"_timechange_C_time_floor", (DL_FUNC) &_timechange_C_time_floor, 4},
    {"_timechange_C_local_tz", (DL_FUNC) &_timechange_C_local_tz, 0},
    {"_timechange_C_valid_tz", (DL_FUNC) &_timechange_C_valid_tz, 1},
    {"_timechange_C_time_update", (DL_FUNC) &_timechange_C_time_update, 6},
    {"_timechange_C_time_add", (DL_FUNC) &_timechange_C_time_add, 4},
    {"_timechange_C_force_tz", (DL_FUNC) &_timechange_C_force_tz, 3},
    {"_timechange_C_force_tzs", (DL_FUNC) &_timechange_C_force_tzs, 4},
    {"_timechange_C_local_clock", (DL_FUNC) &_timechange_C_local_clock, 2},
    {"C_parse_period", (DL_FUNC) &C_parse_period, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_timechange(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
