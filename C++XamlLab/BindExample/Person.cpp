#include "pch.h"
#include "Person.h"
using namespace BindExample;
using namespace Platform;
using namespace WUXD;

Person::Person(void)
{
	Name = "Maria Anders";
	Phone = "030-0074321";
}

Person::Person(String^ name, String^ phone)
{
	Name = name;
	Phone = phone;
}

String^ Person::Name::get(){ return m_Name; }
void Person::Name::set(String^ value){
  if(m_Name != value) {
	  m_Name = value;
	  NotifyPropertyChanged("Name");
  }
}

void Person::NotifyPropertyChanged(Platform::String^ prop) 
{
	PropertyChangedEventArgs^ args = ref new PropertyChangedEventArgs(prop);
	PropertyChanged(this, args);
}