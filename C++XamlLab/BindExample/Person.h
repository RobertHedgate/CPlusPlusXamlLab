#pragma once
namespace BindExample {
	namespace WUXD = Windows::UI::Xaml::Data;
	[WUXD::Bindable]
	public ref class Person sealed : WUXD::INotifyPropertyChanged
	{
	public:
		Person(void);
		Person(Platform::String^ name, Platform::String^ phone);
		property Platform::String^ Name {
			Platform::String^ get();
			void set(Platform::String^ value);
		}
		property Platform::String^ Phone;
		virtual event WUXD::PropertyChangedEventHandler^ PropertyChanged;

	private:
		void NotifyPropertyChanged(Platform::String^ prop);
		Platform::String^ m_Name;
	};
}

