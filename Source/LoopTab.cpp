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

//[Headers] You can add your own extra header files here...

#include "Config.h"
#include "MidiTab.h"

//[/Headers]

#include "LoopTab.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
LoopTab::LoopTab ()
{
    //[Constructor_pre] You can add your own custom stuff here..

	LookAndFeel::setDefaultLookAndFeel(&myLookAndFeel);

    //[/Constructor_pre]
    
    int buttHeight = 40;
    int buttWidth = 54;
    int boxHeight = 36;
    int boxWidth = 62;
    int col1 = proportionOfWidth(0.04);
    int col2 = proportionOfWidth(0.24);
    int col3 = proportionOfWidth(0.43);
    int col4 = proportionOfWidth(0.63);
    int col5 = proportionOfWidth(0.81);
    int row1 = proportionOfHeight(0.04);
    int row2 = proportionOfHeight(0.10);
    int row3 = proportionOfHeight(0.16);
    int row4 = proportionOfHeight(0.41);
    int row5 = proportionOfHeight(0.52);
    int row6 = proportionOfHeight(0.63);
    int row7 = proportionOfHeight(0.74);
    int row8 = proportionOfHeight(0.85);

    loopButton1.reset (new TextButton ("start button"));
    addAndMakeVisible (loopButton1.get());
    loopButton1->setButtonText (TRANS("1"));
    loopButton1->addListener (this);
    loopButton1->setBounds (24, row1, 40, 30);
    
    loopButton2.reset (new TextButton ("start button"));
    addAndMakeVisible (loopButton2.get());
    loopButton2->setButtonText (TRANS("2"));
    loopButton2->addListener (this);
    loopButton2->setBounds (75, row1, 40, 30);
    
    loopButton3.reset (new TextButton ("start button"));
    addAndMakeVisible (loopButton3.get());
    loopButton3->setButtonText (TRANS("3"));
    loopButton3->addListener (this);
    loopButton3->setBounds (125, row1, 40, 30);
    
    loopButton4.reset (new TextButton ("start button"));
    addAndMakeVisible (loopButton4.get());
    loopButton4->setButtonText (TRANS("4"));
    loopButton4->addListener (this);
    loopButton4->setBounds (175, row1, 40, 30);
    
    loopButton5.reset (new TextButton ("start button"));
    addAndMakeVisible (loopButton5.get());
    loopButton5->setButtonText (TRANS("5"));
    loopButton5->addListener (this);
    loopButton5->setBounds (24, row2, 40, 30);
    
    loopButton6.reset (new TextButton ("start button"));
    addAndMakeVisible (loopButton6.get());
    loopButton6->setButtonText (TRANS("6"));
    loopButton6->addListener (this);
    loopButton6->setBounds (75, row2, 40, 30);
    
    loopButton7.reset (new TextButton ("start button"));
    addAndMakeVisible (loopButton7.get());
    loopButton7->setButtonText (TRANS("7"));
    loopButton7->addListener (this);
    loopButton7->setBounds (125, row2, 40, 30);
    
    loopButton8.reset (new TextButton ("start button"));
    addAndMakeVisible (loopButton8.get());
    loopButton8->setButtonText (TRANS("8"));
    loopButton8->addListener (this);
    loopButton8->setBounds (175, row2, 40, 30);
    
    slider1.reset (new Slider ("volume slider"));
    addAndMakeVisible (slider1.get());
    slider1->setRange (0, 16383, 1);
    slider1->setSliderStyle (Slider::LinearVertical);
    slider1->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider1->setColour (Slider::backgroundColourId, Colours::black);
    slider1->setColour (Slider::trackColourId, Colour (0xff2164eb));
    slider1->addListener (this);
    slider1->setBounds (col1, row3, 56, 333);

    slider2.reset (new Slider ("new slider"));
    addAndMakeVisible (slider2.get());
    slider2->setRange (0, 16383, 1);
    slider2->setSliderStyle (Slider::LinearVertical);
    slider2->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider2->setColour (Slider::backgroundColourId, Colours::black);
    slider2->setColour (Slider::trackColourId, Colour (0xff2164eb));
    slider2->addListener (this);
    slider2->setBounds (col2, row3, 56, 333);

    slider3.reset (new Slider ("new slider"));
    addAndMakeVisible (slider3.get());
    slider3->setRange (0, 16383, 1);
    slider3->setSliderStyle (Slider::LinearVertical);
    slider3->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider3->setColour (Slider::backgroundColourId, Colours::black);
    slider3->setColour (Slider::trackColourId, Colour (0xff2164eb));
    slider3->addListener (this);
    slider3->setBounds (col3, row3, 56, 333);

    slider4.reset (new Slider ("new slider"));
    addAndMakeVisible (slider4.get());
    slider4->setRange (0, 16383, 1);
    slider4->setSliderStyle (Slider::LinearVertical);
    slider4->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider4->setColour (Slider::backgroundColourId, Colours::black);
    slider4->setColour (Slider::trackColourId, Colour (0xff2164eb));
    slider4->addListener (this);
    slider4->setBounds (col4, row3, 56, 333);

    slider5.reset (new Slider ("new slider"));
    addAndMakeVisible (slider5.get());
    slider5->setRange (0, 16383, 1);
    slider5->setSliderStyle (Slider::TwoValueVertical);
    slider5->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider5->setColour (Slider::backgroundColourId, Colours::black);
    slider5->setColour (Slider::trackColourId, Colour (0xff2164eb));
    slider5->addListener (this);
    slider5->setBounds (col5, row3, 56, 333);
    
    // To do...
    
    label2.reset (new Label ("new label", TRANS("Vol\n")));
    addAndMakeVisible (label2.get());
    label2->setFont (Font (18.00f, Font::plain).withTypefaceStyle ("Regular"));
    label2->setJustificationType (Justification::centredLeft);
    label2->setEditable (false, false, false);
    label2->setColour (TextEditor::textColourId, Colours::black);
    label2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    label2->setBounds (26, 438, 40, 24);

    label3.reset (new Label ("new label", TRANS("Rate")));
    addAndMakeVisible (label3.get());
    label3->setFont (Font (18.00f, Font::plain).withTypefaceStyle ("Regular"));
    label3->setJustificationType (Justification::centredLeft);
    label3->setEditable (false, false, false);
    label3->setColour (TextEditor::textColourId, Colours::black);
    label3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    label3->setBounds (165, 438, 48, 24);

    label4.reset (new Label ("new label", TRANS("Bal")));
    addAndMakeVisible (label4.get());
    label4->setFont (Font (18.00f, Font::plain).withTypefaceStyle ("Regular"));
    label4->setJustificationType (Justification::centredLeft);
    label4->setEditable (false, false, false);
    label4->setColour (TextEditor::textColourId, Colours::black);
    label4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    label4->setBounds (99, 438, 40, 24);

    label6.reset (new Label ("new label", TRANS("Limits")));
    addAndMakeVisible (label6.get());
    label6->setFont (Font (18.00f, Font::plain).withTypefaceStyle ("Regular"));
    label6->setJustificationType (Justification::centredLeft);
    label6->setEditable (false, false, false);
    label6->setColour (TextEditor::textColourId, Colours::black);
    label6->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    label6->setBounds (312, 438, 60, 24);

    label5.reset (new Label ("new label", TRANS("Speed")));
    addAndMakeVisible (label5.get());
    label5->setFont (Font (18.00f, Font::plain).withTypefaceStyle ("Regular"));
    label5->setJustificationType (Justification::centredLeft);
    label5->setEditable (false, false, false);
    label5->setColour (TextEditor::textColourId, Colours::black);
    label5->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    label5->setBounds (232, 438, 60, 24);

    startButton.reset (new TextButton ("start button"));
    addAndMakeVisible (startButton.get());
    startButton->setButtonText (TRANS("Start"));
    startButton->addListener (this);
    startButton->setBounds (col1, row4, 50, 30);

    resetBalanceButton.reset (new TextButton ("reset balance button"));
    addAndMakeVisible (resetBalanceButton.get());
    resetBalanceButton->setButtonText (TRANS("Reset"));
    resetBalanceButton->addListener (this);
    resetBalanceButton->setBounds (91, row4, 50, 30);

    resetPitchButton.reset (new TextButton ("reset Pitch button"));
    addAndMakeVisible (resetPitchButton.get());
    resetPitchButton->setButtonText (TRANS("Reset"));
    resetPitchButton->addListener (this);
    resetPitchButton->setBounds (164, row4, 50, 30);

    resetSpeedButton.reset (new TextButton ("reset balance button"));
    addAndMakeVisible (resetSpeedButton.get());
    resetSpeedButton->setButtonText (TRANS("Reset"));
    resetSpeedButton->addListener (this);
    resetSpeedButton->setBounds (237, row4, 50, 30);

    divideButton.reset (new TextButton ("divide button"));
    addAndMakeVisible (divideButton.get());
    divideButton->setButtonText (TRANS("Div"));
    divideButton->addListener (this);
    divideButton->setBounds (314, row4, 50, 30);

    stopButton.reset (new TextButton ("stop button"));
    addAndMakeVisible (stopButton.get());
    stopButton->setButtonText (TRANS("Stop"));
    stopButton->addListener (this);
    stopButton->setBounds (16, row5, 50, 30);

    stopAllButton.reset (new TextButton ("stop all button"));
    addAndMakeVisible (stopAllButton.get());
    stopAllButton->setButtonText (TRANS("StopAll"));
    stopAllButton->addListener (this);
    stopAllButton->setBounds (91, row5, 69, 30);
    
    soloButton.reset (new TextButton ("solo button"));
    addAndMakeVisible (soloButton.get());
    soloButton->setButtonText (TRANS("Solo"));
    soloButton->addListener (this);
    soloButton->setBounds (110, row5, 50, 30);
    soloButton->setColour(TextButton::buttonOnColourId, MY_ALARM_COLOUR);

    lockLengthButton.reset (new TextButton ("lock length button"));
    addAndMakeVisible (lockLengthButton.get());
    lockLengthButton->setButtonText (TRANS("Lock"));
    lockLengthButton->addListener (this);
    lockLengthButton->setBounds (140, row5, 50, 30);
    lockLengthButton->setColour(TextButton::buttonOnColourId, MY_ALARM_COLOUR);

    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..

	m_midi = nullptr;

	for (int i = 0; i < NUM_LOOPS; i++) {
		m_loop[i].vol = DEFAULT_VOLUME;
		m_loop[i].bal = DEFAULT_BALANCE;
		m_loop[i].pitch = DEFAULT_PITCH;
		m_loop[i].speed = DEFAULT_SPEED;
		m_loop[i].start = DEFAULT_START;
		m_loop[i].len = DEFAULT_LENGTH;
		m_loop[i].solo = false;
		m_loop[i].lockLength = false;
		m_loop[i].divide = 8;
		m_loopLast[i].vol = DEFAULT_VOLUME;
		m_loopLast[i].pitch = DEFAULT_PITCH;
		m_loopLast[i].speed = DEFAULT_SPEED;
		m_loopLast[i].start = DEFAULT_START;
		m_loopLast[i].len = DEFAULT_LENGTH;
		m_loopLast[i].solo = false;
		m_loopLast[i].lockLength = false;
		m_loopLast[i].divide = 8;
	}

	m_currentLoop = 0;
	showLoop(m_currentLoop);
	startTimer(15);

    //[/Constructor]
}

