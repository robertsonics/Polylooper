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
#include "LoopTab.h"

//[/Headers]

#include "SetupTab.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
SetupTab::SetupTab ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]
    
    int buttHeight = 40;
    int buttWidth = 54;
    int boxHeight = 36;
    int boxWidth = 54;
    int textWidth = 48;
    int col1 = proportionOfWidth(0.04);
    int col2 = proportionOfWidth(0.24);
    int col3 = proportionOfWidth(0.42);
    int col4 = proportionOfWidth(0.63);
    int col5 = proportionOfWidth(0.81);
    int row1 = proportionOfHeight(0.08);
    int row2 = proportionOfHeight(0.19);
    int row3 = proportionOfHeight(0.30);
    int row4 = proportionOfHeight(0.41);
    int row5 = proportionOfHeight(0.52);
    int row6 = proportionOfHeight(0.63);
    int row7 = proportionOfHeight(0.74);
    int row8 = proportionOfHeight(0.85);

    // Column header labels

    //label2.reset (new Label ("new label", TRANS("Track")));
    //addAndMakeVisible (label2.get());
    //label2->setFont (Font (18.00f, Font::plain).withTypefaceStyle ("Regular"));
    //label2->setJustificationType (Justification::centredLeft);
    //label2->setEditable (false, false, false);
    //label2->setColour (TextEditor::textColourId, Colours::black);
    //label2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    //label2->setBounds (25, 43, 55, 24);

    //label3.reset (new Label ("new label", TRANS("Output")));
    //addAndMakeVisible (label3.get());
    //label3->setFont (Font (18.00f, Font::plain).withTypefaceStyle ("Regular"));
    //label3->setJustificationType (Justification::centredLeft);
    //label3->setEditable (false, false, false);
    //label3->setColour (TextEditor::textColourId, Colours::black);
    //label3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
    //label3->setBounds (169, 43, 63, 24);
    
    // Row 1
    
    trackText1.reset (new TextEditor ("new text editor"));
    addAndMakeVisible (trackText1.get());
    trackText1->setMultiLine (false);
    trackText1->setReturnKeyStartsNewLine (false);
    trackText1->setReadOnly (false);
    trackText1->setScrollbarsShown (true);
    trackText1->setCaretVisible (true);
    trackText1->setPopupMenuEnabled (true);
    trackText1->setText (TRANS("9"));
    trackText1->setBounds (col1, row1 + 2, textWidth, boxHeight);
    trackText1->setIndents(6, 10);
    
    loadButton1.reset (new TextButton ("load button"));
    addAndMakeVisible (loadButton1.get());
    loadButton1->setExplicitFocusOrder (1);
    loadButton1->setButtonText (TRANS("Load"));
    loadButton1->addListener (this);
    loadButton1->setBounds (col2, row1, buttWidth, buttHeight);
    
    outBox1.reset (new ComboBox ("new combo box"));
    addAndMakeVisible (outBox1.get());
    outBox1->setEditableText (false);
    outBox1->setJustificationType (Justification::centredLeft);
    outBox1->setTextWhenNothingSelected (String());
    outBox1->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    outBox1->addListener (this);
    outBox1->setBounds (col3, row1, boxWidth, boxHeight + 4);

    playButton1.reset (new TextButton ("play button"));
    addAndMakeVisible (playButton1.get());
    playButton1->setButtonText (TRANS("Play"));
    playButton1->addListener (this);
    playButton1->setBounds (col4, row1, buttWidth, buttHeight);

    stopButton1.reset (new TextButton ("stop button"));
    addAndMakeVisible (stopButton1.get());
    stopButton1->setButtonText (TRANS("Stop"));
    stopButton1->addListener (this);
    stopButton1->setBounds (col5, row1, buttWidth, buttHeight);

    // Row 2
    
    trackText2.reset (new TextEditor ("new text editor"));
    addAndMakeVisible (trackText2.get());
    trackText2->setMultiLine (false);
    trackText2->setReturnKeyStartsNewLine (false);
    trackText2->setReadOnly (false);
    trackText2->setScrollbarsShown (true);
    trackText2->setCaretVisible (true);
    trackText2->setPopupMenuEnabled (true);
    trackText2->setText (TRANS("9"));
    trackText2->setBounds (col1, row2 + 2, textWidth, boxHeight);
    trackText2->setIndents(6, 10);

    loadButton2.reset (new TextButton ("load button"));
    addAndMakeVisible (loadButton2.get());
    loadButton2->setExplicitFocusOrder (1);
    loadButton2->setButtonText (TRANS("Load"));
    loadButton2->addListener (this);
    loadButton2->setBounds (col2, row2, buttWidth, buttHeight);
    
    outBox2.reset (new ComboBox ("new combo box"));
    addAndMakeVisible (outBox2.get());
    outBox2->setEditableText (false);
    outBox2->setJustificationType (Justification::centredLeft);
    outBox2->setTextWhenNothingSelected (String());
    outBox2->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    outBox2->addListener (this);
    outBox2->setBounds (col3, row2, boxWidth, boxHeight + 4);
    
    playButton2.reset (new TextButton ("play button"));
    addAndMakeVisible (playButton2.get());
    playButton2->setButtonText (TRANS("Play"));
    playButton2->addListener (this);
    playButton2->setBounds (col4, row2, buttWidth, buttHeight);
    
    stopButton2.reset (new TextButton ("stop button"));
    addAndMakeVisible (stopButton2.get());
    stopButton2->setButtonText (TRANS("Stop"));
    stopButton2->addListener (this);
    stopButton2->setBounds (col5, row2, buttWidth, buttHeight);
    
    // Row 3
    
    trackText3.reset (new TextEditor ("new text editor"));
    addAndMakeVisible (trackText3.get());
    trackText3->setMultiLine (false);
    trackText3->setReturnKeyStartsNewLine (false);
    trackText3->setReadOnly (false);
    trackText3->setScrollbarsShown (true);
    trackText3->setCaretVisible (true);
    trackText3->setPopupMenuEnabled (true);
    trackText3->setText (TRANS("9"));
    trackText3->setBounds (col1, row3 + 2, textWidth, boxHeight);
    trackText3->setIndents(6, 10);

    loadButton3.reset (new TextButton ("load button"));
    addAndMakeVisible (loadButton3.get());
    loadButton3->setExplicitFocusOrder (1);
    loadButton3->setButtonText (TRANS("Load"));
    loadButton3->addListener (this);
    loadButton3->setBounds (col2, row3, buttWidth, buttHeight);
    
    outBox3.reset (new ComboBox ("new combo box"));
    addAndMakeVisible (outBox3.get());
    outBox3->setEditableText (false);
    outBox3->setJustificationType (Justification::centredLeft);
    outBox3->setTextWhenNothingSelected (String());
    outBox3->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    outBox3->addListener (this);
    outBox3->setBounds (col3, row3, boxWidth, boxHeight + 4);
    
    playButton3.reset (new TextButton ("play button"));
    addAndMakeVisible (playButton3.get());
    playButton3->setButtonText (TRANS("Play"));
    playButton3->addListener (this);
    playButton3->setBounds (col4, row3, buttWidth, buttHeight);
    
    stopButton3.reset (new TextButton ("stop button"));
    addAndMakeVisible (stopButton3.get());
    stopButton3->setButtonText (TRANS("Stop"));
    stopButton3->addListener (this);
    stopButton3->setBounds (col5, row3, buttWidth, buttHeight);
    
    // Row 4
    
    trackText4.reset (new TextEditor ("new text editor"));
    addAndMakeVisible (trackText4.get());
    trackText4->setMultiLine (false);
    trackText4->setReturnKeyStartsNewLine (false);
    trackText4->setReadOnly (false);
    trackText4->setScrollbarsShown (true);
    trackText4->setCaretVisible (true);
    trackText4->setPopupMenuEnabled (true);
    trackText4->setText (TRANS("9"));
    trackText4->setBounds (col1, row4 + 2, textWidth, boxHeight);
    trackText4->setIndents(6, 10);

    loadButton4.reset (new TextButton ("load button"));
    addAndMakeVisible (loadButton4.get());
    loadButton4->setExplicitFocusOrder (1);
    loadButton4->setButtonText (TRANS("Load"));
    loadButton4->addListener (this);
    loadButton4->setBounds (col2, row4, buttWidth, buttHeight);
    
    outBox4.reset (new ComboBox ("new combo box"));
    addAndMakeVisible (outBox4.get());
    outBox4->setEditableText (false);
    outBox4->setJustificationType (Justification::centredLeft);
    outBox4->setTextWhenNothingSelected (String());
    outBox4->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    outBox4->addListener (this);
    outBox4->setBounds (col3, row4, boxWidth, boxHeight + 4);
    
    playButton4.reset (new TextButton ("play button"));
    addAndMakeVisible (playButton4.get());
    playButton4->setButtonText (TRANS("Play"));
    playButton4->addListener (this);
    playButton4->setBounds (col4, row4, buttWidth, buttHeight);
    
    stopButton4.reset (new TextButton ("stop button"));
    addAndMakeVisible (stopButton4.get());
    stopButton4->setButtonText (TRANS("Stop"));
    stopButton4->addListener (this);
    stopButton4->setBounds (col5, row4, buttWidth, buttHeight);
    
    // Row 5
    
    trackText5.reset (new TextEditor ("new text editor"));
    addAndMakeVisible (trackText5.get());
    trackText5->setMultiLine (false);
    trackText5->setReturnKeyStartsNewLine (false);
    trackText5->setReadOnly (false);
    trackText5->setScrollbarsShown (true);
    trackText5->setCaretVisible (true);
    trackText5->setPopupMenuEnabled (true);
    trackText5->setText (TRANS("9"));
    trackText5->setBounds (col1, row5 + 2, textWidth, boxHeight);
    trackText5->setIndents(6, 10);

    loadButton5.reset (new TextButton ("load button"));
    addAndMakeVisible (loadButton5.get());
    loadButton5->setExplicitFocusOrder (1);
    loadButton5->setButtonText (TRANS("Load"));
    loadButton5->addListener (this);
    loadButton5->setBounds (col2, row5, buttWidth, buttHeight);
    
    outBox5.reset (new ComboBox ("new combo box"));
    addAndMakeVisible (outBox5.get());
    outBox5->setEditableText (false);
    outBox5->setJustificationType (Justification::centredLeft);
    outBox5->setTextWhenNothingSelected (String());
    outBox5->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    outBox5->addListener (this);
    outBox5->setBounds (col3, row5, boxWidth, boxHeight + 4);
    
    playButton5.reset (new TextButton ("play button"));
    addAndMakeVisible (playButton5.get());
    playButton5->setButtonText (TRANS("Play"));
    playButton5->addListener (this);
    playButton5->setBounds (col4, row5, buttWidth, buttHeight);
    
    stopButton5.reset (new TextButton ("stop button"));
    addAndMakeVisible (stopButton5.get());
    stopButton5->setButtonText (TRANS("Stop"));
    stopButton5->addListener (this);
    stopButton5->setBounds (col5, row5, buttWidth, buttHeight);
    
    // Row 6
    
    trackText6.reset (new TextEditor ("new text editor"));
    addAndMakeVisible (trackText6.get());
    trackText6->setMultiLine (false);
    trackText6->setReturnKeyStartsNewLine (false);
    trackText6->setReadOnly (false);
    trackText6->setScrollbarsShown (true);
    trackText6->setCaretVisible (true);
    trackText6->setPopupMenuEnabled (true);
    trackText6->setText (TRANS("9"));
    trackText6->setBounds (col1, row6 + 2, textWidth, boxHeight);
    trackText6->setIndents(6, 10);

    loadButton6.reset (new TextButton ("load button"));
    addAndMakeVisible (loadButton6.get());
    loadButton6->setExplicitFocusOrder (1);
    loadButton6->setButtonText (TRANS("Load"));
    loadButton6->addListener (this);
    loadButton6->setBounds (col2, row6, buttWidth, buttHeight);
    
    outBox6.reset (new ComboBox ("new combo box"));
    addAndMakeVisible (outBox6.get());
    outBox6->setEditableText (false);
    outBox6->setJustificationType (Justification::centredLeft);
    outBox6->setTextWhenNothingSelected (String());
    outBox6->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    outBox6->addListener (this);
    outBox6->setBounds (col3, row6, boxWidth, boxHeight + 4);
    
    playButton6.reset (new TextButton ("play button"));
    addAndMakeVisible (playButton6.get());
    playButton6->setButtonText (TRANS("Play"));
    playButton6->addListener (this);
    playButton6->setBounds (col4, row6, buttWidth, buttHeight);
    
    stopButton6.reset (new TextButton ("stop button"));
    addAndMakeVisible (stopButton6.get());
    stopButton6->setButtonText (TRANS("Stop"));
    stopButton6->addListener (this);
    stopButton6->setBounds (col5, row1, buttWidth, buttHeight);
    
    // Row 7
    
    trackText7.reset (new TextEditor ("new text editor"));
    addAndMakeVisible (trackText7.get());
    trackText7->setMultiLine (false);
    trackText7->setReturnKeyStartsNewLine (false);
    trackText7->setReadOnly (false);
    trackText7->setScrollbarsShown (true);
    trackText7->setCaretVisible (true);
    trackText7->setPopupMenuEnabled (true);
    trackText7->setText (TRANS("9"));
    trackText7->setBounds (col1, row7 + 2, textWidth, boxHeight);
    trackText7->setIndents(6, 10);

    loadButton7.reset (new TextButton ("load button"));
    addAndMakeVisible (loadButton7.get());
    loadButton7->setExplicitFocusOrder (1);
    loadButton7->setButtonText (TRANS("Load"));
    loadButton7->addListener (this);
    loadButton7->setBounds (col2, row7, buttWidth, buttHeight);
    
    outBox7.reset (new ComboBox ("new combo box"));
    addAndMakeVisible (outBox7.get());
    outBox7->setEditableText (false);
    outBox7->setJustificationType (Justification::centredLeft);
    outBox7->setTextWhenNothingSelected (String());
    outBox7->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    outBox7->addListener (this);
    outBox7->setBounds (col3, row7, boxWidth, boxHeight + 4);
    
    playButton7.reset (new TextButton ("play button"));
    addAndMakeVisible (playButton7.get());
    playButton7->setButtonText (TRANS("Play"));
    playButton7->addListener (this);
    playButton7->setBounds (col4, row7, buttWidth, buttHeight);
    
    stopButton7.reset (new TextButton ("stop button"));
    addAndMakeVisible (stopButton7.get());
    stopButton7->setButtonText (TRANS("Stop"));
    stopButton7->addListener (this);
    stopButton7->setBounds (col5, row7, buttWidth, buttHeight);
    
    // Row 8
    
    trackText8.reset (new TextEditor ("new text editor"));
    addAndMakeVisible (trackText8.get());
    trackText8->setMultiLine (false);
    trackText8->setReturnKeyStartsNewLine (false);
    trackText8->setReadOnly (false);
    trackText8->setScrollbarsShown (true);
    trackText8->setCaretVisible (true);
    trackText8->setPopupMenuEnabled (true);
    trackText8->setText (TRANS("9"));
    trackText8->setBounds (col1, row8 + 2, textWidth, boxHeight);
    trackText8->setIndents(6, 10);

    loadButton8.reset (new TextButton ("load button"));
    addAndMakeVisible (loadButton8.get());
    loadButton8->setExplicitFocusOrder (1);
    loadButton8->setButtonText (TRANS("Load"));
    loadButton8->addListener (this);
    loadButton8->setBounds (col2, row8, buttWidth, buttHeight);
    
    outBox8.reset (new ComboBox ("new combo box"));
    addAndMakeVisible (outBox8.get());
    outBox8->setEditableText (false);
    outBox8->setJustificationType (Justification::centredLeft);
    outBox8->setTextWhenNothingSelected (String());
    outBox8->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    outBox8->addListener (this);
    outBox8->setBounds (col3, row8, boxWidth, boxHeight + 4);
    
    playButton8.reset (new TextButton ("play button"));
    addAndMakeVisible (playButton8.get());
    playButton8->setButtonText (TRANS("Play"));
    playButton8->addListener (this);
    playButton8->setBounds (col4, row8, buttWidth, buttHeight);
    
    stopButton8.reset (new TextButton ("stop button"));
    addAndMakeVisible (stopButton8.get());
    stopButton8->setButtonText (TRANS("Stop"));
    stopButton8->addListener (this);
    stopButton8->setBounds (col5, row8, buttWidth, buttHeight);

    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..

	m_midi = nullptr;
	m_loopTab = nullptr;

	trackText1->setInputRestrictions(4, "0123456789");
	trackText1->setFont(Font(16, Font::plain));
	trackText1->setText(String(1), dontSendNotification);

	trackText2->setInputRestrictions(4, "0123456789");
	trackText2->setFont(Font(16, Font::plain));
	trackText2->setText(String(2), dontSendNotification);

	trackText3->setInputRestrictions(4, "0123456789");
	trackText3->setFont(Font(16, Font::plain));
	trackText3->setText(String(3), dontSendNotification);

	trackText4->setInputRestrictions(4, "0123456789");
	trackText4->setFont(Font(16, Font::plain));
	trackText4->setText(String(4), dontSendNotification);

	trackText5->setInputRestrictions(4, "0123456789");
	trackText5->setFont(Font(16, Font::plain));
	trackText5->setText(String(5), dontSendNotification);

	trackText6->setInputRestrictions(4, "0123456789");
	trackText6->setFont(Font(16, Font::plain));
	trackText6->setText(String(6), dontSendNotification);

	trackText7->setInputRestrictions(4, "0123456789");
	trackText7->setFont(Font(16, Font::plain));
	trackText7->setText(String(7), dontSendNotification);

	trackText8->setInputRestrictions(4, "0123456789");
	trackText8->setFont(Font(16, Font::plain));
	trackText8->setText(String(8), dontSendNotification);

	outBox1->addItem("1/2", 1);
	outBox1->addItem("3/4", 2);
	outBox1->addItem("5/6", 3);
	outBox1->addItem("7/8", 4);
	outBox1->setSelectedId(1, dontSendNotification);

	outBox2->addItem("1/2", 1);
	outBox2->addItem("3/4", 2);
	outBox2->addItem("5/6", 3);
	outBox2->addItem("7/8", 4);
	outBox2->setSelectedId(1, dontSendNotification);

	outBox3->addItem("1/2", 1);
	outBox3->addItem("3/4", 2);
	outBox3->addItem("5/6", 3);
	outBox3->addItem("7/8", 4);
	outBox3->setSelectedId(1, dontSendNotification);

	outBox4->addItem("1/2", 1);
	outBox4->addItem("3/4", 2);
	outBox4->addItem("5/6", 3);
	outBox4->addItem("7/8", 4);
	outBox4->setSelectedId(1, dontSendNotification);

	outBox5->addItem("1/2", 1);
	outBox5->addItem("3/4", 2);
	outBox5->addItem("5/6", 3);
	outBox5->addItem("7/8", 4);
	outBox5->setSelectedId(1, dontSendNotification);

	outBox6->addItem("1/2", 1);
	outBox6->addItem("3/4", 2);
	outBox6->addItem("5/6", 3);
	outBox6->addItem("7/8", 4);
	outBox6->setSelectedId(1, dontSendNotification);

	outBox7->addItem("1/2", 1);
	outBox7->addItem("3/4", 2);
	outBox7->addItem("5/6", 3);
	outBox7->addItem("7/8", 4);
	outBox7->setSelectedId(1, dontSendNotification);

	outBox8->addItem("1/2", 1);
	outBox8->addItem("3/4", 2);
	outBox8->addItem("5/6", 3);
	outBox8->addItem("7/8", 4);
	outBox8->setSelectedId(1, dontSendNotification);

	playButton1->setEnabled(false);
	playButton2->setEnabled(false);
	playButton3->setEnabled(false);
	playButton4->setEnabled(false);
	playButton5->setEnabled(false);
	playButton6->setEnabled(false);
	playButton7->setEnabled(false);
	playButton8->setEnabled(false);

	stopButton1->setEnabled(false);
	stopButton2->setEnabled(false);
	stopButton3->setEnabled(false);
	stopButton4->setEnabled(false);
	stopButton5->setEnabled(false);
	stopButton6->setEnabled(false);
	stopButton7->setEnabled(false);
	stopButton8->setEnabled(false);

	//startTimer(15);

    //[/Constructor]
}

