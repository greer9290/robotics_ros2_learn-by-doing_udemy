#include <rclcpp/rclcpp.hpp>
#include <string>

using std::placeholders::_1;

class SimpleParameter : public rclcpp::Node
{
public:k
    SimpleParameter() : Node("simple_parameter")
    {
        declare_parameter<int>("simple_int_param", 31);
        declare_parameter<std::string>("simple_string_param", "Ben");

        param_callback_handle_ = add_on_set_parameters_callback(std::bind(&SimpleParameter::paramChangeCallback, this, _1));
    }
private:
    OnSetParametersCallbackHandle::SharedPtr param_callback_handle_;

    paramChangeCallback
}