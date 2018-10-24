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
#include "MyLookAndFeel.h"

class MidiTab;

#define NUM_LOOPS		8
#define DEFAULT_VOLUME	12000
#define DEFAULT_BALANCE	8192
#define DEFAULT_PITCH	8192
#define DEFAULT_SPEED	8192
#define DEFAULT_START	0
#define DEFAULT_LENGTH	16383

typedef struct {
	int vol;
	int bal;
	int pitch;
	int speed;
	int start;
	int len;
	int divide;
	bool solo;
	bool lockLength;
} LOOP_DYNAMICS_STRUCTURE;

//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class LoopTab  : public Component,
                 private Timer,
                 public Slider::Listener,
                 public Button::Listener
{
public:
    //==============================================================================
    LoopTab ();
    ~LoopTab();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.

	void setMidiComponent(MidiTab * m);
	void showLoop(int i);
	void resetLoop(int i);
	void timerCallback() override;

    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;
    void sliderValueChanged (Slider* sliderThatWasMoved) override;
    void buttonClicked (Button* buttonThatWasClicked) override;



private:
    //[UserVariables]   -- You can add your own custom variables in this section.

	MidiTab * m_midi;
	LOOP_DYNAMICS_STRUCTURE m_loop[NUM_LOOPS];
	LOOP_DYNAMICS_STRUCTURE m_loopLast[NUM_LOOPS];

	MyLookAndFeel myLookAndFeel;

	int m_currentLoop;

    //[/UserVariables]

    //==============================================================================
    std::unique_ptr<Slider> slider1;
    std::unique_ptr<Slider> slider2;
    std::unique_ptr<Slider> slider4;
    std::unique_ptr<Slider> slider5;
    std::unique_ptr<Label> label2;
    std::unique_ptr<Label> label3;
    std::unique_ptr<Label> label4;
    std::unique_ptr<Label> label6;
    std::unique_ptr<TextButton> resetPitchButton;
    std::unique_ptr<TextButton> resetSpeedButton;
    std::unique_ptr<TextButton> divideButton;
    std::unique_ptr<TextButton> startButton;
    std::unique_ptr<TextButton> stopAllButton;
    std::unique_ptr<TextButton> stopButton;
    std::unique_ptr<TextButton> soloButton;
    std::unique_ptr<TextButton> lockLengthButton;
    std::unique_ptr<Slider> slider3;
    std::unique_ptr<Label> label5;
    std::unique_ptr<TextButton> loopButton1;
    std::unique_ptr<TextButton> resetBalanceButton;
    std::unique_ptr<TextButton> loopButton2;
    std::unique_ptr<TextButton> loopButton3;
    std::unique_ptr<TextButton> loopButton4;
    std::unique_ptr<TextButton> loopButton5;
    std::unique_ptr<TextButton> loopButton6;
    std::unique_ptr<TextButton> loopButton7;
    std::unique_ptr<TextButton> loopButton8;

    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (LoopTab)
};

//[EndFile] You can add extra defines here...
//[/EndFile]
