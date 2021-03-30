#include "settingstools.h"

template<>
int settingstools::variant_cast<int>(const QVariant& variant, const int& default_value) {
    auto cast_result = true;
    auto value = variant.toInt(&cast_result);
    return cast_result ? value : default_value;
}

template<>
QString settingstools::variant_cast<QString>(const QVariant& variant, const QString& default_value) {
    auto value = variant.toString();
    return !value.isEmpty() ? value : default_value;
}