LoopTab::~LoopTab()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    slider1 = nullptr;
    slider2 = nullptr;
    slider3 = nullptr;
    slider4 = nullptr;
    slider5 = nullptr;
    label2 = nullptr;
    label3 = nullptr;
    label4 = nullptr;
    label6 = nullptr;
    resetBalanceButton = nullptr;
    resetPitchButton = nullptr;
    resetSpeedButton = nullptr;
    divideButton = nullptr;
    startButton = nullptr;
    stopAllButton = nullptr;
    stopButton = nullptr;
    soloButton = nullptr;
    lockLengthButton = nullptr;
    label5 = nullptr;
    loopButton1 = nullptr;
    loopButton2 = nullptr;
    loopButton3 = nullptr;
    loopButton4 = nullptr;
    loopButton5 = nullptr;
    loopButton6 = nullptr;
    loopButton7 = nullptr;
    loopButton8 = nullptr;

    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void LoopTab::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (MY_BG_COLOUR);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void LoopTab::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    int sliderHeight = proportionOfHeight(0.55);
    int col1 = proportionOfWidth(0.04);
    int col2 = proportionOfWidth(0.24);
    int col3 = proportionOfWidth(0.43);
    int col4 = proportionOfWidth(0.62);
    int col5 = proportionOfWidth(0.81);
    int row1 = proportionOfHeight(0.04);
    int row2 = proportionOfHeight(0.11);
    int row3 = proportionOfHeight(0.18);
    int row4 = proportionOfHeight(0.72);
    int row5 = proportionOfHeight(0.78);
    int row6 = proportionOfHeight(0.89);

    loopButton1->setBounds (24, row1, 40, 35);
    loopButton2->setBounds (85, row1, 40, 35);
    loopButton3->setBounds (145, row1, 40, 35);
    loopButton4->setBounds (205, row1, 40, 35);
    loopButton5->setBounds (24, row2, 40, 35);
    loopButton6->setBounds (85, row2, 40, 35);
    loopButton7->setBounds (145, row2, 40, 35);
    loopButton8->setBounds (205, row2, 40, 35);
    slider1->setBounds (col1, row3, 56, sliderHeight);
    slider2->setBounds (col2, row3, 56, sliderHeight);
    slider3->setBounds (col3, row3, 56, sliderHeight);
    slider4->setBounds (col4, row3, 56, sliderHeight);
    slider5->setBounds (col5, row3, 56, sliderHeight);
    label2->setBounds (col1 + 6, row4, 60, 24);
    label3->setBounds (col3 + 6, row4, 60, 24);
    label4->setBounds (col2 + 6, row4, 60, 24);
    label5->setBounds (col4 + 1, row4, 60, 24);
    label6->setBounds (col5 + 2, row4, 60, 24);

    startButton->setBounds (col1, row5, 50, 35);
    resetBalanceButton->setBounds (col2, row5, 50, 35);
    resetPitchButton->setBounds (col3+3, row5, 50, 35);
    resetSpeedButton->setBounds (col4+4, row5, 50, 35);
    divideButton->setBounds (col5+4, row5, 50, 35);
    stopButton->setBounds (col1, row6, 50, 35);
    stopAllButton->setBounds (col2, row6, 70, 35);
    soloButton->setBounds (col3 + 20, row6, 50, 35);
    lockLengthButton->setBounds (col5 + 4, row6, 50, 35);

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void LoopTab::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]

	int l = m_currentLoop;

    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == slider1.get())
    {
        //[UserSliderCode_slider1] -- add your slider handling code here..

		m_loop[l].vol = (int)slider1->getValue();

        //[/UserSliderCode_slider1]
    }
    else if (sliderThatWasMoved == slider2.get())
    {
        //[UserSliderCode_slider2] -- add your slider handling code here..

		m_loop[l].bal = (int)slider2->getValue();

        //[/UserSliderCode_slider2]
    }
    else if (sliderThatWasMoved == slider3.get())
    {
        //[UserSliderCode_slider3] -- add your slider handling code here..

		m_loop[l].pitch = (int)slider3->getValue();

        //[/UserSliderCode_slider3]
    }
    else if (sliderThatWasMoved == slider4.get())
    {
        //[UserSliderCode_slider4] -- add your slider handling code here..

		m_loop[l].speed = (int)slider4->getValue();

        //[/UserSliderCode_slider4]
    }
    else if (sliderThatWasMoved == slider5.get())
    {
        //[UserSliderCode_slider5] -- add your slider handling code here..

		int minVal = (int)slider5->getMinValue();
		int maxVal = (int)slider5->getMaxValue();

		if (m_loop[l].lockLength) {
			if ((minVal + m_loop[l].len) > 16383) {
				minVal = 16383 - m_loop[l].len;
				slider5->setMinValue((double)minVal, dontSendNotification);
			}
			else {
				maxVal = minVal + m_loop[l].len;
				slider5->setMaxValue((double)maxVal, dontSendNotification);
			}
		}

		m_loop[l].start = minVal;
		m_loop[l].len = maxVal - minVal;

        //[/UserSliderCode_slider5]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}

void LoopTab::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]

	int l = m_currentLoop;

    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == resetPitchButton.get())
    {
        //[UserButtonCode_resetPitchButton] -- add your button handler code here..

		m_loop[l].pitch = DEFAULT_PITCH;
		slider3->setValue(m_loop[l].pitch, dontSendNotification);
		if (m_midi != nullptr)
			m_midi->sendLoopPitch(l, m_loop[l].pitch);

        //[/UserButtonCode_resetPitchButton]
    }
    else if (buttonThatWasClicked == resetSpeedButton.get())
    {
        //[UserButtonCode_resetSpeedButton] -- add your button handler code here..

		m_loop[l].speed = DEFAULT_SPEED;
		slider4->setValue(m_loop[l].speed, dontSendNotification);
		if (m_midi != nullptr)
			m_midi->sendLoopSpeed(l, m_loop[l].speed);

        //[/UserButtonCode_resetSpeedButton]
    }
    else if (buttonThatWasClicked == divideButton.get())
    {
        //[UserButtonCode_divideButton] -- add your button handler code here..

		if (++m_loop[l].divide >= 9)
			m_loop[l].divide = 1;
		if (m_midi != nullptr)
			m_midi->sendLoopDivide(l, +m_loop[l].divide);

		switch (m_loop[l].divide) {

		    case 8:
		        m_loop[l].start = DEFAULT_START;
		        m_loop[l].len = 16383;
		    break;

		    case 7:
		        m_loop[l].start = DEFAULT_START;
		        m_loop[l].len = (16383 * 7) >> 3;
		    break;

		    case 6:
		        m_loop[l].start = DEFAULT_START;
		        m_loop[l].len = (16383 * 3) >> 2;
		    break;

		    case 5:
		        m_loop[l].start = DEFAULT_START;
		        m_loop[l].len = (16383 * 5) >> 3;
		    break;

		    case 4:
		        m_loop[l].start = DEFAULT_START;
                m_loop[l].len = 16383 >> 1;
		    break;

		    case 3:
		        m_loop[l].start = DEFAULT_START;
		        m_loop[l].len = (16383 * 3) >> 3;
		    break;

		    case 2:
		        m_loop[l].start = DEFAULT_START;
		        m_loop[l].len = 16383 >> 2;
		    break;

		    case 1:
		        m_loop[l].start = DEFAULT_START;
		        m_loop[l].len = 16383 >> 3;
		    break;

		}

		slider5->setMinValue(m_loop[l].start, dontSendNotification);
		slider5->setMaxValue(m_loop[l].start + m_loop[l].len, dontSendNotification);
		m_loop[l].lockLength = true;
        lockLengthButton->setToggleState(true, dontSendNotification);

        //[/UserButtonCode_divideButton]
    }
    else if (buttonThatWasClicked == startButton.get())
    {
        //[UserButtonCode_startButton] -- add your button handler code here..

		if (m_midi != nullptr)
			m_midi->playLoop(l);

        //[/UserButtonCode_startButton]
    }
    else if (buttonThatWasClicked == stopAllButton.get())
    {
        //[UserButtonCode_StopAllButton] -- add your button handler code here..

		if (m_midi != nullptr) {
			for (int i = 0; i < 8; i++)
				m_midi->stopLoop(i);
		}

        //[/UserButtonCode_StopAllButton]
    }
    else if (buttonThatWasClicked == stopButton.get())
    {
        //[UserButtonCode_stopButton] -- add your button handler code here..

		if (m_midi != nullptr)
			m_midi->stopLoop(l);

        //[/UserButtonCode_stopButton]
    }
    else if (buttonThatWasClicked == soloButton.get())
    {
        //[UserButtonCode_stopButton] -- add your button handler code here..
        
        if (m_loop[l].solo) {
            m_loop[l].solo = false;
            soloButton->setToggleState(false, dontSendNotification);
        }
        else {
            m_loop[l].solo = true;
            soloButton->setToggleState(true, dontSendNotification);
        }
        //[/UserButtonCode_stopButton]
    }
    else if (buttonThatWasClicked == lockLengthButton.get())
    {
        //[UserButtonCode_stopButton] -- add your button handler code here..
        
        if (m_loop[l].lockLength) {
            m_loop[l].lockLength = false;
            lockLengthButton->setToggleState(false, dontSendNotification);
        }
        else {
            m_loop[l].lockLength = true;
            lockLengthButton->setToggleState(true, dontSendNotification);
        }
        //[/UserButtonCode_stopButton]
    }
    else if (buttonThatWasClicked == loopButton1.get())
    {
        //[UserButtonCode_loopButton1] -- add your button handler code here..

		m_currentLoop = 0;
		showLoop(m_currentLoop);

        //[/UserButtonCode_loopButton1]
    }
    else if (buttonThatWasClicked == resetBalanceButton.get())
    {
        //[UserButtonCode_resetBalanceButton] -- add your button handler code here..

		m_loop[l].bal = DEFAULT_BALANCE;
		slider2->setValue(m_loop[l].bal, dontSendNotification);
		if (m_midi != nullptr)
			m_midi->sendLoopBalance(l, m_loop[l].bal);

        //[/UserButtonCode_resetBalanceButton]
    }
    else if (buttonThatWasClicked == loopButton2.get())
    {
        //[UserButtonCode_loopButton2] -- add your button handler code here..

		m_currentLoop = 1;
		showLoop(m_currentLoop);

        //[/UserButtonCode_loopButton2]
    }
    else if (buttonThatWasClicked == loopButton3.get())
    {
        //[UserButtonCode_loopButton3] -- add your button handler code here..

		m_currentLoop = 2;
		showLoop(m_currentLoop);

        //[/UserButtonCode_loopButton3]
    }
    else if (buttonThatWasClicked == loopButton4.get())
    {
        //[UserButtonCode_loopButton4] -- add your button handler code here..

		m_currentLoop = 3;
		showLoop(m_currentLoop);

        //[/UserButtonCode_loopButton4]
    }
    else if (buttonThatWasClicked == loopButton5.get())
    {
        //[UserButtonCode_loopButton5] -- add your button handler code here..

		m_currentLoop = 4;
		showLoop(m_currentLoop);

        //[/UserButtonCode_loopButton5]
    }
    else if (buttonThatWasClicked == loopButton6.get())
    {
        //[UserButtonCode_loopButton6] -- add your button handler code here..

		m_currentLoop = 5;
		showLoop(m_currentLoop);

        //[/UserButtonCode_loopButton6]
    }
    else if (buttonThatWasClicked == loopButton7.get())
    {
        //[UserButtonCode_loopButton7] -- add your button handler code here..

		m_currentLoop = 6;
		showLoop(m_currentLoop);

        //[/UserButtonCode_loopButton7]
    }
    else if (buttonThatWasClicked == loopButton8.get())
    {
        //[UserButtonCode_loopButton8] -- add your button handler code here..

		m_currentLoop = 7;
		showLoop(m_currentLoop);

        //[/UserButtonCode_loopButton8]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...

//==============================================================================
void LoopTab::timerCallback()
{
	int l = m_currentLoop;

	if (m_loop[l].vol != m_loopLast[l].vol) {
		if (m_midi != nullptr)
			m_midi->sendLoopVol(l, m_loop[l].vol);
		m_loopLast[l].vol = m_loop[l].vol;
	}

	if (m_loop[l].bal != m_loopLast[l].bal) {
		if (m_midi != nullptr)
			m_midi->sendLoopBalance(l, m_loop[l].bal);
		m_loopLast[l].bal = m_loop[l].bal;
	}

	if (m_loop[l].pitch != m_loopLast[l].pitch) {
		if (m_midi != nullptr)
			m_midi->sendLoopPitch(l, m_loop[l].pitch);
		m_loopLast[l].pitch = m_loop[l].pitch;
	}

	if (m_loop[l].speed != m_loopLast[l].speed) {
		if (m_midi != nullptr)
			m_midi->sendLoopSpeed(l, m_loop[l].speed);
		m_loopLast[l].speed = m_loop[l].speed;
	}

	if (m_loop[l].start != m_loopLast[l].start) {
		if (m_midi != nullptr)
			m_midi->sendLoopStart(l, m_loop[l].start);
		m_loopLast[l].start = m_loop[l].start;
	}

	if (m_loop[l].len != m_loopLast[l].len) {
		if (m_midi != nullptr)
			m_midi->sendLoopLen(l, m_loop[l].len);
		m_loopLast[l].len = m_loop[l].len;
	}
}

// **************************************************************************
// setMidiComponent
// **************************************************************************
void LoopTab::setMidiComponent(MidiTab * m) {

	m_midi = (MidiTab *)m;

	//if (m_midi != nullptr)
	//	m_Output->setAudioSettings(this);
}

// **************************************************************************
// resetLoop
// **************************************************************************
void LoopTab::resetLoop(int l) {

	m_loop[l].vol = DEFAULT_VOLUME;
	m_loop[l].bal = DEFAULT_BALANCE;
	m_loop[l].pitch = DEFAULT_PITCH;
	m_loop[l].speed = DEFAULT_SPEED;
	m_loop[l].start = DEFAULT_START;
	m_loop[l].len = DEFAULT_LENGTH;
	m_loop[l].solo = false;
	m_loop[l].lockLength = false;
	m_loop[l].divide = 8;
	if (m_currentLoop == l)
		showLoop(l);
}

// **************************************************************************
// showLoop
// **************************************************************************
void LoopTab::showLoop(int l) {

	loopButton1->setToggleState(false, dontSendNotification);
	loopButton2->setToggleState(false, dontSendNotification);
	loopButton3->setToggleState(false, dontSendNotification);
	loopButton4->setToggleState(false, dontSendNotification);
	loopButton5->setToggleState(false, dontSendNotification);
	loopButton6->setToggleState(false, dontSendNotification);
	loopButton7->setToggleState(false, dontSendNotification);
	loopButton8->setToggleState(false, dontSendNotification);
	switch (l) {
	case 0:
		loopButton1->setToggleState(true, dontSendNotification);
		break;
	case 1:
		loopButton2->setToggleState(true, dontSendNotification);
		break;
	case 2:
		loopButton3->setToggleState(true, dontSendNotification);
		break;
	case 3:
		loopButton4->setToggleState(true, dontSendNotification);
		break;
	case 4:
		loopButton5->setToggleState(true, dontSendNotification);
		break;
	case 5:
		loopButton6->setToggleState(true, dontSendNotification);
		break;
	case 6:
		loopButton7->setToggleState(true, dontSendNotification);
		break;
	case 7:
		loopButton8->setToggleState(true, dontSendNotification);
		break;
	}

	slider1->setValue(m_loop[l].vol, dontSendNotification);
	slider2->setValue(m_loop[l].bal, dontSendNotification);
	slider3->setValue(m_loop[l].pitch, dontSendNotification);
	slider4->setValue(m_loop[l].speed, dontSendNotification);
	slider5->setMinValue(m_loop[l].start, dontSendNotification);
	slider5->setMaxValue(m_loop[l].start + m_loop[l].len, dontSendNotification);
    if (m_loop[l].solo)
        soloButton->setToggleState(true, dontSendNotification);
    else
        soloButton->setToggleState(false, dontSendNotification);
    if (m_loop[l].lockLength)
        lockLengthButton->setToggleState(true, dontSendNotification);
    else
        lockLengthButton->setToggleState(false, dontSendNotification);
}

//[/MiscUserCode]


//[EndFile] You can add extra defines here...
//[/EndFile]
