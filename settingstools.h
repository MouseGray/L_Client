#ifndef SETTINGSTOOLS_H
#define SETTINGSTOOLS_H

#include <QString>
#include <QSettings>

namespace settingstools {
    template<typename T>
    T variant_cast(const QVariant& variant, const T& default_value);

    template<>
    int variant_cast<int>(const QVariant& variant, const int& default_value);

    template<>
    QString variant_cast<QString>(const QVariant& variant, const QString& default_value);

    template<typename T>
    void settings_value(T& var, char const* var_name, QSettings* settings) {
        auto val = settings->value(var_name, var);
        var = variant_cast<T>(val, var);
    }

    #define get_value(var, settings) settings_value(var, #var, settings)
    #define set_value(var, settings) settings->setValue(#var, var)
}

template <typename T>
struct closeable : public T {
    template<typename ...Args>
    closeable(Args&&... args) : T(std::forward<Args>(args)...) {
    }
    ~closeable(){
        close();
    }
};

#endif // SETTINGSTOOLS_H
