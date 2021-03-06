/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"


@interface UIKeyboardInputManager : NSObject {
}
@property(assign) unsigned inputIndex;	// G=0x33160a25; S=0x33160a1d; converted property
@property(assign) unsigned phraseBoundary;	// G=0x33160a4d; S=0x33160a49; converted property
@property(assign) BOOL usesCandidateSelection;	// G=0x33160a59; S=0x32faab51; converted property
+ (id)activeInstance;	// 0x32fb1235
+ (void)beginRegisteringKeyplaneWithName:(id)name;	// 0x32fb11fd
+ (void)clearAllCentroids;	// 0x32fb1671
+ (id)dynamicDictionaryFilePathForInputMode:(id)inputMode;	// 0x33160c51
+ (void)endRegisteringKeyplane;	// 0x32fb19b5
+ (id)keyboardUserDirectory;	// 0x32ee7731
+ (void)registerCentroid:(CGPoint)centroid forKey:(id)key;	// 0x32fb1931
+ (void)releaseSharedInstance;	// 0x32f2d1cd
+ (void)removeAllDynamicDictionaries;	// 0x33160d71
+ (void)removeDynamicDictionaryForInputMode:(id)inputMode;	// 0x33160ce1
+ (id)sharedInstanceForInputMode:(id)inputMode inHardwareKeyboardMode:(BOOL)hardwareKeyboardMode;	// 0x32f36209
+ (id)userDictionaryWordKeyPairsFilePath;	// 0x32ee76fd
- (void)acceptInput;	// 0x33160a0d
- (BOOL)acceptInputString:(id)string;	// 0x32fcac51
- (BOOL)acceptsCharacter:(unsigned short)character;	// 0x33160a39
- (id)accessibilityLabelForCandidate:(id)candidate;	// 0x33160b39
- (id)addInput:(id)input flags:(unsigned)flags point:(CGPoint)point deletePreceding:(unsigned *)preceding deleteFollowing:(unsigned *)following fromVariantKey:(BOOL)variantKey;	// 0x32ffa5a5
- (id)addInput:(id)input flags:(unsigned)flags point:(CGPoint)point firstDelete:(unsigned *)aDelete fromVariantKey:(BOOL)variantKey;	// 0x331609ed
- (id)addInputObject:(id)object;	// 0x33160ead
- (void)addToTypingHistory:(id)typingHistory;	// 0x33160c35
- (void)appendToInputContext:(id)inputContext;	// 0x33160a11
- (id)autocorrection;	// 0x33160a3d
- (void)beginRegisteringKeyplaneWithName:(id)name;	// 0x32fb1245
- (BOOL)canHandleKeyHitTest;	// 0x33160f45
- (BOOL)canUseGeometryKeyTouch;	// 0x32fb164d
- (void)candidateAccepted:(id)accepted;	// 0x33160c3d
- (id)candidates;	// 0x33160a41
- (CFArrayRef)chargeableKeys;	// 0x33160ea5
- (CFDictionaryRef)chargedKeyProbabilities;	// 0x33160ea9
- (void)clearAllCentroids;	// 0x33160f95
- (void)clearDynamicDictionary;	// 0x33160c4d
- (void)clearInput;	// 0x33160a09
- (void)clearInputContext;	// 0x33160a19
- (void)clearKeyAreas;	// 0x33160f49
- (void)configureInputModeSpecificFeatures:(id)features withLayout:(id)layout;	// 0x33160b59
- (void)configureKeyboard:(id)keyboard forAutocorrection:(id)autocorrection;	// 0x32f38bcd
- (void)configureKeyboard:(id)keyboard forCandidates:(id)candidates;	// 0x33160b5d
- (void)decreaseUserFrequency:(id)frequency;	// 0x33160c49
- (id)defaultCandidate;	// 0x33160a61
- (unsigned)defaultCandidateIndex;	// 0x33160a65
- (id)deleteFromInput:(unsigned *)input;	// 0x33160a01
- (void)deleteFromStrokeHistory:(BOOL)strokeHistory;	// 0x33160f8d
- (void)endRegisteringKeyplane;	// 0x32fb19e9
- (id)groupedCandidatesFromCandidates:(id)candidates usingSortingMethod:(id)method;	// 0x33160ac9
- (void)groupedCandidatesFromCandidates:(id)candidates usingSortingMethod:(id)method completion:(id)completion;	// 0x33160acd
- (void)increaseUserFrequency:(id)frequency;	// 0x33160c45
- (unsigned)inputCount;	// 0x33160a29
- (BOOL)inputEmpty;	// 0x33160a2d
// converted property getter: - (unsigned)inputIndex;	// 0x33160a25
- (void)inputLocationChanged;	// 0x33160a35
- (id)inputString;	// 0x33160a31
- (BOOL)isSentenceDelimiter:(unsigned short)delimiter;	// 0x3301f061
- (int)keyHitTest:(CGPoint)test touchStage:(int)stage atTime:(double)time withTouch:(id)touch forceShift:(BOOL)shift;	// 0x33160f51
- (int)keyHitTest:(CGPoint)test touchStage:(int)stage atTime:(double)time withTouch:(id)touch forceShift:(BOOL)shift forcingKey:(int)key;	// 0x33160f55
- (BOOL)keySlidIntoSwipe;	// 0x33160f89
- (void)lastAcceptedCandidateCorrected;	// 0x33160c41
- (unsigned)maximumNumberOfColumnsForSortingMethod:(id)sortingMethod interfaceOrientation:(int)orientation isInline:(BOOL)anInline reducedWidth:(BOOL)width;	// 0x33160ad1
- (unsigned)maximumShortcutLengthAllowed;	// 0x33160fa1
// converted property getter: - (unsigned)phraseBoundary;	// 0x33160a4d
- (void)registerCentroid:(CGPoint)centroid forKey:(id)key;	// 0x33160f91
- (void)registerKeyArea:(CGPoint)area withRadii:(CGPoint)radii forKeyCode:(unsigned short)keyCode forLowerKey:(id)lowerKey forUpperKey:(id)upperKey;	// 0x33160f4d
- (id)remainingInput;	// 0x33160a45
- (BOOL)removeSuffixOfInputContext:(id)inputContext;	// 0x33160a15
- (id)searchStringForMarkedText;	// 0x33160a6d
- (void)setAutoCorrects:(BOOL)corrects;	// 0x33160b41
- (void)setCalculatesChargedKeyProbabilities:(BOOL)probabilities;	// 0x33160ea1
- (void)setInHardwareKeyboardMode:(BOOL)hardwareKeyboardMode;	// 0x33160b51
- (void)setInSplitKeyboardMode:(BOOL)splitKeyboardMode;	// 0x33160b55
- (void)setInput:(id)input;	// 0x331609f9
- (void)setInput:(id)input typedString:(id)string;	// 0x331609fd
// converted property setter: - (void)setInputIndex:(unsigned)index;	// 0x33160a1d
- (id)setInputObject:(id)object;	// 0x33160ef9
- (void)setKeyboardEventsLagging:(BOOL)lagging;	// 0x33160b4d
- (void)setKeyboardMatchType:(int)type;	// 0x32f38acd
- (void)setLearnsCorrection:(BOOL)correction;	// 0x33160c31
// converted property setter: - (void)setPhraseBoundary:(unsigned)boundary;	// 0x33160a49
- (void)setShallowPrediction:(BOOL)prediction;	// 0x33160b45
- (void)setShift:(BOOL)shift;	// 0x33160b49
- (void)setTypologyRecorder:(id)recorder;	// 0x33160f99
// converted property setter: - (void)setUsesCandidateSelection:(BOOL)selection;	// 0x32faab51
- (id)shadowTyping;	// 0x33160e9d
- (id)shortcutConversionForInput:(id)input andExistingString:(id)string existingStringStartsInMiddleOfWord:(BOOL)word;	// 0x33160fa5
- (BOOL)shouldExtendPriorWord;	// 0x32fdb3b1
- (BOOL)shouldShiftAfterChar:(unsigned short)aChar withSpaces:(int)spaces currentShift:(BOOL)shift;	// 0x32fdb605
- (BOOL)shouldSkipCandidateSelectionForPopupVariantString:(id)popupVariantString;	// 0x33160ab9
- (BOOL)shouldSuppressAutocorrectionWithTerminator:(id)terminator;	// 0x33160abd
- (id)sortingMethods;	// 0x33160ac1
- (BOOL)stringEndsWord:(id)word;	// 0x32ffa3f1
- (id)stringForDoubleKey:(id)doubleKey;	// 0x33160a81
- (BOOL)suppliesCompletions;	// 0x33160a79
- (BOOL)supportsNumberKeySelection;	// 0x33160b3d
- (BOOL)supportsSetPhraseBoundary;	// 0x33160a55
- (BOOL)supportsShortcutConversion;	// 0x33160f9d
- (BOOL)suppressCompletionsForFieldEditor;	// 0x33160a7d
- (BOOL)suppressesCandidateDisplay;	// 0x3301cbf5
- (void)textAccepted:(id)accepted;	// 0x33160c39
- (id)titleForSortingMethod:(id)sortingMethod;	// 0x33160ac5
- (BOOL)usesAutoDeleteWord;	// 0x33160a5d
// converted property getter: - (BOOL)usesCandidateSelection;	// 0x33160a59
- (unsigned)wordHistoryDepth;	// 0x33160a21
@end

