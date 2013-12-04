//
// MainPage.xaml.cpp
// Implementation of the MainPage class.
//

#include "pch.h"
#include "MainPage.xaml.h"

using namespace Speed;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

// The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=234238

double GetMilliseconds(SYSTEMTIME time)
{
	return time.wMilliseconds + time.wSecond * 1000 + time.wMinute * 1000 * 60 + time.wHour * 1000 * 3600 + time.wDay * 1000 * 3600 * 24;
}

MainPage::MainPage()
{
	InitializeComponent();
}


void Speed::MainPage::StartClick(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	double firstValue = 1.0;
	double result = 1.0;
	
	SYSTEMTIME before;
	SYSTEMTIME after;

	GetSystemTime(&before);

	// TODO: Add fibonacci loop here

	GetSystemTime(&after);

	double i = GetMilliseconds(after) - GetMilliseconds(before);
	Time->Text = i.ToString();
}