SetupTab::~SetupTab()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    //label2 = nullptr;
    //label3 = nullptr;
    loadButton1 = nullptr;
    trackText1 = nullptr;
    playButton1 = nullptr;
    stopButton1 = nullptr;
    outBox1 = nullptr;
    loadButton2 = nullptr;
    trackText2 = nullptr;
    playButton2 = nullptr;
    stopButton2 = nullptr;
    outBox2 = nullptr;
    loadButton3 = nullptr;
    trackText3 = nullptr;
    playButton3 = nullptr;
    stopButton3 = nullptr;
    outBox3 = nullptr;
    loadButton4 = nullptr;
    trackText4 = nullptr;
    playButton4 = nullptr;
    stopButton4 = nullptr;
    outBox4 = nullptr;
    loadButton5 = nullptr;
    trackText5 = nullptr;
    playButton5 = nullptr;
    stopButton5 = nullptr;
    outBox5 = nullptr;
    loadButton6 = nullptr;
    trackText6 = nullptr;
    playButton6 = nullptr;
    stopButton6 = nullptr;
    outBox6 = nullptr;
    loadButton7 = nullptr;
    trackText7 = nullptr;
    playButton7 = nullptr;
    stopButton7 = nullptr;
    outBox7 = nullptr;
    loadButton8 = nullptr;
    trackText8 = nullptr;
    playButton8 = nullptr;
    stopButton8 = nullptr;
    outBox8 = nullptr;

    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void SetupTab::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]
    

    g.fillAll (MY_BG_COLOUR);

   //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void SetupTab::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    int buttHeight = 40;
    int buttWidth = 54;
    int boxHeight = 36;
    int boxWidth = 62;
    int textWidth = 56;
    int col1 = proportionOfWidth(0.05);
    int col2 = proportionOfWidth(0.24);
    int col3 = proportionOfWidth(0.43);
    int col4 = proportionOfWidth(0.63);
    int col5 = proportionOfWidth(0.81);
    int row1 = proportionOfHeight(0.08);
    int row2 = proportionOfHeight(0.19);
    int row3 = proportionOfHeight(0.30);
    int row4 = proportionOfHeight(0.41);
    int row5 = proportionOfHeight(0.52);
    int row6 = proportionOfHeight(0.63);
    int row7 = proportionOfHeight(0.74);
    int row8 = proportionOfHeight(0.85);

    trackText1->setBounds (col1, row1 + 2, textWidth, boxHeight);
    loadButton1->setBounds (col2, row1, buttWidth, buttHeight);
    outBox1->setBounds (col3, row1, boxWidth, boxHeight + 4);
    playButton1->setBounds (col4, row1, buttWidth, buttHeight);
    stopButton1->setBounds (col5, row1, buttWidth, buttHeight);
    
    trackText2->setBounds (col1, row2 + 2, textWidth, boxHeight);
    loadButton2->setBounds (col2, row2, buttWidth, buttHeight);
    outBox2->setBounds (col3, row2, boxWidth, boxHeight + 4);
    playButton2->setBounds (col4, row2, buttWidth, buttHeight);
    stopButton2->setBounds (col5, row2, buttWidth, buttHeight);
    
    trackText3->setBounds (col1, row3 + 2, textWidth, boxHeight);
    loadButton3->setBounds (col2, row3, buttWidth, buttHeight);
    outBox3->setBounds (col3, row3, boxWidth, boxHeight + 4);
    playButton3->setBounds (col4, row3, buttWidth, buttHeight);
    stopButton3->setBounds (col5, row3, buttWidth, buttHeight);
    
    trackText4->setBounds (col1, row4 + 2, textWidth, boxHeight);
    loadButton4->setBounds (col2, row4, buttWidth, buttHeight);
    outBox4->setBounds (col3, row4, boxWidth, boxHeight + 4);
    playButton4->setBounds (col4, row4, buttWidth, buttHeight);
    stopButton4->setBounds (col5, row4, buttWidth, buttHeight);
    
    trackText5->setBounds (col1, row5 + 2, textWidth, boxHeight);
    loadButton5->setBounds (col2, row5, buttWidth, buttHeight);
    outBox5->setBounds (col3, row5, boxWidth, boxHeight + 4);
    playButton5->setBounds (col4, row5, buttWidth, buttHeight);
    stopButton5->setBounds (col5, row5, buttWidth, buttHeight);
    
    trackText6->setBounds (col1, row6 + 2, textWidth, boxHeight);
    loadButton6->setBounds (col2, row6, buttWidth, buttHeight);
    outBox6->setBounds (col3, row6, boxWidth, boxHeight + 4);
    playButton6->setBounds (col4, row6, buttWidth, buttHeight);
    stopButton6->setBounds (col5, row6, buttWidth, buttHeight);
    
    trackText7->setBounds (col1, row7 + 2, textWidth, boxHeight);
    loadButton7->setBounds (col2, row7, buttWidth, buttHeight);
    outBox7->setBounds (col3, row7, boxWidth, boxHeight + 4);
    playButton7->setBounds (col4, row7, buttWidth, buttHeight);
    stopButton7->setBounds (col5, row7, buttWidth, buttHeight);
    
    trackText8->setBounds (col1, row8 + 2, textWidth, boxHeight);
    loadButton8->setBounds (col2, row8, buttWidth, buttHeight);
    outBox8->setBounds (col3, row8, boxWidth, boxHeight + 4);
    playButton8->setBounds (col4, row8, buttWidth, buttHeight);
    stopButton8->setBounds (col5, row8, buttWidth, buttHeight);
    
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void SetupTab::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]

	String s;
	int t;

    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == loadButton1.get())
    {
        //[UserButtonCode_loadButton1] -- add your button handler code here..

		s = trackText1->getText();
		t = s.getIntValue();
		if ((t > 0) && (t <= 4096)) {
			if (m_midi != nullptr)
				m_midi->loadLoop(0, t);
			playButton1->setEnabled(true);
			stopButton1->setEnabled(true);
		}
		outBox1->setSelectedId(1, dontSendNotification);
		m_loopTab->resetLoop(0);

        //[/UserButtonCode_loadButton1]
    }
    else if (buttonThatWasClicked == playButton1.get())
    {
        //[UserButtonCode_playButton1] -- add your button handler code here..

		if (m_midi != nullptr)
			m_midi->playLoop(0);

        //[/UserButtonCode_playButton1]
    }
    else if (buttonThatWasClicked == stopButton1.get())
    {
        //[UserButtonCode_stopButton1] -- add your button handler code here..

		if (m_midi != nullptr)
			m_midi->stopLoop(0);

        //[/UserButtonCode_stopButton1]
    }
    else if (buttonThatWasClicked == loadButton2.get())
    {
        //[UserButtonCode_loadButton2] -- add your button handler code here..

		s = trackText2->getText();
		t = s.getIntValue();
		if ((t > 0) && (t <= 4096)) {
			if (m_midi != nullptr)
				m_midi->loadLoop(1, t);
			playButton2->setEnabled(true);
			stopButton2->setEnabled(true);
		}
		outBox2->setSelectedId(1, dontSendNotification);
		m_loopTab->resetLoop(1);

        //[/UserButtonCode_loadButton2]
    }
    else if (buttonThatWasClicked == playButton2.get())
    {
        //[UserButtonCode_playButton2] -- add your button handler code here..

		if (m_midi != nullptr)
			m_midi->playLoop(1);

        //[/UserButtonCode_playButton2]
    }
    else if (buttonThatWasClicked == stopButton2.get())
    {
        //[UserButtonCode_stopButton2] -- add your button handler code here..

		if (m_midi != nullptr)
			m_midi->stopLoop(1);

        //[/UserButtonCode_stopButton2]
    }
    else if (buttonThatWasClicked == loadButton3.get())
    {
        //[UserButtonCode_loadButton3] -- add your button handler code here..

		s = trackText3->getText();
		t = s.getIntValue();
		if ((t > 0) && (t <= 4096)) {
			if (m_midi != nullptr)
				m_midi->loadLoop(2, t);
			playButton3->setEnabled(true);
			stopButton3->setEnabled(true);
		}
		outBox3->setSelectedId(1, dontSendNotification);
		m_loopTab->resetLoop(2);

        //[/UserButtonCode_loadButton3]
    }
    else if (buttonThatWasClicked == playButton3.get())
    {
        //[UserButtonCode_playButton3] -- add your button handler code here..

		if (m_midi != nullptr)
			m_midi->playLoop(2);

        //[/UserButtonCode_playButton3]
    }
    else if (buttonThatWasClicked == stopButton3.get())
    {
        //[UserButtonCode_stopButton3] -- add your button handler code here..

		if (m_midi != nullptr)
			m_midi->stopLoop(2);

        //[/UserButtonCode_stopButton3]
    }
    else if (buttonThatWasClicked == loadButton4.get())
    {
        //[UserButtonCode_loadButton4] -- add your button handler code here..

		s = trackText4->getText();
		t = s.getIntValue();
		if ((t > 0) && (t <= 4096)) {
			if (m_midi != nullptr)
				m_midi->loadLoop(3, t);
			playButton4->setEnabled(true);
			stopButton4->setEnabled(true);
		}
		outBox4->setSelectedId(1, dontSendNotification);
		m_loopTab->resetLoop(3);

        //[/UserButtonCode_loadButton4]
    }
    else if (buttonThatWasClicked == playButton4.get())
    {
        //[UserButtonCode_playButton4] -- add your button handler code here..

		if (m_midi != nullptr)
			m_midi->playLoop(3);

        //[/UserButtonCode_playButton4]
    }
    else if (buttonThatWasClicked == stopButton4.get())
    {
        //[UserButtonCode_stopButton4] -- add your button handler code here..

		if (m_midi != nullptr)
			m_midi->stopLoop(3);

        //[/UserButtonCode_stopButton4]
    }
    else if (buttonThatWasClicked == loadButton5.get())
    {
        //[UserButtonCode_loadButton5] -- add your button handler code here..

		s = trackText5->getText();
		t = s.getIntValue();
		if ((t > 0) && (t <= 4096)) {
			if (m_midi != nullptr)
				m_midi->loadLoop(4, t);
			playButton5->setEnabled(true);
			stopButton5->setEnabled(true);
		}
		outBox5->setSelectedId(1, dontSendNotification);
		m_loopTab->resetLoop(4);

        //[/UserButtonCode_loadButton5]
    }
    else if (buttonThatWasClicked == playButton5.get())
    {
        //[UserButtonCode_playButton5] -- add your button handler code here..

		if (m_midi != nullptr)
			m_midi->playLoop(4);

        //[/UserButtonCode_playButton5]
    }
    else if (buttonThatWasClicked == stopButton5.get())
    {
        //[UserButtonCode_stopButton5] -- add your button handler code here..

		if (m_midi != nullptr)
			m_midi->stopLoop(4);

        //[/UserButtonCode_stopButton5]
    }
    else if (buttonThatWasClicked == loadButton6.get())
    {
        //[UserButtonCode_loadButton6] -- add your button handler code here..

		s = trackText6->getText();
		t = s.getIntValue();
		if ((t > 0) && (t <= 4096)) {
			if (m_midi != nullptr)
				m_midi->loadLoop(5, t);
			playButton6->setEnabled(true);
			stopButton6->setEnabled(true);
		}
		outBox6->setSelectedId(1, dontSendNotification);
		m_loopTab->resetLoop(5);

        //[/UserButtonCode_loadButton6]
    }
    else if (buttonThatWasClicked == playButton6.get())
    {
        //[UserButtonCode_playButton6] -- add your button handler code here..

		if (m_midi != nullptr)
			m_midi->playLoop(5);

        //[/UserButtonCode_playButton6]
    }
    else if (buttonThatWasClicked == stopButton6.get())
    {
        //[UserButtonCode_stopButton6] -- add your button handler code here..

		if (m_midi != nullptr)
			m_midi->stopLoop(5);

        //[/UserButtonCode_stopButton6]
    }
    else if (buttonThatWasClicked == loadButton7.get())
    {
        //[UserButtonCode_loadButton7] -- add your button handler code here..

		s = trackText7->getText();
		t = s.getIntValue();
		if ((t > 0) && (t <= 4096)) {
			if (m_midi != nullptr)
				m_midi->loadLoop(6, t);
			playButton7->setEnabled(true);
			stopButton7->setEnabled(true);
		}
		outBox7->setSelectedId(1, dontSendNotification);
		m_loopTab->resetLoop(6);

        //[/UserButtonCode_loadButton7]
    }
    else if (buttonThatWasClicked == playButton7.get())
    {
        //[UserButtonCode_playButton7] -- add your button handler code here..

		if (m_midi != nullptr)
			m_midi->playLoop(6);

        //[/UserButtonCode_playButton7]
    }
    else if (buttonThatWasClicked == stopButton7.get())
    {
        //[UserButtonCode_stopButton7] -- add your button handler code here..

		if (m_midi != nullptr)
			m_midi->stopLoop(6);

        //[/UserButtonCode_stopButton7]
    }
    else if (buttonThatWasClicked == loadButton8.get())
    {
        //[UserButtonCode_loadButton8] -- add your button handler code here..

		s = trackText8->getText();
		t = s.getIntValue();
		if ((t > 0) && (t <= 4096)) {
			if (m_midi != nullptr)
				m_midi->loadLoop(7, t);
			playButton8->setEnabled(true);
			stopButton8->setEnabled(true);
		}
		outBox8->setSelectedId(1, dontSendNotification);
		m_loopTab->resetLoop(7);

        //[/UserButtonCode_loadButton8]
    }
    else if (buttonThatWasClicked == playButton8.get())
    {
        //[UserButtonCode_playButton8] -- add your button handler code here..

		if (m_midi != nullptr)
			m_midi->playLoop(7);

        //[/UserButtonCode_playButton8]
    }
    else if (buttonThatWasClicked == stopButton8.get())
    {
        //[UserButtonCode_stopButton8] -- add your button handler code here..

		if (m_midi != nullptr)
			m_midi->stopLoop(7);

        //[/UserButtonCode_stopButton8]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}

void SetupTab::comboBoxChanged (ComboBox* comboBoxThatHasChanged)
{
    //[UsercomboBoxChanged_Pre]
    //[/UsercomboBoxChanged_Pre]

    if (comboBoxThatHasChanged == outBox1.get())
    {
        //[UserComboBoxCode_outBox1] -- add your combo box handling code here..

		if (m_midi != nullptr)
			m_midi->sendLoopOutput(0, outBox1->getSelectedId() - 1);

        //[/UserComboBoxCode_outBox1]
    }
    else if (comboBoxThatHasChanged == outBox2.get())
    {
        //[UserComboBoxCode_outBox2] -- add your combo box handling code here..

		if (m_midi != nullptr)
			m_midi->sendLoopOutput(1, outBox2->getSelectedId() - 1);

        //[/UserComboBoxCode_outBox2]
    }
    else if (comboBoxThatHasChanged == outBox3.get())
    {
        //[UserComboBoxCode_outBox3] -- add your combo box handling code here..

		if (m_midi != nullptr)
			m_midi->sendLoopOutput(2, outBox3->getSelectedId() - 1);

        //[/UserComboBoxCode_outBox3]
    }
    else if (comboBoxThatHasChanged == outBox4.get())
    {
        //[UserComboBoxCode_outBox4] -- add your combo box handling code here..

		if (m_midi != nullptr)
			m_midi->sendLoopOutput(3, outBox4->getSelectedId() - 1);

        //[/UserComboBoxCode_outBox4]
    }
    else if (comboBoxThatHasChanged == outBox5.get())
    {
        //[UserComboBoxCode_outBox5] -- add your combo box handling code here..

		if (m_midi != nullptr)
			m_midi->sendLoopOutput(4, outBox5->getSelectedId() - 1);

        //[/UserComboBoxCode_outBox5]
    }
    else if (comboBoxThatHasChanged == outBox6.get())
    {
        //[UserComboBoxCode_outBox6] -- add your combo box handling code here..

		if (m_midi != nullptr)
			m_midi->sendLoopOutput(5, outBox6->getSelectedId() - 1);

        //[/UserComboBoxCode_outBox6]
    }
    else if (comboBoxThatHasChanged == outBox7.get())
    {
        //[UserComboBoxCode_outBox7] -- add your combo box handling code here..

		if (m_midi != nullptr)
			m_midi->sendLoopOutput(6, outBox7->getSelectedId() - 1);

        //[/UserComboBoxCode_outBox7]
    }
    else if (comboBoxThatHasChanged == outBox8.get())
    {
        //[UserComboBoxCode_outBox8] -- add your combo box handling code here..

		if (m_midi != nullptr)
			m_midi->sendLoopOutput(7, outBox8->getSelectedId() - 1);

        //[/UserComboBoxCode_outBox8]
    }

    //[UsercomboBoxChanged_Post]
    //[/UsercomboBoxChanged_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...

//==============================================================================
void SetupTab::timerCallback()
{
}

// **************************************************************************
// setMidiComponent
// **************************************************************************
void SetupTab::setMidiComponent(MidiTab * m) {

	m_midi = (MidiTab *)m;
}

// **************************************************************************
// setLoopComponent
// **************************************************************************
void SetupTab::setLoopComponent(LoopTab * l) {

	m_loopTab = (LoopTab *)l;
}

//[/MiscUserCode]


//[EndFile] You can add extra defines here...
//[/EndFile]
