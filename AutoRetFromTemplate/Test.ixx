export module Test;

export import <memory>;

export
{

// Not using export block and only putting it before `template` keyword
// yields the same result. So does exporting it within a namespace.
// Adding explicit return type fixes the issue.
template <typename T, typename... Args>
auto makeUnique(Args&&... args) /*-> std::unique_ptr<T>*/
{
	return std::make_unique<T>(std::forward<Args>(args)...);
}

}