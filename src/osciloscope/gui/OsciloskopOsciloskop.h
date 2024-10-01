////////////////////////////////////////////////////////////////////////////////
//    ScopeFun Oscilloscope ( http://www.scopefun.com )
//    Copyright (C) 2016 David Košenina
//
//    This file is part of ScopeFun Oscilloscope.
//
//    ScopeFun Oscilloscope is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.
//
//    ScopeFun Oscilloscope is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with this ScopeFun Oscilloscope.  If not, see <http://www.gnu.org/licenses/>.
//
////////////////////////////////////////////////////////////////////////////////
#ifndef __OsciloskopOsciloskop__
#define __OsciloskopOsciloskop__

/**
@file
Subclass of Osciloskop, which is generated by wxFormBuilder.
*/

#include "osc.h"

//// end generated include

/** Implementing Osciloskop */
class OsciloskopOsciloskop : public Osciloskop
{
	protected:
		// Handlers for Osciloskop events.
		void onActivate( wxActivateEvent& event );
		void onActivateApp( wxActivateEvent& event );
		void onClose( wxCloseEvent& event );
		void OnIdle( wxIdleEvent& event );
		void OnSetFocus( wxFocusEvent& event );
		void OnSize( wxSizeEvent& event );
		void m_menuItem1OnMenuSelection( wxCommandEvent& event );
		void m_menuItem2OnMenuSelection( wxCommandEvent& event );
		void m_menuItem3OnMenuSelection( wxCommandEvent& event );
		void m_menuItem20OnMenuSelection( wxCommandEvent& event );
		void m_menuItem21OnMenuSelection( wxCommandEvent& event );
      void m_menuItem22OnMenuSelection(wxCommandEvent& event);
      void m_menuItem23OnMenuSelection(wxCommandEvent& event);
		void m_menuItem6OnMenuSelection( wxCommandEvent& event );
		void m_menuItem8OnMenuSelection( wxCommandEvent& event );
		void m_menuItem9OnMenuSelection( wxCommandEvent& event );
		void m_menuItemSoftwareOnMenuSelection( wxCommandEvent& event );
		void m_menuItem11OnMenuSelection( wxCommandEvent& event );
		void m_menuItem12OnMenuSelection( wxCommandEvent& event );
		void m_menuItem15OnMenuSelection( wxCommandEvent& event );
		void m_menuItemSloveneOnMenuSelection( wxCommandEvent& event );
		void m_menuItemEnglishOnMenuSelection( wxCommandEvent& event );
		void m_menuItemDebugOnMenuSelection( wxCommandEvent& event );
		void m_menuItemInfoOnMenuSelection( wxCommandEvent& event );
		void m_comboBoxTimeCaptureOnCombobox( wxCommandEvent& event );
		void m_checkBoxETSOnCheckBox( wxCommandEvent& event );
		void m_textCtrlTimeDisplayOnTextEnter( wxCommandEvent& event );
		void m_comboBoxTimeDisplayOnCombobox( wxCommandEvent& event );
		void m_comboBoxTimeControlOnCombobox( wxCommandEvent& event );
		void m_textCtrlTimePositionOnTextEnter( wxCommandEvent& event );
		void m_sliderTimePositionOnScroll( wxScrollEvent& event );
		void m_textCtrlTimeFrameSizeOnTextEnter( wxCommandEvent& event );
		void m_textCtrlTimeFrameOnTextEnter( wxCommandEvent& event );
		void m_sliderTimeFrameOnScroll( wxScrollEvent& event );
		void m_textCtrlTimeFFTSizeOnTextEnter( wxCommandEvent& event );
		void m_radioBoxTimeModeOnRadioBox( wxCommandEvent& event );
		void m_comboBoxCh0CaptureOnCombobox( wxCommandEvent& event );
		void m_textCtrlCh0ScaleOnTextEnter( wxCommandEvent& event );
		void m_checkBoxSignal1OnCheckBox(wxCommandEvent& event );
		void m_checkBoxFFT1OnCheckBox(wxCommandEvent& event );
		void m_textCtrlCh0DisplayOnTextEnter( wxCommandEvent& event );
		void m_comboBoxCh0DisplayOnCombobox( wxCommandEvent& event );
		void m_checkBoxCh0InvertOnCheckBox( wxCommandEvent& event );
		void m_checkBoxCh0GroundOnCheckBox( wxCommandEvent& event );
		void m_textCtrlCh0PositionOnTextEnter( wxCommandEvent& event );
		void m_sliderCh0PositionOnScroll( wxScrollEvent& event );
		void m_comboBoxCh1CaptureOnCombobox( wxCommandEvent& event );
		void m_textCtrlCh1ScaleOnTextEnter( wxCommandEvent& event );
		void m_checkBoxSignal2OnCheckBox(wxCommandEvent& event );
		void m_checkBoxFFT2OnCheckBox(wxCommandEvent& event );
		void m_textCtrlCh1DisplayOnTextEnter( wxCommandEvent& event );
		void m_comboBoxCh1DisplayOnCombobox( wxCommandEvent& event );
		void m_checkBoxCh1InvertOnCheckBox( wxCommandEvent& event );
		void m_checkBoxCh1GroundOnCheckBox( wxCommandEvent& event );
		void m_textCtrlCh1PositionOnTextEnter( wxCommandEvent& event );
		void m_sliderCh1PositionOnScroll( wxScrollEvent& event );
		void m_comboBoxFunctionTypeOnChoice( wxCommandEvent& event );
		void m_checkBoxSignalFOnCheckBox(wxCommandEvent& event );
		void m_checkBoxFFTFOnCheckBox(wxCommandEvent& event );
		void m_checkBox1OnCheckBox( wxCommandEvent& event );
		void m_checkBox2OnCheckBox( wxCommandEvent& event );
		void m_checkBox3OnCheckBox( wxCommandEvent& event );
		void m_checkBox4OnCheckBox( wxCommandEvent& event );
		void m_checkBox5OnCheckBox( wxCommandEvent& event );
		void m_checkBox6OnCheckBox( wxCommandEvent& event );
		void m_checkBox7OnCheckBox( wxCommandEvent& event );
		void m_checkBox8OnCheckBox( wxCommandEvent& event );
		void m_checkBox9OnCheckBox( wxCommandEvent& event );
		void m_checkBox10OnCheckBox( wxCommandEvent& event );
		void m_checkBox11OnCheckBox( wxCommandEvent& event );
		void m_checkBox12OnCheckBox( wxCommandEvent& event );
		void m_checkBox13OnCheckBox( wxCommandEvent& event );
		void m_checkBox14OnCheckBox( wxCommandEvent& event );
		void m_checkBox15OnCheckBox( wxCommandEvent& event );
		void m_checkBox16OnCheckBox( wxCommandEvent& event );
		void m_comboBoxTriggerSourceOnCombobox( wxCommandEvent& event );
		void m_comboBoxTriggerSlopeOnCombobox( wxCommandEvent& event );
		void m_comboBoxTriggerOnCombobox( wxCommandEvent& event );
		void m_textCtrlTriggerLevelOnTextEnter( wxCommandEvent& event );
		void m_sliderTriggerLevelOnScroll( wxScrollEvent& event );
		void m_textCtrlTriggerHisteresisOnTextEnter( wxCommandEvent& event );
		void m_sliderTriggerHisteresisOnScroll( wxScrollEvent& event );
		void m_textCtrlTriggerPreOnTextEnter( wxCommandEvent& event );
		void m_sliderTriggerPreOnScroll( wxScrollEvent& event );
		void m_textCtrlTriggerHoldoffOnTextEnter( wxCommandEvent& event );
		void m_sliderTriggerHoldoffOnScroll( wxScrollEvent& event );
		void m_comboBoxDigitalStageOnCombobox( wxCommandEvent& event );
		void m_textCtrDigitallDelayOnTextEnter( wxCommandEvent& event );
		void m_comboBoxDigitalStageStartOnCombobox( wxCommandEvent& event );
		void m_comboBoxDigitalModeOnCombobox( wxCommandEvent& event );
		void m_comboBoxDigitalSerialChannelOnCombobox( wxCommandEvent& event );
		void m_buttonClearBits07OnButtonClick( wxCommandEvent& event );
		void m_comboBoxBit0OnCombobox( wxCommandEvent& event );
		void m_comboBoxBit1OnCombobox( wxCommandEvent& event );
		void m_comboBoxBit2OnCombobox( wxCommandEvent& event );
		void m_comboBoxBit3OnCombobox( wxCommandEvent& event );
		void m_comboBoxBit4OnCombobox( wxCommandEvent& event );
		void m_comboBoxBit5OnCombobox( wxCommandEvent& event );
		void m_comboBoxBit6OnCombobox( wxCommandEvent& event );
		void m_comboBoxBit7OnCombobox( wxCommandEvent& event );
		void m_buttonClearBits815OnButtonClick( wxCommandEvent& event );
		void m_comboBoxBit8OnCombobox( wxCommandEvent& event );
		void m_comboBoxBit9OnCombobox( wxCommandEvent& event );
		void m_comboBoxBit10OnCombobox( wxCommandEvent& event );
		void m_comboBoxBit11OnCombobox( wxCommandEvent& event );
		void m_comboBoxBit12OnCombobox( wxCommandEvent& event );
		void m_comboBoxBit13OnCombobox( wxCommandEvent& event );
		void m_comboBoxBit14OnCombobox( wxCommandEvent& event );
		void m_comboBoxBit15OnCombobox( wxCommandEvent& event );
		void m_buttonClearMaskOnButtonClick( wxCommandEvent& event );
      void m_menuItemReadEEPROMOnMenuSelection(wxCommandEvent& event);
      void m_menuItemWriteEEPROMOnMenuSelection(wxCommandEvent& event);
      void m_menuItemResetEEPROMOnMenuSelection(wxCommandEvent& event);
      void m_textCtrlDigitalVoltageOnTextEnter(wxCommandEvent& event);
      void m_buttonConnectOnButtonClick(wxCommandEvent& event);
      void m_choiceInputOutputOnChoice(wxCommandEvent& event);
      void m_choiceInputOutput1OnChoice(wxCommandEvent& event);
      void m_choiceBit0OnChoice(wxCommandEvent& event);
      void m_choiceBit1OnChoice(wxCommandEvent& event);
      void m_choiceBit2OnChoice(wxCommandEvent& event);
      void m_choiceBit3OnChoice(wxCommandEvent& event);
      void m_choiceBit4OnChoice(wxCommandEvent& event);
      void m_choiceBit5OnChoice(wxCommandEvent& event);
      void m_choiceBit6OnChoice(wxCommandEvent& event);
      void m_choiceBit7OnChoice(wxCommandEvent& event);
      void m_choiceBit8OnChoice(wxCommandEvent& event);
      void m_choiceBit9OnChoice(wxCommandEvent& event);
      void m_choiceBit10OnChoice(wxCommandEvent& event);
      void m_choiceBit11OnChoice(wxCommandEvent& event);
      void m_choiceBit12OnChoice(wxCommandEvent& event);
      void m_choiceBit13OnChoice(wxCommandEvent& event);
      void m_choiceBit14OnChoice(wxCommandEvent& event);
      void m_choiceBit15OnChoice(wxCommandEvent& event);
      void m_choiceCh0ACDCOnChoice(wxCommandEvent& event);
      void m_choiceCh1ACDCOnChoice(wxCommandEvent& event);
      void m_buttonCustomFileOnButtonClick(wxCommandEvent& event);
      void m_filePicker1OnFileChanged(wxFileDirPickerEvent& event);
      void m_textCtrlFreqDividerOnTextEnter(wxCommandEvent& event);
      void m_choiceBit158OnChoice(wxCommandEvent& event);
      void m_choiceBit70OnChoice(wxCommandEvent& event);
      void m_choiceDS815OnChoice(wxCommandEvent& event);
      void m_choiceDS70OnChoice(wxCommandEvent& event);
      void m_choiceDOnOff815OnChoice(wxCommandEvent& event);
      void m_choiceDOnOff70OnChoice(wxCommandEvent& event);
      void m_menuItemSlot1OnMenuSelection(wxCommandEvent& event);
      void m_menuItemSlot2OnMenuSelection(wxCommandEvent& event);
      void m_menuItemSlot3OnMenuSelection(wxCommandEvent& event);
      void m_menuItemSlot4OnMenuSelection(wxCommandEvent& event);
      void m_menuItemLoadOnMenuSelection(wxCommandEvent& event);
      void m_menuItemSaveFileOnMenuSelection(wxCommandEvent& event);
      void m_buttonAutoCallibrateOnButtonClick(wxCommandEvent& event);
      void m_spinBtnXPosOnSpinUp(wxSpinEvent& event);
      void m_spinBtnXPosOnSpinDown(wxSpinEvent& event);
      void m_spinBtnFrameHistoryOnSpinUp(wxSpinEvent& event);
      void m_spinBtnFrameHistoryOnSpinDown(wxSpinEvent& event);
      void m_spinBtnCh0YPosOnSpinUp(wxSpinEvent& event);
      void m_spinBtnCh0YPosOnSpinDown(wxSpinEvent& event);
      void m_spinBtnCh1YPosOnSpinUp(wxSpinEvent& event);
      void m_spinBtnCh1YPosOnSpinDown(wxSpinEvent& event);
      void m_spinBtnDigVoltageOnSpinUp(wxSpinEvent& event);
      void m_spinBtnDigVoltageOnSpinDown(wxSpinEvent& event);
      void m_spinBtnTrigLevelOnSpinUp(wxSpinEvent& event);
      void m_spinBtnTrigLevelOnSpinDown(wxSpinEvent& event);
      void m_spinBtnTrigHisOnSpinUp(wxSpinEvent& event);
      void m_spinBtnTrigHisOnSpinDown(wxSpinEvent& event);
      void m_spinBtnTrigPreOnSpinUp(wxSpinEvent& event);
      void m_spinBtnTrigPreOnSpinDown(wxSpinEvent& event);
      void m_spinBtnTrigHoldoffOnSpinUp(wxSpinEvent& event);
      void m_spinBtnTrigHoldoffOnSpinDown(wxSpinEvent& event);
      void m_buttonCurrentFrameToClipboardOnButtonClick(wxCommandEvent& event);
      void m_buttonAllFramesToClipboardOnButtonClick(wxCommandEvent& event);
      void m_buttonReArmOnButtonClick(wxCommandEvent& event);
      void m_menuItemResetToDefaultOnMenuSelection(wxCommandEvent& event);
      void m_choiceSpeedOnChoice(wxCommandEvent& event);
      void m_checkBoxXYVoltageGraphOnCheckBox(wxCommandEvent& event);
   public:
      void MenuLanguageSelection( wxCommandEvent& event );
   public:
      int  getCurrentSlot();
      void SaveOldSlotLoadNewSlot(int newSlot);
      void loadWindow(int slot);
      void loadSlot(WndMain& slot);
      void setupControl(WndMain window);
      void setupUI(WndMain window);
      void RecalculateTriggerPosition(double oldTriggerVoltagePerStep, double newTriggerVoltagePerStep);
	public:
		/** Constructor */
		OsciloskopOsciloskop( wxWindow* parent );
	//// end generated class members

};

#endif // __OsciloskopOsciloskop__
