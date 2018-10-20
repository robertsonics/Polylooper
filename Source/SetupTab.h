/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 5.3.2

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2017 - ROLI Ltd.

  ==============================================================================
*/

#pragma once

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"

class MidiTab;
class LoopTab;


//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class SetupTab  : public Component,
                  private Timer,
                  public Button::Listener,
                  public ComboBox::Listener
{
public:
    //==============================================================================
    SetupTab ();
    ~SetupTab();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.

	void setMidiComponent(MidiTab * m);
	void setLoopComponent(LoopTab * l);
	void timerCallback() override;

    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;
    void buttonClicked (Button* buttonThatWasClicked) override;
    void comboBoxChanged (ComboBox* comboBoxThatHasChanged) override;



private:
    //[UserVariables]   -- You can add your own custom variables in this section.

	MidiTab * m_midi;
	LoopTab * m_loopTab;

    //[/UserVariables]

    //==============================================================================
    std::unique_ptr<Label> label2;
    std::unique_ptr<TextButton> loadButton1;
    std::unique_ptr<TextEditor> trackText1;
    std::unique_ptr<TextButton> playButton1;
    std::unique_ptr<TextButton> stopButton1;
    std::unique_ptr<ComboBox> outBox1;
    std::unique_ptr<Label> label3;
    std::unique_ptr<TextButton> loadButton2;
    std::unique_ptr<TextEditor> trackText2;
    std::unique_ptr<TextButton> playButton2;
    std::unique_ptr<TextButton> stopButton2;
    std::unique_ptr<ComboBox> outBox2;
    std::unique_ptr<TextButton> loadButton3;
    std::unique_ptr<TextEditor> trackText3;
    std::unique_ptr<TextButton> playButton3;
    std::unique_ptr<TextButton> stopButton3;
    std::unique_ptr<ComboBox> outBox3;
    std::unique_ptr<TextButton> loadButton4;
    std::unique_ptr<TextEditor> trackText4;
    std::unique_ptr<TextButton> playButton4;
    std::unique_ptr<TextButton> stopButton4;
    std::unique_ptr<ComboBox> outBox4;
    std::unique_ptr<TextButton> loadButton5;
    std::unique_ptr<TextEditor> trackText5;
    std::unique_ptr<TextButton> playButton5;
    std::unique_ptr<TextButton> stopButton5;
    std::unique_ptr<ComboBox> outBox5;
    std::unique_ptr<TextButton> loadButton6;
    std::unique_ptr<TextEditor> trackText6;
    std::unique_ptr<TextButton> playButton6;
    std::unique_ptr<TextButton> stopButton6;
    std::unique_ptr<ComboBox> outBox6;
    std::unique_ptr<TextButton> loadButton7;
    std::unique_ptr<TextEditor> trackText7;
    std::unique_ptr<TextButton> playButton7;
    std::unique_ptr<TextButton> stopButton7;
    std::unique_ptr<ComboBox> outBox7;
    std::unique_ptr<TextButton> loadButton8;
    std::unique_ptr<TextEditor> trackText8;
    std::unique_ptr<TextButton> playButton8;
    std::unique_ptr<TextButton> stopButton8;
    std::unique_ptr<ComboBox> outBox8;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SetupTab)
};

//[EndFile] You can add extra defines here...
//[/EndFile]
