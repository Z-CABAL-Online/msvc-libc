// C++/WinRT v2.0.250303.1

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_UI_Input_Preview_Text_H
#define WINRT_Windows_UI_Input_Preview_Text_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.250303.1"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.250303.1"
#include "winrt/Windows.UI.Input.Preview.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.UI.Core.2.h"
#include "winrt/impl/Windows.UI.Text.Core.2.h"
#include "winrt/impl/Windows.UI.Input.Preview.Text.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_IConversionModeChangedEventArgs<D>::NewConversionMode() const
    {
        winrt::Windows::UI::Input::Preview::Text::TextConversionMode value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::IConversionModeChangedEventArgs>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::IConversionModeChangedEventArgs, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IConversionModeChangedEventArgs>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_NewConversionMode(reinterpret_cast<int32_t*>(&value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IConversionModeChangedEventArgs>**)this;
            check_hresult(_winrt_abi_type->get_NewConversionMode(reinterpret_cast<int32_t*>(&value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_IFocusEnteredEventArgs<D>::FocusedTextBoxInfo() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::IFocusEnteredEventArgs>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::IFocusEnteredEventArgs, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IFocusEnteredEventArgs>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_FocusedTextBoxInfo(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IFocusEnteredEventArgs>**)this;
            check_hresult(_winrt_abi_type->get_FocusedTextBoxInfo(&value));
        }
        return winrt::Windows::UI::Input::Preview::Text::TextBoxInfo{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_IInputDelegationModeChangedEventArgs<D>::DelegationOn() const
    {
        bool value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::IInputDelegationModeChangedEventArgs>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::IInputDelegationModeChangedEventArgs, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IInputDelegationModeChangedEventArgs>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_DelegationOn(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IInputDelegationModeChangedEventArgs>**)this;
            check_hresult(_winrt_abi_type->get_DelegationOn(&value));
        }
        return value;
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_IKeyEventReceivedEventArgs<D>::VirtualKey() const
    {
        winrt::Windows::System::VirtualKey value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::IKeyEventReceivedEventArgs>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::IKeyEventReceivedEventArgs, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyEventReceivedEventArgs>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_VirtualKey(reinterpret_cast<int32_t*>(&value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyEventReceivedEventArgs>**)this;
            check_hresult(_winrt_abi_type->get_VirtualKey(reinterpret_cast<int32_t*>(&value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_IKeyEventReceivedEventArgs<D>::KeyStatus() const
    {
        winrt::Windows::UI::Core::CorePhysicalKeyStatus value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::IKeyEventReceivedEventArgs>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::IKeyEventReceivedEventArgs, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyEventReceivedEventArgs>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_KeyStatus(put_abi(value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyEventReceivedEventArgs>**)this;
            check_hresult(_winrt_abi_type->get_KeyStatus(put_abi(value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_IKeyEventReceivedEventArgs<D>::Unicode() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::IKeyEventReceivedEventArgs>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::IKeyEventReceivedEventArgs, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyEventReceivedEventArgs>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Unicode(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyEventReceivedEventArgs>**)this;
            check_hresult(_winrt_abi_type->get_Unicode(&value));
        }
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_IKeyEventReceivedEventArgs<D>::Source() const
    {
        winrt::Windows::UI::Input::Preview::Text::KeyEventDeviceType value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::IKeyEventReceivedEventArgs>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::IKeyEventReceivedEventArgs, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyEventReceivedEventArgs>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Source(reinterpret_cast<int32_t*>(&value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyEventReceivedEventArgs>**)this;
            check_hresult(_winrt_abi_type->get_Source(reinterpret_cast<int32_t*>(&value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_IKeyEventReceivedEventArgs<D>::IsKeyPressed(winrt::Windows::System::VirtualKey const& vkey) const
    {
        bool result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::IKeyEventReceivedEventArgs>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::IKeyEventReceivedEventArgs, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyEventReceivedEventArgs>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->IsKeyPressed(static_cast<int32_t>(vkey), &result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyEventReceivedEventArgs>**)this;
            check_hresult(_winrt_abi_type->IsKeyPressed(static_cast<int32_t>(vkey), &result));
        }
        return result;
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_IKeyEventReceivedEventArgs<D>::IsToggleKeyOn(winrt::Windows::System::VirtualKey const& vkey) const
    {
        bool result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::IKeyEventReceivedEventArgs>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::IKeyEventReceivedEventArgs, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyEventReceivedEventArgs>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->IsToggleKeyOn(static_cast<int32_t>(vkey), &result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyEventReceivedEventArgs>**)this;
            check_hresult(_winrt_abi_type->IsToggleKeyOn(static_cast<int32_t>(vkey), &result));
        }
        return result;
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_IKeyEventReceivedEventArgs<D>::EditSession() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::IKeyEventReceivedEventArgs>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::IKeyEventReceivedEventArgs, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyEventReceivedEventArgs>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_EditSession(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyEventReceivedEventArgs>**)this;
            check_hresult(_winrt_abi_type->get_EditSession(&value));
        }
        return winrt::Windows::UI::Input::Preview::Text::TextEditSession{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_IKeyEventReceivedEventArgs<D>::Handled() const
    {
        bool value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::IKeyEventReceivedEventArgs>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::IKeyEventReceivedEventArgs, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyEventReceivedEventArgs>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Handled(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyEventReceivedEventArgs>**)this;
            check_hresult(_winrt_abi_type->get_Handled(&value));
        }
        return value;
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_IKeyEventReceivedEventArgs<D>::Handled(bool value) const
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::IKeyEventReceivedEventArgs>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::IKeyEventReceivedEventArgs, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyEventReceivedEventArgs>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->put_Handled(value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyEventReceivedEventArgs>**)this;
            check_hresult(_winrt_abi_type->put_Handled(value));
        }
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_IKeyboardInputProcessor<D>::InputProfile() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_InputProfile(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)this;
            check_hresult(_winrt_abi_type->get_InputProfile(&value));
        }
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_IKeyboardInputProcessor<D>::IsActive() const
    {
        bool value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_IsActive(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)this;
            check_hresult(_winrt_abi_type->get_IsActive(&value));
        }
        return value;
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_IKeyboardInputProcessor<D>::HasFocusedTextBox() const
    {
        bool value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_HasFocusedTextBox(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)this;
            check_hresult(_winrt_abi_type->get_HasFocusedTextBox(&value));
        }
        return value;
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_IKeyboardInputProcessor<D>::FocusedTextBoxId() const
    {
        winrt::Windows::UI::Input::Preview::Text::TextBoxId value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_FocusedTextBoxId(put_abi(value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)this;
            check_hresult(_winrt_abi_type->get_FocusedTextBoxId(put_abi(value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_IKeyboardInputProcessor<D>::FocusedTextBoxInfo() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_FocusedTextBoxInfo(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)this;
            check_hresult(_winrt_abi_type->get_FocusedTextBoxInfo(&value));
        }
        return winrt::Windows::UI::Input::Preview::Text::TextBoxInfo{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_IKeyboardInputProcessor<D>::FocusedTextBoxBounds() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_FocusedTextBoxBounds(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)this;
            check_hresult(_winrt_abi_type->get_FocusedTextBoxBounds(&value));
        }
        return winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::Rect>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_IKeyboardInputProcessor<D>::SelectionBounds() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_SelectionBounds(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)this;
            check_hresult(_winrt_abi_type->get_SelectionBounds(&value));
        }
        return winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::Rect>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_IKeyboardInputProcessor<D>::ConversionMode() const
    {
        winrt::Windows::UI::Input::Preview::Text::TextConversionMode value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_ConversionMode(reinterpret_cast<int32_t*>(&value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)this;
            check_hresult(_winrt_abi_type->get_ConversionMode(reinterpret_cast<int32_t*>(&value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_IKeyboardInputProcessor<D>::ConversionMode(winrt::Windows::UI::Input::Preview::Text::TextConversionMode const& value) const
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->put_ConversionMode(static_cast<int32_t>(value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)this;
            check_hresult(_winrt_abi_type->put_ConversionMode(static_cast<int32_t>(value)));
        }
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_IKeyboardInputProcessor<D>::CreateEditSession() const
    {
        void* result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->CreateEditSession(&result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)this;
            check_hresult(_winrt_abi_type->CreateEditSession(&result));
        }
        return winrt::Windows::UI::Input::Preview::Text::TextEditSession{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_IKeyboardInputProcessor<D>::Activated(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Preview::Text::KeyboardInputProcessor, winrt::Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->add_Activated(*(void**)(&handler), put_abi(token)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)this;
            check_hresult(_winrt_abi_type->add_Activated(*(void**)(&handler), put_abi(token)));
        }
        return token;
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_IKeyboardInputProcessor<D>::Activated(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Preview::Text::KeyboardInputProcessor, winrt::Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, Activated_revoker>(this, Activated(handler));
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_IKeyboardInputProcessor<D>::Activated(winrt::event_token const& token) const noexcept
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)&_winrt_casted_result;
            _winrt_abi_type->remove_Activated(impl::bind_in(token));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)this;
            _winrt_abi_type->remove_Activated(impl::bind_in(token));
        }
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_IKeyboardInputProcessor<D>::Deactivated(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Preview::Text::KeyboardInputProcessor, winrt::Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->add_Deactivated(*(void**)(&handler), put_abi(token)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)this;
            check_hresult(_winrt_abi_type->add_Deactivated(*(void**)(&handler), put_abi(token)));
        }
        return token;
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_IKeyboardInputProcessor<D>::Deactivated(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Preview::Text::KeyboardInputProcessor, winrt::Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, Deactivated_revoker>(this, Deactivated(handler));
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_IKeyboardInputProcessor<D>::Deactivated(winrt::event_token const& token) const noexcept
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)&_winrt_casted_result;
            _winrt_abi_type->remove_Deactivated(impl::bind_in(token));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)this;
            _winrt_abi_type->remove_Deactivated(impl::bind_in(token));
        }
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_IKeyboardInputProcessor<D>::KeyEventReceived(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Preview::Text::KeyboardInputProcessor, winrt::Windows::UI::Input::Preview::Text::KeyEventReceivedEventArgs> const& handler) const
    {
        winrt::event_token token{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->add_KeyEventReceived(*(void**)(&handler), put_abi(token)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)this;
            check_hresult(_winrt_abi_type->add_KeyEventReceived(*(void**)(&handler), put_abi(token)));
        }
        return token;
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_IKeyboardInputProcessor<D>::KeyEventReceived(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Preview::Text::KeyboardInputProcessor, winrt::Windows::UI::Input::Preview::Text::KeyEventReceivedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, KeyEventReceived_revoker>(this, KeyEventReceived(handler));
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_IKeyboardInputProcessor<D>::KeyEventReceived(winrt::event_token const& token) const noexcept
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)&_winrt_casted_result;
            _winrt_abi_type->remove_KeyEventReceived(impl::bind_in(token));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)this;
            _winrt_abi_type->remove_KeyEventReceived(impl::bind_in(token));
        }
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_IKeyboardInputProcessor<D>::FocusEntered(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Preview::Text::KeyboardInputProcessor, winrt::Windows::UI::Input::Preview::Text::FocusEnteredEventArgs> const& handler) const
    {
        winrt::event_token token{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->add_FocusEntered(*(void**)(&handler), put_abi(token)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)this;
            check_hresult(_winrt_abi_type->add_FocusEntered(*(void**)(&handler), put_abi(token)));
        }
        return token;
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_IKeyboardInputProcessor<D>::FocusEntered(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Preview::Text::KeyboardInputProcessor, winrt::Windows::UI::Input::Preview::Text::FocusEnteredEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, FocusEntered_revoker>(this, FocusEntered(handler));
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_IKeyboardInputProcessor<D>::FocusEntered(winrt::event_token const& token) const noexcept
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)&_winrt_casted_result;
            _winrt_abi_type->remove_FocusEntered(impl::bind_in(token));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)this;
            _winrt_abi_type->remove_FocusEntered(impl::bind_in(token));
        }
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_IKeyboardInputProcessor<D>::FocusRemoved(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Preview::Text::KeyboardInputProcessor, winrt::Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->add_FocusRemoved(*(void**)(&handler), put_abi(token)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)this;
            check_hresult(_winrt_abi_type->add_FocusRemoved(*(void**)(&handler), put_abi(token)));
        }
        return token;
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_IKeyboardInputProcessor<D>::FocusRemoved(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Preview::Text::KeyboardInputProcessor, winrt::Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, FocusRemoved_revoker>(this, FocusRemoved(handler));
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_IKeyboardInputProcessor<D>::FocusRemoved(winrt::event_token const& token) const noexcept
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)&_winrt_casted_result;
            _winrt_abi_type->remove_FocusRemoved(impl::bind_in(token));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)this;
            _winrt_abi_type->remove_FocusRemoved(impl::bind_in(token));
        }
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_IKeyboardInputProcessor<D>::ConversionModeChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Preview::Text::KeyboardInputProcessor, winrt::Windows::UI::Input::Preview::Text::ConversionModeChangedEventArgs> const& handler) const
    {
        winrt::event_token token{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->add_ConversionModeChanged(*(void**)(&handler), put_abi(token)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)this;
            check_hresult(_winrt_abi_type->add_ConversionModeChanged(*(void**)(&handler), put_abi(token)));
        }
        return token;
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_IKeyboardInputProcessor<D>::ConversionModeChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Preview::Text::KeyboardInputProcessor, winrt::Windows::UI::Input::Preview::Text::ConversionModeChangedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, ConversionModeChanged_revoker>(this, ConversionModeChanged(handler));
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_IKeyboardInputProcessor<D>::ConversionModeChanged(winrt::event_token const& token) const noexcept
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)&_winrt_casted_result;
            _winrt_abi_type->remove_ConversionModeChanged(impl::bind_in(token));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)this;
            _winrt_abi_type->remove_ConversionModeChanged(impl::bind_in(token));
        }
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_IKeyboardInputProcessor<D>::TextBoxInfoChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Preview::Text::KeyboardInputProcessor, winrt::Windows::UI::Input::Preview::Text::TextBoxInfoChangedEventArgs> const& handler) const
    {
        winrt::event_token token{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->add_TextBoxInfoChanged(*(void**)(&handler), put_abi(token)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)this;
            check_hresult(_winrt_abi_type->add_TextBoxInfoChanged(*(void**)(&handler), put_abi(token)));
        }
        return token;
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_IKeyboardInputProcessor<D>::TextBoxInfoChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Preview::Text::KeyboardInputProcessor, winrt::Windows::UI::Input::Preview::Text::TextBoxInfoChangedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, TextBoxInfoChanged_revoker>(this, TextBoxInfoChanged(handler));
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_IKeyboardInputProcessor<D>::TextBoxInfoChanged(winrt::event_token const& token) const noexcept
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)&_winrt_casted_result;
            _winrt_abi_type->remove_TextBoxInfoChanged(impl::bind_in(token));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)this;
            _winrt_abi_type->remove_TextBoxInfoChanged(impl::bind_in(token));
        }
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_IKeyboardInputProcessor<D>::TextBoxContentChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Preview::Text::KeyboardInputProcessor, winrt::Windows::UI::Input::Preview::Text::TextBoxContentChangedEventArgs> const& handler) const
    {
        winrt::event_token token{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->add_TextBoxContentChanged(*(void**)(&handler), put_abi(token)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)this;
            check_hresult(_winrt_abi_type->add_TextBoxContentChanged(*(void**)(&handler), put_abi(token)));
        }
        return token;
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_IKeyboardInputProcessor<D>::TextBoxContentChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Preview::Text::KeyboardInputProcessor, winrt::Windows::UI::Input::Preview::Text::TextBoxContentChangedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, TextBoxContentChanged_revoker>(this, TextBoxContentChanged(handler));
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_IKeyboardInputProcessor<D>::TextBoxContentChanged(winrt::event_token const& token) const noexcept
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)&_winrt_casted_result;
            _winrt_abi_type->remove_TextBoxContentChanged(impl::bind_in(token));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)this;
            _winrt_abi_type->remove_TextBoxContentChanged(impl::bind_in(token));
        }
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_IKeyboardInputProcessor<D>::CompositionTerminated(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Preview::Text::KeyboardInputProcessor, winrt::Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->add_CompositionTerminated(*(void**)(&handler), put_abi(token)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)this;
            check_hresult(_winrt_abi_type->add_CompositionTerminated(*(void**)(&handler), put_abi(token)));
        }
        return token;
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_IKeyboardInputProcessor<D>::CompositionTerminated(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Preview::Text::KeyboardInputProcessor, winrt::Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, CompositionTerminated_revoker>(this, CompositionTerminated(handler));
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_IKeyboardInputProcessor<D>::CompositionTerminated(winrt::event_token const& token) const noexcept
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)&_winrt_casted_result;
            _winrt_abi_type->remove_CompositionTerminated(impl::bind_in(token));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)this;
            _winrt_abi_type->remove_CompositionTerminated(impl::bind_in(token));
        }
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_IKeyboardInputProcessor<D>::ReconversionRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Preview::Text::KeyboardInputProcessor, winrt::Windows::UI::Input::Preview::Text::ReconversionRequestedEventArgs> const& handler) const
    {
        winrt::event_token token{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->add_ReconversionRequested(*(void**)(&handler), put_abi(token)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)this;
            check_hresult(_winrt_abi_type->add_ReconversionRequested(*(void**)(&handler), put_abi(token)));
        }
        return token;
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_IKeyboardInputProcessor<D>::ReconversionRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Preview::Text::KeyboardInputProcessor, winrt::Windows::UI::Input::Preview::Text::ReconversionRequestedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, ReconversionRequested_revoker>(this, ReconversionRequested(handler));
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_IKeyboardInputProcessor<D>::ReconversionRequested(winrt::event_token const& token) const noexcept
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)&_winrt_casted_result;
            _winrt_abi_type->remove_ReconversionRequested(impl::bind_in(token));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>**)this;
            _winrt_abi_type->remove_ReconversionRequested(impl::bind_in(token));
        }
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_IReconversionRequestedEventArgs<D>::Range() const
    {
        winrt::Windows::UI::Text::Core::CoreTextRange value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::IReconversionRequestedEventArgs>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::IReconversionRequestedEventArgs, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IReconversionRequestedEventArgs>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Range(put_abi(value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::IReconversionRequestedEventArgs>**)this;
            check_hresult(_winrt_abi_type->get_Range(put_abi(value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextBoxContentChangedEventArgs<D>::TextBoxId() const
    {
        winrt::Windows::UI::Input::Preview::Text::TextBoxId value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextBoxContentChangedEventArgs>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextBoxContentChangedEventArgs, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextBoxContentChangedEventArgs>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_TextBoxId(put_abi(value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextBoxContentChangedEventArgs>**)this;
            check_hresult(_winrt_abi_type->get_TextBoxId(put_abi(value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextBoxContentChangedEventArgs<D>::Source() const
    {
        winrt::Windows::UI::Input::Preview::Text::TextChangeSource value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextBoxContentChangedEventArgs>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextBoxContentChangedEventArgs, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextBoxContentChangedEventArgs>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Source(reinterpret_cast<int32_t*>(&value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextBoxContentChangedEventArgs>**)this;
            check_hresult(_winrt_abi_type->get_Source(reinterpret_cast<int32_t*>(&value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextBoxContentChangedEventArgs<D>::SelectionBounds() const
    {
        winrt::Windows::Foundation::Rect value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextBoxContentChangedEventArgs>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextBoxContentChangedEventArgs, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextBoxContentChangedEventArgs>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_SelectionBounds(put_abi(value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextBoxContentChangedEventArgs>**)this;
            check_hresult(_winrt_abi_type->get_SelectionBounds(put_abi(value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextBoxContentChangedEventArgs<D>::IsContentAttributeChanged(winrt::Windows::UI::Input::Preview::Text::TextBoxContentAttribute const& value) const
    {
        bool result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextBoxContentChangedEventArgs>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextBoxContentChangedEventArgs, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextBoxContentChangedEventArgs>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->IsContentAttributeChanged(static_cast<int32_t>(value), &result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextBoxContentChangedEventArgs>**)this;
            check_hresult(_winrt_abi_type->IsContentAttributeChanged(static_cast<int32_t>(value), &result));
        }
        return result;
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextBoxInfo<D>::Id() const
    {
        winrt::Windows::UI::Input::Preview::Text::TextBoxId value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextBoxInfo>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextBoxInfo, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextBoxInfo>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Id(put_abi(value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextBoxInfo>**)this;
            check_hresult(_winrt_abi_type->get_Id(put_abi(value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextBoxInfo<D>::InputScope() const
    {
        winrt::Windows::UI::Text::Core::CoreTextInputScope value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextBoxInfo>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextBoxInfo, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextBoxInfo>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_InputScope(reinterpret_cast<int32_t*>(&value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextBoxInfo>**)this;
            check_hresult(_winrt_abi_type->get_InputScope(reinterpret_cast<int32_t*>(&value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextBoxInfo<D>::AppName() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextBoxInfo>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextBoxInfo, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextBoxInfo>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_AppName(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextBoxInfo>**)this;
            check_hresult(_winrt_abi_type->get_AppName(&value));
        }
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextBoxInfo<D>::Url() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextBoxInfo>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextBoxInfo, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextBoxInfo>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Url(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextBoxInfo>**)this;
            check_hresult(_winrt_abi_type->get_Url(&value));
        }
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextBoxInfo<D>::Settings() const
    {
        winrt::Windows::UI::Input::Preview::Text::TextBoxSettings value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextBoxInfo>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextBoxInfo, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextBoxInfo>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Settings(reinterpret_cast<uint32_t*>(&value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextBoxInfo>**)this;
            check_hresult(_winrt_abi_type->get_Settings(reinterpret_cast<uint32_t*>(&value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextBoxInfo<D>::DisabledFeatures() const
    {
        winrt::Windows::UI::Input::Preview::Text::TextBoxFeatures value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextBoxInfo>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextBoxInfo, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextBoxInfo>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_DisabledFeatures(reinterpret_cast<uint32_t*>(&value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextBoxInfo>**)this;
            check_hresult(_winrt_abi_type->get_DisabledFeatures(reinterpret_cast<uint32_t*>(&value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextBoxInfoChangedEventArgs<D>::TextBoxInfo() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextBoxInfoChangedEventArgs>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextBoxInfoChangedEventArgs, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextBoxInfoChangedEventArgs>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_TextBoxInfo(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextBoxInfoChangedEventArgs>**)this;
            check_hresult(_winrt_abi_type->get_TextBoxInfo(&value));
        }
        return winrt::Windows::UI::Input::Preview::Text::TextBoxInfo{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextComposition<D>::Text() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextComposition>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextComposition, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextComposition>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Text(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextComposition>**)this;
            check_hresult(_winrt_abi_type->get_Text(&value));
        }
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextComposition<D>::FirstSegment() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextComposition>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextComposition, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextComposition>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_FirstSegment(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextComposition>**)this;
            check_hresult(_winrt_abi_type->get_FirstSegment(&value));
        }
        return winrt::Windows::UI::Input::Preview::Text::TextCompositionSegment{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextComposition<D>::SelectedSegment() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextComposition>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextComposition, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextComposition>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_SelectedSegment(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextComposition>**)this;
            check_hresult(_winrt_abi_type->get_SelectedSegment(&value));
        }
        return winrt::Windows::UI::Input::Preview::Text::TextCompositionSegment{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextComposition<D>::CaretPosition() const
    {
        uint32_t value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextComposition>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextComposition, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextComposition>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_CaretPosition(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextComposition>**)this;
            check_hresult(_winrt_abi_type->get_CaretPosition(&value));
        }
        return value;
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextComposition<D>::CaretPosition(uint32_t value) const
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextComposition>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextComposition, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextComposition>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->put_CaretPosition(value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextComposition>**)this;
            check_hresult(_winrt_abi_type->put_CaretPosition(value));
        }
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextComposition<D>::InsertText(param::hstring const& text) const
    {
        void* result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextComposition>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextComposition, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextComposition>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->InsertText(*(void**)(&text), &result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextComposition>**)this;
            check_hresult(_winrt_abi_type->InsertText(*(void**)(&text), &result));
        }
        return winrt::Windows::UI::Input::Preview::Text::TextCompositionSegment{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextComposition<D>::Complete() const
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextComposition>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextComposition, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextComposition>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->Complete());
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextComposition>**)this;
            check_hresult(_winrt_abi_type->Complete());
        }
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextComposition<D>::CompleteUnconverted() const
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextComposition>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextComposition, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextComposition>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->CompleteUnconverted());
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextComposition>**)this;
            check_hresult(_winrt_abi_type->CompleteUnconverted());
        }
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextComposition<D>::CompleteFirstSegment() const
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextComposition>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextComposition, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextComposition>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->CompleteFirstSegment());
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextComposition>**)this;
            check_hresult(_winrt_abi_type->CompleteFirstSegment());
        }
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextCompositionSegment<D>::Text() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextCompositionSegment>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextCompositionSegment, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextCompositionSegment>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Text(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextCompositionSegment>**)this;
            check_hresult(_winrt_abi_type->get_Text(&value));
        }
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextCompositionSegment<D>::Text(param::hstring const& value) const
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextCompositionSegment>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextCompositionSegment, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextCompositionSegment>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->put_Text(*(void**)(&value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextCompositionSegment>**)this;
            check_hresult(_winrt_abi_type->put_Text(*(void**)(&value)));
        }
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextCompositionSegment<D>::ConvertedText() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextCompositionSegment>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextCompositionSegment, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextCompositionSegment>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_ConvertedText(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextCompositionSegment>**)this;
            check_hresult(_winrt_abi_type->get_ConvertedText(&value));
        }
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextCompositionSegment<D>::ConvertedText(param::hstring const& value) const
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextCompositionSegment>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextCompositionSegment, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextCompositionSegment>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->put_ConvertedText(*(void**)(&value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextCompositionSegment>**)this;
            check_hresult(_winrt_abi_type->put_ConvertedText(*(void**)(&value)));
        }
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextCompositionSegment<D>::UnconvertedText() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextCompositionSegment>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextCompositionSegment, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextCompositionSegment>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_UnconvertedText(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextCompositionSegment>**)this;
            check_hresult(_winrt_abi_type->get_UnconvertedText(&value));
        }
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextCompositionSegment<D>::UnconvertedText(param::hstring const& value) const
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextCompositionSegment>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextCompositionSegment, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextCompositionSegment>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->put_UnconvertedText(*(void**)(&value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextCompositionSegment>**)this;
            check_hresult(_winrt_abi_type->put_UnconvertedText(*(void**)(&value)));
        }
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextCompositionSegment<D>::Range() const
    {
        winrt::Windows::UI::Text::Core::CoreTextRange value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextCompositionSegment>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextCompositionSegment, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextCompositionSegment>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Range(put_abi(value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextCompositionSegment>**)this;
            check_hresult(_winrt_abi_type->get_Range(put_abi(value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextCompositionSegment<D>::ConversionState() const
    {
        winrt::Windows::UI::Text::Core::CoreTextFormatUpdatingReason value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextCompositionSegment>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextCompositionSegment, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextCompositionSegment>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_ConversionState(reinterpret_cast<int32_t*>(&value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextCompositionSegment>**)this;
            check_hresult(_winrt_abi_type->get_ConversionState(reinterpret_cast<int32_t*>(&value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextCompositionSegment<D>::ConversionState(winrt::Windows::UI::Text::Core::CoreTextFormatUpdatingReason const& value) const
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextCompositionSegment>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextCompositionSegment, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextCompositionSegment>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->put_ConversionState(static_cast<int32_t>(value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextCompositionSegment>**)this;
            check_hresult(_winrt_abi_type->put_ConversionState(static_cast<int32_t>(value)));
        }
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextCompositionSegment<D>::Next() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextCompositionSegment>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextCompositionSegment, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextCompositionSegment>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Next(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextCompositionSegment>**)this;
            check_hresult(_winrt_abi_type->get_Next(&value));
        }
        return winrt::Windows::UI::Input::Preview::Text::TextCompositionSegment{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextCompositionSegment<D>::Previous() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextCompositionSegment>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextCompositionSegment, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextCompositionSegment>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Previous(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextCompositionSegment>**)this;
            check_hresult(_winrt_abi_type->get_Previous(&value));
        }
        return winrt::Windows::UI::Input::Preview::Text::TextCompositionSegment{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextCompositionSegment<D>::GetTextStyle() const
    {
        winrt::Windows::UI::Input::Preview::Text::TextStyle result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextCompositionSegment>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextCompositionSegment, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextCompositionSegment>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->GetTextStyle(put_abi(result)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextCompositionSegment>**)this;
            check_hresult(_winrt_abi_type->GetTextStyle(put_abi(result)));
        }
        return result;
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextCompositionSegment<D>::SetTextStyle(winrt::Windows::UI::Input::Preview::Text::TextStyle const& value) const
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextCompositionSegment>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextCompositionSegment, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextCompositionSegment>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->SetTextStyle(impl::bind_in(value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextCompositionSegment>**)this;
            check_hresult(_winrt_abi_type->SetTextStyle(impl::bind_in(value)));
        }
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextEditSession<D>::TextBoxId() const
    {
        winrt::Windows::UI::Input::Preview::Text::TextBoxId value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextEditSession>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextEditSession, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextEditSession>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_TextBoxId(put_abi(value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextEditSession>**)this;
            check_hresult(_winrt_abi_type->get_TextBoxId(put_abi(value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextEditSession<D>::TextLength() const
    {
        int32_t value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextEditSession>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextEditSession, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextEditSession>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_TextLength(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextEditSession>**)this;
            check_hresult(_winrt_abi_type->get_TextLength(&value));
        }
        return value;
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextEditSession<D>::PopulatedRange() const
    {
        winrt::Windows::UI::Text::Core::CoreTextRange value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextEditSession>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextEditSession, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextEditSession>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_PopulatedRange(put_abi(value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextEditSession>**)this;
            check_hresult(_winrt_abi_type->get_PopulatedRange(put_abi(value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextEditSession<D>::PopulateAsync(winrt::Windows::UI::Text::Core::CoreTextRange const& range) const
    {
        void* operation{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextEditSession>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextEditSession, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextEditSession>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->PopulateAsync(impl::bind_in(range), &operation));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextEditSession>**)this;
            check_hresult(_winrt_abi_type->PopulateAsync(impl::bind_in(range), &operation));
        }
        return winrt::Windows::Foundation::IAsyncAction{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextEditSession<D>::GetText(winrt::Windows::UI::Text::Core::CoreTextRange const& range) const
    {
        void* result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextEditSession>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextEditSession, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextEditSession>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->GetText(impl::bind_in(range), &result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextEditSession>**)this;
            check_hresult(_winrt_abi_type->GetText(impl::bind_in(range), &result));
        }
        return hstring{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextEditSession<D>::GetSelectedRange() const
    {
        winrt::Windows::UI::Text::Core::CoreTextRange result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextEditSession>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextEditSession, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextEditSession>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->GetSelectedRange(put_abi(result)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextEditSession>**)this;
            check_hresult(_winrt_abi_type->GetSelectedRange(put_abi(result)));
        }
        return result;
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextEditSession<D>::SetSelectedRange(winrt::Windows::UI::Text::Core::CoreTextRange const& value) const
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextEditSession>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextEditSession, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextEditSession>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->SetSelectedRange(impl::bind_in(value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextEditSession>**)this;
            check_hresult(_winrt_abi_type->SetSelectedRange(impl::bind_in(value)));
        }
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextEditSession<D>::ReplaceText(winrt::Windows::UI::Text::Core::CoreTextRange const& replaceRange, param::hstring const& text) const
    {
        winrt::Windows::UI::Text::Core::CoreTextRange result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextEditSession>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextEditSession, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextEditSession>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->ReplaceText(impl::bind_in(replaceRange), *(void**)(&text), put_abi(result)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextEditSession>**)this;
            check_hresult(_winrt_abi_type->ReplaceText(impl::bind_in(replaceRange), *(void**)(&text), put_abi(result)));
        }
        return result;
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextEditSession<D>::Composition() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextEditSession>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextEditSession, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextEditSession>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Composition(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextEditSession>**)this;
            check_hresult(_winrt_abi_type->get_Composition(&value));
        }
        return winrt::Windows::UI::Input::Preview::Text::TextComposition{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextEditSession<D>::StartComposition() const
    {
        void* result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextEditSession>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextEditSession, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextEditSession>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->StartComposition(&result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextEditSession>**)this;
            check_hresult(_winrt_abi_type->StartComposition(&result));
        }
        return winrt::Windows::UI::Input::Preview::Text::TextComposition{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextEditSession<D>::StartReconversion(winrt::Windows::UI::Text::Core::CoreTextRange const& range) const
    {
        void* result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextEditSession>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextEditSession, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextEditSession>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->StartReconversion(impl::bind_in(range), &result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextEditSession>**)this;
            check_hresult(_winrt_abi_type->StartReconversion(impl::bind_in(range), &result));
        }
        return winrt::Windows::UI::Input::Preview::Text::TextComposition{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextEditSession<D>::SubmitPayload() const
    {
        bool result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextEditSession>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextEditSession, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextEditSession>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->SubmitPayload(&result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextEditSession>**)this;
            check_hresult(_winrt_abi_type->SubmitPayload(&result));
        }
        return result;
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextEditSession<D>::SubmitPayloadAsync() const
    {
        void* operation{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextEditSession>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextEditSession, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextEditSession>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->SubmitPayloadAsync(&operation));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextEditSession>**)this;
            check_hresult(_winrt_abi_type->SubmitPayloadAsync(&operation));
        }
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::UI::Input::Preview::Text::PayloadResult>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextInputProvider<D>::GetSubscription() const
    {
        winrt::Windows::UI::Input::Preview::Text::TextInputServiceSubscription result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->GetSubscription(put_abi(result)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>**)this;
            check_hresult(_winrt_abi_type->GetSubscription(put_abi(result)));
        }
        return result;
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextInputProvider<D>::SetSubscription(winrt::Windows::UI::Input::Preview::Text::TextInputServiceSubscription const& subscription) const
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->SetSubscription(impl::bind_in(subscription)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>**)this;
            check_hresult(_winrt_abi_type->SetSubscription(impl::bind_in(subscription)));
        }
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextInputProvider<D>::HasFocusedTextBox() const
    {
        bool value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_HasFocusedTextBox(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>**)this;
            check_hresult(_winrt_abi_type->get_HasFocusedTextBox(&value));
        }
        return value;
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextInputProvider<D>::FocusedTextBoxId() const
    {
        winrt::Windows::UI::Input::Preview::Text::TextBoxId value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_FocusedTextBoxId(put_abi(value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>**)this;
            check_hresult(_winrt_abi_type->get_FocusedTextBoxId(put_abi(value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextInputProvider<D>::FocusedTextBoxInfo() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_FocusedTextBoxInfo(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>**)this;
            check_hresult(_winrt_abi_type->get_FocusedTextBoxInfo(&value));
        }
        return winrt::Windows::UI::Input::Preview::Text::TextBoxInfo{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextInputProvider<D>::FocusedTextBoxBounds() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_FocusedTextBoxBounds(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>**)this;
            check_hresult(_winrt_abi_type->get_FocusedTextBoxBounds(&value));
        }
        return winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::Rect>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextInputProvider<D>::SelectionBounds() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_SelectionBounds(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>**)this;
            check_hresult(_winrt_abi_type->get_SelectionBounds(&value));
        }
        return winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::Rect>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextInputProvider<D>::CreateEditSession() const
    {
        void* result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->CreateEditSession(&result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>**)this;
            check_hresult(_winrt_abi_type->CreateEditSession(&result));
        }
        return winrt::Windows::UI::Input::Preview::Text::TextEditSession{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextInputProvider<D>::TryStartDelegation() const
    {
        bool result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->TryStartDelegation(&result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>**)this;
            check_hresult(_winrt_abi_type->TryStartDelegation(&result));
        }
        return result;
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextInputProvider<D>::StopDelegation() const
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->StopDelegation());
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>**)this;
            check_hresult(_winrt_abi_type->StopDelegation());
        }
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextInputProvider<D>::FocusEntered(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Preview::Text::TextInputProvider, winrt::Windows::UI::Input::Preview::Text::FocusEnteredEventArgs> const& handler) const
    {
        winrt::event_token token{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->add_FocusEntered(*(void**)(&handler), put_abi(token)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>**)this;
            check_hresult(_winrt_abi_type->add_FocusEntered(*(void**)(&handler), put_abi(token)));
        }
        return token;
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextInputProvider<D>::FocusEntered(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Preview::Text::TextInputProvider, winrt::Windows::UI::Input::Preview::Text::FocusEnteredEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, FocusEntered_revoker>(this, FocusEntered(handler));
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextInputProvider<D>::FocusEntered(winrt::event_token const& token) const noexcept
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>**)&_winrt_casted_result;
            _winrt_abi_type->remove_FocusEntered(impl::bind_in(token));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>**)this;
            _winrt_abi_type->remove_FocusEntered(impl::bind_in(token));
        }
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextInputProvider<D>::FocusRemoved(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Preview::Text::TextInputProvider, winrt::Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->add_FocusRemoved(*(void**)(&handler), put_abi(token)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>**)this;
            check_hresult(_winrt_abi_type->add_FocusRemoved(*(void**)(&handler), put_abi(token)));
        }
        return token;
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextInputProvider<D>::FocusRemoved(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Preview::Text::TextInputProvider, winrt::Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, FocusRemoved_revoker>(this, FocusRemoved(handler));
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextInputProvider<D>::FocusRemoved(winrt::event_token const& token) const noexcept
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>**)&_winrt_casted_result;
            _winrt_abi_type->remove_FocusRemoved(impl::bind_in(token));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>**)this;
            _winrt_abi_type->remove_FocusRemoved(impl::bind_in(token));
        }
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextInputProvider<D>::TextBoxInfoChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Preview::Text::TextInputProvider, winrt::Windows::UI::Input::Preview::Text::TextBoxInfoChangedEventArgs> const& handler) const
    {
        winrt::event_token token{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->add_TextBoxInfoChanged(*(void**)(&handler), put_abi(token)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>**)this;
            check_hresult(_winrt_abi_type->add_TextBoxInfoChanged(*(void**)(&handler), put_abi(token)));
        }
        return token;
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextInputProvider<D>::TextBoxInfoChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Preview::Text::TextInputProvider, winrt::Windows::UI::Input::Preview::Text::TextBoxInfoChangedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, TextBoxInfoChanged_revoker>(this, TextBoxInfoChanged(handler));
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextInputProvider<D>::TextBoxInfoChanged(winrt::event_token const& token) const noexcept
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>**)&_winrt_casted_result;
            _winrt_abi_type->remove_TextBoxInfoChanged(impl::bind_in(token));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>**)this;
            _winrt_abi_type->remove_TextBoxInfoChanged(impl::bind_in(token));
        }
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextInputProvider<D>::TextBoxContentChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Preview::Text::TextInputProvider, winrt::Windows::UI::Input::Preview::Text::TextBoxContentChangedEventArgs> const& handler) const
    {
        winrt::event_token token{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->add_TextBoxContentChanged(*(void**)(&handler), put_abi(token)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>**)this;
            check_hresult(_winrt_abi_type->add_TextBoxContentChanged(*(void**)(&handler), put_abi(token)));
        }
        return token;
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextInputProvider<D>::TextBoxContentChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Preview::Text::TextInputProvider, winrt::Windows::UI::Input::Preview::Text::TextBoxContentChangedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, TextBoxContentChanged_revoker>(this, TextBoxContentChanged(handler));
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextInputProvider<D>::TextBoxContentChanged(winrt::event_token const& token) const noexcept
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>**)&_winrt_casted_result;
            _winrt_abi_type->remove_TextBoxContentChanged(impl::bind_in(token));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>**)this;
            _winrt_abi_type->remove_TextBoxContentChanged(impl::bind_in(token));
        }
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextInputProvider<D>::CompositionTerminated(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Preview::Text::TextInputProvider, winrt::Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->add_CompositionTerminated(*(void**)(&handler), put_abi(token)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>**)this;
            check_hresult(_winrt_abi_type->add_CompositionTerminated(*(void**)(&handler), put_abi(token)));
        }
        return token;
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextInputProvider<D>::CompositionTerminated(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Preview::Text::TextInputProvider, winrt::Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, CompositionTerminated_revoker>(this, CompositionTerminated(handler));
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextInputProvider<D>::CompositionTerminated(winrt::event_token const& token) const noexcept
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>**)&_winrt_casted_result;
            _winrt_abi_type->remove_CompositionTerminated(impl::bind_in(token));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>**)this;
            _winrt_abi_type->remove_CompositionTerminated(impl::bind_in(token));
        }
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextInputProvider<D>::ReconversionRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Preview::Text::TextInputProvider, winrt::Windows::UI::Input::Preview::Text::ReconversionRequestedEventArgs> const& handler) const
    {
        winrt::event_token token{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->add_ReconversionRequested(*(void**)(&handler), put_abi(token)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>**)this;
            check_hresult(_winrt_abi_type->add_ReconversionRequested(*(void**)(&handler), put_abi(token)));
        }
        return token;
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextInputProvider<D>::ReconversionRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Preview::Text::TextInputProvider, winrt::Windows::UI::Input::Preview::Text::ReconversionRequestedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, ReconversionRequested_revoker>(this, ReconversionRequested(handler));
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextInputProvider<D>::ReconversionRequested(winrt::event_token const& token) const noexcept
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>**)&_winrt_casted_result;
            _winrt_abi_type->remove_ReconversionRequested(impl::bind_in(token));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>**)this;
            _winrt_abi_type->remove_ReconversionRequested(impl::bind_in(token));
        }
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextInputProvider<D>::InputDelegationModeChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Preview::Text::TextInputProvider, winrt::Windows::UI::Input::Preview::Text::InputDelegationModeChangedEventArgs> const& handler) const
    {
        winrt::event_token token{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->add_InputDelegationModeChanged(*(void**)(&handler), put_abi(token)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>**)this;
            check_hresult(_winrt_abi_type->add_InputDelegationModeChanged(*(void**)(&handler), put_abi(token)));
        }
        return token;
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextInputProvider<D>::InputDelegationModeChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Preview::Text::TextInputProvider, winrt::Windows::UI::Input::Preview::Text::InputDelegationModeChangedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, InputDelegationModeChanged_revoker>(this, InputDelegationModeChanged(handler));
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextInputProvider<D>::InputDelegationModeChanged(winrt::event_token const& token) const noexcept
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>**)&_winrt_casted_result;
            _winrt_abi_type->remove_InputDelegationModeChanged(impl::bind_in(token));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>**)this;
            _winrt_abi_type->remove_InputDelegationModeChanged(impl::bind_in(token));
        }
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextInputService<D>::CreateKeyboardInputProcessor(param::hstring const& inputProfile) const
    {
        void* result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextInputService>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextInputService, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextInputService>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->CreateKeyboardInputProcessor(*(void**)(&inputProfile), &result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextInputService>**)this;
            check_hresult(_winrt_abi_type->CreateKeyboardInputProcessor(*(void**)(&inputProfile), &result));
        }
        return winrt::Windows::UI::Input::Preview::Text::KeyboardInputProcessor{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextInputService<D>::CreateTextInputProvider(param::hstring const& inputProfile) const
    {
        void* result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextInputService>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextInputService, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextInputService>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->CreateTextInputProvider(*(void**)(&inputProfile), &result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextInputService>**)this;
            check_hresult(_winrt_abi_type->CreateTextInputProvider(*(void**)(&inputProfile), &result));
        }
        return winrt::Windows::UI::Input::Preview::Text::TextInputProvider{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Input_Preview_Text_ITextInputServiceStatics<D>::GetForCurrentThread() const
    {
        void* result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::UI::Input::Preview::Text::ITextInputServiceStatics>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::UI::Input::Preview::Text::ITextInputServiceStatics, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextInputServiceStatics>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->GetForCurrentThread(&result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::UI::Input::Preview::Text::ITextInputServiceStatics>**)this;
            check_hresult(_winrt_abi_type->GetForCurrentThread(&result));
        }
        return winrt::Windows::UI::Input::Preview::Text::TextInputService{ result, take_ownership_from_abi };
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Input::Preview::Text::IConversionModeChangedEventArgs> : produce_base<D, winrt::Windows::UI::Input::Preview::Text::IConversionModeChangedEventArgs>
    {
        int32_t __stdcall get_NewConversionMode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Input::Preview::Text::TextConversionMode>(this->shim().NewConversionMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Input::Preview::Text::IFocusEnteredEventArgs> : produce_base<D, winrt::Windows::UI::Input::Preview::Text::IFocusEnteredEventArgs>
    {
        int32_t __stdcall get_FocusedTextBoxInfo(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Input::Preview::Text::TextBoxInfo>(this->shim().FocusedTextBoxInfo());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Input::Preview::Text::IInputDelegationModeChangedEventArgs> : produce_base<D, winrt::Windows::UI::Input::Preview::Text::IInputDelegationModeChangedEventArgs>
    {
        int32_t __stdcall get_DelegationOn(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().DelegationOn());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Input::Preview::Text::IKeyEventReceivedEventArgs> : produce_base<D, winrt::Windows::UI::Input::Preview::Text::IKeyEventReceivedEventArgs>
    {
        int32_t __stdcall get_VirtualKey(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::System::VirtualKey>(this->shim().VirtualKey());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_KeyStatus(struct struct_Windows_UI_Core_CorePhysicalKeyStatus* value) noexcept final try
        {
            zero_abi<winrt::Windows::UI::Core::CorePhysicalKeyStatus>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Core::CorePhysicalKeyStatus>(this->shim().KeyStatus());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Unicode(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Unicode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Source(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Input::Preview::Text::KeyEventDeviceType>(this->shim().Source());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsKeyPressed(int32_t vkey, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsKeyPressed(*reinterpret_cast<winrt::Windows::System::VirtualKey const*>(&vkey)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsToggleKeyOn(int32_t vkey, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsToggleKeyOn(*reinterpret_cast<winrt::Windows::System::VirtualKey const*>(&vkey)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_EditSession(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Input::Preview::Text::TextEditSession>(this->shim().EditSession());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Handled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Handled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Handled(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Handled(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor> : produce_base<D, winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor>
    {
        int32_t __stdcall get_InputProfile(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().InputProfile());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsActive(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsActive());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HasFocusedTextBox(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().HasFocusedTextBox());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FocusedTextBoxId(struct struct_Windows_UI_Input_Preview_Text_TextBoxId* value) noexcept final try
        {
            zero_abi<winrt::Windows::UI::Input::Preview::Text::TextBoxId>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Input::Preview::Text::TextBoxId>(this->shim().FocusedTextBoxId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FocusedTextBoxInfo(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Input::Preview::Text::TextBoxInfo>(this->shim().FocusedTextBoxInfo());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FocusedTextBoxBounds(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::Rect>>(this->shim().FocusedTextBoxBounds());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SelectionBounds(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::Rect>>(this->shim().SelectionBounds());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ConversionMode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Input::Preview::Text::TextConversionMode>(this->shim().ConversionMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ConversionMode(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ConversionMode(*reinterpret_cast<winrt::Windows::UI::Input::Preview::Text::TextConversionMode const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateEditSession(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::UI::Input::Preview::Text::TextEditSession>(this->shim().CreateEditSession());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_Activated(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().Activated(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Preview::Text::KeyboardInputProcessor, winrt::Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_Activated(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Activated(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_Deactivated(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().Deactivated(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Preview::Text::KeyboardInputProcessor, winrt::Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_Deactivated(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Deactivated(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_KeyEventReceived(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().KeyEventReceived(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Preview::Text::KeyboardInputProcessor, winrt::Windows::UI::Input::Preview::Text::KeyEventReceivedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_KeyEventReceived(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeyEventReceived(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_FocusEntered(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().FocusEntered(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Preview::Text::KeyboardInputProcessor, winrt::Windows::UI::Input::Preview::Text::FocusEnteredEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_FocusEntered(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FocusEntered(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_FocusRemoved(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().FocusRemoved(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Preview::Text::KeyboardInputProcessor, winrt::Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_FocusRemoved(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FocusRemoved(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_ConversionModeChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().ConversionModeChanged(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Preview::Text::KeyboardInputProcessor, winrt::Windows::UI::Input::Preview::Text::ConversionModeChangedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_ConversionModeChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ConversionModeChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_TextBoxInfoChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().TextBoxInfoChanged(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Preview::Text::KeyboardInputProcessor, winrt::Windows::UI::Input::Preview::Text::TextBoxInfoChangedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_TextBoxInfoChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TextBoxInfoChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_TextBoxContentChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().TextBoxContentChanged(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Preview::Text::KeyboardInputProcessor, winrt::Windows::UI::Input::Preview::Text::TextBoxContentChangedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_TextBoxContentChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TextBoxContentChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_CompositionTerminated(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().CompositionTerminated(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Preview::Text::KeyboardInputProcessor, winrt::Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_CompositionTerminated(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CompositionTerminated(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_ReconversionRequested(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().ReconversionRequested(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Preview::Text::KeyboardInputProcessor, winrt::Windows::UI::Input::Preview::Text::ReconversionRequestedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_ReconversionRequested(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReconversionRequested(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Input::Preview::Text::IReconversionRequestedEventArgs> : produce_base<D, winrt::Windows::UI::Input::Preview::Text::IReconversionRequestedEventArgs>
    {
        int32_t __stdcall get_Range(struct struct_Windows_UI_Text_Core_CoreTextRange* value) noexcept final try
        {
            zero_abi<winrt::Windows::UI::Text::Core::CoreTextRange>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Text::Core::CoreTextRange>(this->shim().Range());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Input::Preview::Text::ITextBoxContentChangedEventArgs> : produce_base<D, winrt::Windows::UI::Input::Preview::Text::ITextBoxContentChangedEventArgs>
    {
        int32_t __stdcall get_TextBoxId(struct struct_Windows_UI_Input_Preview_Text_TextBoxId* value) noexcept final try
        {
            zero_abi<winrt::Windows::UI::Input::Preview::Text::TextBoxId>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Input::Preview::Text::TextBoxId>(this->shim().TextBoxId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Source(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Input::Preview::Text::TextChangeSource>(this->shim().Source());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SelectionBounds(winrt::Windows::Foundation::Rect* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::Rect>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Rect>(this->shim().SelectionBounds());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsContentAttributeChanged(int32_t value, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsContentAttributeChanged(*reinterpret_cast<winrt::Windows::UI::Input::Preview::Text::TextBoxContentAttribute const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Input::Preview::Text::ITextBoxInfo> : produce_base<D, winrt::Windows::UI::Input::Preview::Text::ITextBoxInfo>
    {
        int32_t __stdcall get_Id(struct struct_Windows_UI_Input_Preview_Text_TextBoxId* value) noexcept final try
        {
            zero_abi<winrt::Windows::UI::Input::Preview::Text::TextBoxId>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Input::Preview::Text::TextBoxId>(this->shim().Id());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_InputScope(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Text::Core::CoreTextInputScope>(this->shim().InputScope());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AppName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AppName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Url(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Url());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Settings(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Input::Preview::Text::TextBoxSettings>(this->shim().Settings());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DisabledFeatures(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Input::Preview::Text::TextBoxFeatures>(this->shim().DisabledFeatures());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Input::Preview::Text::ITextBoxInfoChangedEventArgs> : produce_base<D, winrt::Windows::UI::Input::Preview::Text::ITextBoxInfoChangedEventArgs>
    {
        int32_t __stdcall get_TextBoxInfo(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Input::Preview::Text::TextBoxInfo>(this->shim().TextBoxInfo());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Input::Preview::Text::ITextComposition> : produce_base<D, winrt::Windows::UI::Input::Preview::Text::ITextComposition>
    {
        int32_t __stdcall get_Text(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Text());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FirstSegment(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Input::Preview::Text::TextCompositionSegment>(this->shim().FirstSegment());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SelectedSegment(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Input::Preview::Text::TextCompositionSegment>(this->shim().SelectedSegment());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CaretPosition(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().CaretPosition());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CaretPosition(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CaretPosition(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall InsertText(void* text, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::UI::Input::Preview::Text::TextCompositionSegment>(this->shim().InsertText(*reinterpret_cast<hstring const*>(&text)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Complete() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Complete();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CompleteUnconverted() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CompleteUnconverted();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CompleteFirstSegment() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CompleteFirstSegment();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Input::Preview::Text::ITextCompositionSegment> : produce_base<D, winrt::Windows::UI::Input::Preview::Text::ITextCompositionSegment>
    {
        int32_t __stdcall get_Text(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Text());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Text(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Text(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ConvertedText(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ConvertedText());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ConvertedText(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ConvertedText(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UnconvertedText(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().UnconvertedText());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_UnconvertedText(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UnconvertedText(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Range(struct struct_Windows_UI_Text_Core_CoreTextRange* value) noexcept final try
        {
            zero_abi<winrt::Windows::UI::Text::Core::CoreTextRange>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Text::Core::CoreTextRange>(this->shim().Range());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ConversionState(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Text::Core::CoreTextFormatUpdatingReason>(this->shim().ConversionState());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ConversionState(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ConversionState(*reinterpret_cast<winrt::Windows::UI::Text::Core::CoreTextFormatUpdatingReason const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Next(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Input::Preview::Text::TextCompositionSegment>(this->shim().Next());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Previous(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Input::Preview::Text::TextCompositionSegment>(this->shim().Previous());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetTextStyle(struct struct_Windows_UI_Input_Preview_Text_TextStyle* result) noexcept final try
        {
            zero_abi<winrt::Windows::UI::Input::Preview::Text::TextStyle>(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::UI::Input::Preview::Text::TextStyle>(this->shim().GetTextStyle());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetTextStyle(struct struct_Windows_UI_Input_Preview_Text_TextStyle value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetTextStyle(*reinterpret_cast<winrt::Windows::UI::Input::Preview::Text::TextStyle const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Input::Preview::Text::ITextEditSession> : produce_base<D, winrt::Windows::UI::Input::Preview::Text::ITextEditSession>
    {
        int32_t __stdcall get_TextBoxId(struct struct_Windows_UI_Input_Preview_Text_TextBoxId* value) noexcept final try
        {
            zero_abi<winrt::Windows::UI::Input::Preview::Text::TextBoxId>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Input::Preview::Text::TextBoxId>(this->shim().TextBoxId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TextLength(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().TextLength());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PopulatedRange(struct struct_Windows_UI_Text_Core_CoreTextRange* value) noexcept final try
        {
            zero_abi<winrt::Windows::UI::Text::Core::CoreTextRange>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Text::Core::CoreTextRange>(this->shim().PopulatedRange());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall PopulateAsync(struct struct_Windows_UI_Text_Core_CoreTextRange range, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncAction>(this->shim().PopulateAsync(*reinterpret_cast<winrt::Windows::UI::Text::Core::CoreTextRange const*>(&range)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetText(struct struct_Windows_UI_Text_Core_CoreTextRange range, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<hstring>(this->shim().GetText(*reinterpret_cast<winrt::Windows::UI::Text::Core::CoreTextRange const*>(&range)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetSelectedRange(struct struct_Windows_UI_Text_Core_CoreTextRange* result) noexcept final try
        {
            zero_abi<winrt::Windows::UI::Text::Core::CoreTextRange>(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::UI::Text::Core::CoreTextRange>(this->shim().GetSelectedRange());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetSelectedRange(struct struct_Windows_UI_Text_Core_CoreTextRange value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetSelectedRange(*reinterpret_cast<winrt::Windows::UI::Text::Core::CoreTextRange const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ReplaceText(struct struct_Windows_UI_Text_Core_CoreTextRange replaceRange, void* text, struct struct_Windows_UI_Text_Core_CoreTextRange* result) noexcept final try
        {
            zero_abi<winrt::Windows::UI::Text::Core::CoreTextRange>(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::UI::Text::Core::CoreTextRange>(this->shim().ReplaceText(*reinterpret_cast<winrt::Windows::UI::Text::Core::CoreTextRange const*>(&replaceRange), *reinterpret_cast<hstring const*>(&text)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Composition(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Input::Preview::Text::TextComposition>(this->shim().Composition());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall StartComposition(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::UI::Input::Preview::Text::TextComposition>(this->shim().StartComposition());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall StartReconversion(struct struct_Windows_UI_Text_Core_CoreTextRange range, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::UI::Input::Preview::Text::TextComposition>(this->shim().StartReconversion(*reinterpret_cast<winrt::Windows::UI::Text::Core::CoreTextRange const*>(&range)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SubmitPayload(bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().SubmitPayload());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SubmitPayloadAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::UI::Input::Preview::Text::PayloadResult>>(this->shim().SubmitPayloadAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Input::Preview::Text::ITextInputProvider> : produce_base<D, winrt::Windows::UI::Input::Preview::Text::ITextInputProvider>
    {
        int32_t __stdcall GetSubscription(struct struct_Windows_UI_Input_Preview_Text_TextInputServiceSubscription* result) noexcept final try
        {
            zero_abi<winrt::Windows::UI::Input::Preview::Text::TextInputServiceSubscription>(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::UI::Input::Preview::Text::TextInputServiceSubscription>(this->shim().GetSubscription());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetSubscription(struct struct_Windows_UI_Input_Preview_Text_TextInputServiceSubscription subscription) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetSubscription(*reinterpret_cast<winrt::Windows::UI::Input::Preview::Text::TextInputServiceSubscription const*>(&subscription));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HasFocusedTextBox(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().HasFocusedTextBox());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FocusedTextBoxId(struct struct_Windows_UI_Input_Preview_Text_TextBoxId* value) noexcept final try
        {
            zero_abi<winrt::Windows::UI::Input::Preview::Text::TextBoxId>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Input::Preview::Text::TextBoxId>(this->shim().FocusedTextBoxId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FocusedTextBoxInfo(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Input::Preview::Text::TextBoxInfo>(this->shim().FocusedTextBoxInfo());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FocusedTextBoxBounds(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::Rect>>(this->shim().FocusedTextBoxBounds());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SelectionBounds(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::Rect>>(this->shim().SelectionBounds());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateEditSession(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::UI::Input::Preview::Text::TextEditSession>(this->shim().CreateEditSession());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryStartDelegation(bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().TryStartDelegation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall StopDelegation() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StopDelegation();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_FocusEntered(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().FocusEntered(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Preview::Text::TextInputProvider, winrt::Windows::UI::Input::Preview::Text::FocusEnteredEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_FocusEntered(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FocusEntered(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_FocusRemoved(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().FocusRemoved(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Preview::Text::TextInputProvider, winrt::Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_FocusRemoved(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FocusRemoved(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_TextBoxInfoChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().TextBoxInfoChanged(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Preview::Text::TextInputProvider, winrt::Windows::UI::Input::Preview::Text::TextBoxInfoChangedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_TextBoxInfoChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TextBoxInfoChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_TextBoxContentChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().TextBoxContentChanged(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Preview::Text::TextInputProvider, winrt::Windows::UI::Input::Preview::Text::TextBoxContentChangedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_TextBoxContentChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TextBoxContentChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_CompositionTerminated(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().CompositionTerminated(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Preview::Text::TextInputProvider, winrt::Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_CompositionTerminated(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CompositionTerminated(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_ReconversionRequested(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().ReconversionRequested(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Preview::Text::TextInputProvider, winrt::Windows::UI::Input::Preview::Text::ReconversionRequestedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_ReconversionRequested(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReconversionRequested(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_InputDelegationModeChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().InputDelegationModeChanged(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Input::Preview::Text::TextInputProvider, winrt::Windows::UI::Input::Preview::Text::InputDelegationModeChangedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_InputDelegationModeChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InputDelegationModeChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Input::Preview::Text::ITextInputService> : produce_base<D, winrt::Windows::UI::Input::Preview::Text::ITextInputService>
    {
        int32_t __stdcall CreateKeyboardInputProcessor(void* inputProfile, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::UI::Input::Preview::Text::KeyboardInputProcessor>(this->shim().CreateKeyboardInputProcessor(*reinterpret_cast<hstring const*>(&inputProfile)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateTextInputProvider(void* inputProfile, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::UI::Input::Preview::Text::TextInputProvider>(this->shim().CreateTextInputProvider(*reinterpret_cast<hstring const*>(&inputProfile)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Input::Preview::Text::ITextInputServiceStatics> : produce_base<D, winrt::Windows::UI::Input::Preview::Text::ITextInputServiceStatics>
    {
        int32_t __stdcall GetForCurrentThread(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::UI::Input::Preview::Text::TextInputService>(this->shim().GetForCurrentThread());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::UI::Input::Preview::Text
{
    constexpr auto operator|(TextBoxFeatures const left, TextBoxFeatures const right) noexcept
    {
        return static_cast<TextBoxFeatures>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(TextBoxFeatures& left, TextBoxFeatures const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(TextBoxFeatures const left, TextBoxFeatures const right) noexcept
    {
        return static_cast<TextBoxFeatures>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(TextBoxFeatures& left, TextBoxFeatures const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(TextBoxFeatures const value) noexcept
    {
        return static_cast<TextBoxFeatures>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(TextBoxFeatures const left, TextBoxFeatures const right) noexcept
    {
        return static_cast<TextBoxFeatures>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(TextBoxFeatures& left, TextBoxFeatures const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    constexpr auto operator|(TextBoxSettings const left, TextBoxSettings const right) noexcept
    {
        return static_cast<TextBoxSettings>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(TextBoxSettings& left, TextBoxSettings const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(TextBoxSettings const left, TextBoxSettings const right) noexcept
    {
        return static_cast<TextBoxSettings>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(TextBoxSettings& left, TextBoxSettings const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(TextBoxSettings const value) noexcept
    {
        return static_cast<TextBoxSettings>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(TextBoxSettings const left, TextBoxSettings const right) noexcept
    {
        return static_cast<TextBoxSettings>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(TextBoxSettings& left, TextBoxSettings const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    constexpr auto operator|(TextStyleAttributes const left, TextStyleAttributes const right) noexcept
    {
        return static_cast<TextStyleAttributes>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(TextStyleAttributes& left, TextStyleAttributes const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(TextStyleAttributes const left, TextStyleAttributes const right) noexcept
    {
        return static_cast<TextStyleAttributes>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(TextStyleAttributes& left, TextStyleAttributes const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(TextStyleAttributes const value) noexcept
    {
        return static_cast<TextStyleAttributes>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(TextStyleAttributes const left, TextStyleAttributes const right) noexcept
    {
        return static_cast<TextStyleAttributes>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(TextStyleAttributes& left, TextStyleAttributes const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    inline auto TextInputService::GetForCurrentThread()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Input::Preview::Text::TextInputService(*)(ITextInputServiceStatics const&), TextInputService, ITextInputServiceStatics>([](ITextInputServiceStatics const& f) { return f.GetForCurrentThread(); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::UI::Input::Preview::Text::IConversionModeChangedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Input::Preview::Text::IFocusEnteredEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Input::Preview::Text::IInputDelegationModeChangedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Input::Preview::Text::IKeyEventReceivedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Input::Preview::Text::IKeyboardInputProcessor> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Input::Preview::Text::IReconversionRequestedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Input::Preview::Text::ITextBoxContentChangedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Input::Preview::Text::ITextBoxInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Input::Preview::Text::ITextBoxInfoChangedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Input::Preview::Text::ITextComposition> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Input::Preview::Text::ITextCompositionSegment> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Input::Preview::Text::ITextEditSession> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Input::Preview::Text::ITextInputProvider> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Input::Preview::Text::ITextInputService> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Input::Preview::Text::ITextInputServiceStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Input::Preview::Text::ConversionModeChangedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Input::Preview::Text::FocusEnteredEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Input::Preview::Text::InputDelegationModeChangedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Input::Preview::Text::KeyEventReceivedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Input::Preview::Text::KeyboardInputProcessor> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Input::Preview::Text::ReconversionRequestedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Input::Preview::Text::TextBoxContentChangedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Input::Preview::Text::TextBoxInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Input::Preview::Text::TextBoxInfoChangedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Input::Preview::Text::TextComposition> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Input::Preview::Text::TextCompositionSegment> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Input::Preview::Text::TextEditSession> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Input::Preview::Text::TextInputProvider> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Input::Preview::Text::TextInputService> : winrt::impl::hash_base {};
#endif
#ifdef __cpp_lib_format
#endif
}
#endif
