#pragma once
#include "Windows.Xbox.Input.NavigationController.g.h"

// WARNING: This file is automatically generated by a tool. Do not directly
// add this file to your project, as any changes you make will be lost.
// This file is a stub you can use as a starting point for your implementation.
//
// To add a copy of this file to your project:
//   1. Copy this file from its original location to the location where you store 
//      your other source files (e.g. the project root). 
//   2. Add the copied file to your project. In Visual Studio, you can use 
//      Project -> Add Existing Item.
//   3. Delete this comment and the 'static_assert' (below) from the copied file.
//      Do not modify the original file.
//
// To update an existing file in your project:
//   1. Copy the relevant changes from this file and merge them into the copy 
//      you made previously.
//    
// This assertion helps prevent accidental modification of generated files.


namespace winrt::Windows::Xbox::Input::implementation
{
    struct NavigationController : NavigationControllerT<NavigationController>
    {
        NavigationController() = default;

        static winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Input::INavigationController> NavigationControllers();
        static winrt::event_token NavigationControllerAdded(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::NavigationControllerAddedEventArgs> const& handler);
        static void NavigationControllerAdded(winrt::event_token const& token) noexcept;
        static winrt::event_token NavigationControllerRemoved(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::NavigationControllerRemovedEventArgs> const& handler);
        static void NavigationControllerRemoved(winrt::event_token const& token) noexcept;
        uint64_t Id();
        hstring Type();
        winrt::Windows::Xbox::System::User User();
        winrt::Windows::Xbox::Input::INavigationReading GetNavigationReading();
        winrt::Windows::Xbox::Input::RawNavigationReading GetRawNavigationReading();
        winrt::event_token NavigationReadingChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Input::NavigationController, winrt::Windows::Xbox::Input::INavigationReadingChangedEventArgs> const& handler);
        void NavigationReadingChanged(winrt::event_token const& token) noexcept;
    };
}
namespace winrt::Windows::Xbox::Input::factory_implementation
{
    struct NavigationController : NavigationControllerT<NavigationController, implementation::NavigationController>
    {
    };
}
