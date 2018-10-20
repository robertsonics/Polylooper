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

//[/Headers]

#include "MainComponent.h"

//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
MainComponent::MainComponent ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    tabbedComponent.reset (new TabbedComponent (TabbedButtonBar::TabsAtBottom));
    addAndMakeVisible (tabbedComponent.get());
    tabbedComponent->setTabBarDepth (32);
    tabbedComponent->setOutline(0);
    tabbedComponent->addTab (TRANS("MIDI"), MY_TAB_COLOUR, new MidiTab(), true);
    tabbedComponent->addTab (TRANS("SET"), MY_TAB_COLOUR, new SetupTab(), true);
    tabbedComponent->addTab (TRANS("LOOP"), MY_TAB_COLOUR, new LoopTab(), true);
    tabbedComponent->addTab (TRANS("TRIG"), MY_TAB_COLOUR, new TriggerTab(), true);
    tabbedComponent->setCurrentTabIndex (0);

    //[UserPreSize]
    //[/UserPreSize]

    setSize (300, 550);

    //[Constructor] You can add your own custom stuff here..

	// Subclass some LookAndFeel things
    LookAndFeel::setDefaultLookAndFeel(&myLookAndFeel);
    tabButtonBar = &tabbedComponent->getTabbedButtonBar();
    tabButtonBar->setColour(TabbedButtonBar::tabTextColourId, MY_TEXT_COLOUR);
    tabButtonBar->addChangeListener(this);
    tabbedComponent->setTabBackgroundColour(0, MY_BG_COLOUR);

	// Get pointers to all the tabs
	midiTab = (MidiTab *)tabbedComponent->getTabContentComponent(0);
	setupTab = (SetupTab *)tabbedComponent->getTabContentComponent(1);
	loopTab = (LoopTab *)tabbedComponent->getTabContentComponent(2);
	triggerTab = (TriggerTab *)tabbedComponent->getTabContentComponent(3);

	// Pass a pointer to the MidiTab to the other tabs so they can send
	//  MIDI output.
	loopTab->setMidiComponent((MidiTab *)midiTab);
	triggerTab->setMidiComponent((MidiTab *)midiTab);
	setupTab->setMidiComponent((MidiTab *)midiTab);

	// Pass LoopTab pointer to SetupTab
	setupTab->setLoopComponent((LoopTab *)loopTab);

    //[/Constructor]
}

MainComponent::~MainComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..

    //[/Destructor_pre]

    tabButtonBar->removeChangeListener(this);
    tabbedComponent = nullptr;

    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void MainComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::black);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void MainComponent::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    tabbedComponent->setBounds (0, 0, proportionOfWidth (1.0000f), proportionOfHeight (1.0000f));
    
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...


// ******************************************************************
//  changeListenerCallback
// ******************************************************************
void MainComponent::changeListenerCallback(ChangeBroadcaster *)
{
 
    int t = tabButtonBar->getCurrentTabIndex();
    for (int i = 0; i < 4; i++) {
        if (i == t)
            tabbedComponent->setTabBackgroundColour(i, MY_BG_COLOUR);
        else
            tabbedComponent->setTabBackgroundColour(i, MY_TAB_COLOUR);
    }
}

//[/MiscUserCode]


//[EndFile] You can add extra defines here...
//[/EndFile]
