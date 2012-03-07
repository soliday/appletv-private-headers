/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library


@interface UIKeyboardInputManager : NSObject {
}
@property(assign) unsigned inputIndex;	// G=0x32f18ce1; S=0x32f18cd9; converted property
@property(assign) unsigned phraseBoundary;	// G=0x32f18d09; S=0x32f18d05; converted property
@property(assign) BOOL usesCandidateSelection;	// G=0x32f18d15; S=0x32d66499; converted property
+ (id)activeInstance;	// 0x32d6ca95
+ (void)beginRegisteringKeyplaneWithName:(id)name;	// 0x32d6ca5d
+ (void)clearAllCentroids;	// 0x32d6ced1
+ (id)dynamicDictionaryFilePathForInputMode:(id)inputMode;	// 0x32f18f0d
+ (void)endRegisteringKeyplane;	// 0x32d6d215
+ (id)keyboardUserDirectory;	// 0x32ca2fed
+ (void)registerCentroid:(CGPoint)centroid forKey:(id)key;	// 0x32d6d191
+ (void)releaseSharedInstance;	// 0x32ce9c85
+ (void)removeAllDynamicDictionaries;	// 0x32f1902d
+ (void)removeDynamicDictionaryForInputMode:(id)inputMode;	// 0x32f18f9d
+ (id)sharedInstanceForInputMode:(id)inputMode inHardwareKeyboardMode:(BOOL)hardwareKeyboardMode;	// 0x32cf2cc9
+ (id)userDictionaryWordKeyPairsFilePath;	// 0x32ca2fb9
- (void)acceptInput;	// 0x32f18cc9
- (BOOL)acceptInputString:(id)string;	// 0x32d862b9
- (BOOL)acceptsCharacter:(unsigned short)character;	// 0x32f18cf5
- (id)accessibilityLabelForCandidate:(id)candidate;	// 0x32f18df5
- (id)addInput:(id)input flags:(unsigned)flags point:(CGPoint)point deletePreceding:(unsigned *)preceding deleteFollowing:(unsigned *)following fromVariantKey:(BOOL)variantKey;	// 0x32db5b31
- (id)addInput:(id)input flags:(unsigned)flags point:(CGPoint)point firstDelete:(unsigned *)aDelete fromVariantKey:(BOOL)variantKey;	// 0x32f18ca9
- (id)addInputObject:(id)object;	// 0x32f19169
- (void)addToTypingHistory:(id)typingHistory;	// 0x32f18ef1
- (void)appendToInputContext:(id)inputContext;	// 0x32f18ccd
- (id)autocorrection;	// 0x32f18cf9
- (void)beginRegisteringKeyplaneWithName:(id)name;	// 0x32d6caa5
- (BOOL)canHandleKeyHitTest;	// 0x32f19201
- (BOOL)canUseGeometryKeyTouch;	// 0x32d6cead
- (void)candidateAccepted:(id)accepted;	// 0x32f18ef9
- (id)candidates;	// 0x32f18cfd
- (CFArrayRef)chargeableKeys;	// 0x32f19161
- (CFDictionaryRef)chargedKeyProbabilities;	// 0x32f19165
- (void)clearAllCentroids;	// 0x32f19251
- (void)clearDynamicDictionary;	// 0x32f18f09
- (void)clearInput;	// 0x32f18cc5
- (void)clearInputContext;	// 0x32f18cd5
- (void)clearKeyAreas;	// 0x32f19205
- (void)configureInputModeSpecificFeatures:(id)features withLayout:(id)layout;	// 0x32f18e15
- (void)configureKeyboard:(id)keyboard forAutocorrection:(id)autocorrection;	// 0x32cf5689
- (void)configureKeyboard:(id)keyboard forCandidates:(id)candidates;	// 0x32f18e19
- (void)decreaseUserFrequency:(id)frequency;	// 0x32f18f05
- (id)defaultCandidate;	// 0x32f18d1d
- (unsigned)defaultCandidateIndex;	// 0x32f18d21
- (id)deleteFromInput:(unsigned *)input;	// 0x32f18cbd
- (void)deleteFromStrokeHistory:(BOOL)strokeHistory;	// 0x32f19249
- (void)endRegisteringKeyplane;	// 0x32d6d249
- (id)groupedCandidatesFromCandidates:(id)candidates usingSortingMethod:(id)method;	// 0x32f18d85
- (void)groupedCandidatesFromCandidates:(id)candidates usingSortingMethod:(id)method completion:(id)completion;	// 0x32f18d89
- (void)increaseUserFrequency:(id)frequency;	// 0x32f18f01
- (unsigned)inputCount;	// 0x32f18ce5
- (BOOL)inputEmpty;	// 0x32f18ce9
// converted property getter: - (unsigned)inputIndex;	// 0x32f18ce1
- (void)inputLocationChanged;	// 0x32f18cf1
- (id)inputString;	// 0x32f18ced
- (BOOL)isSentenceDelimiter:(unsigned short)delimiter;	// 0x32dda599
- (int)keyHitTest:(CGPoint)test touchStage:(int)stage atTime:(double)time withTouch:(id)touch forceShift:(BOOL)shift;	// 0x32f1920d
- (int)keyHitTest:(CGPoint)test touchStage:(int)stage atTime:(double)time withTouch:(id)touch forceShift:(BOOL)shift forcingKey:(int)key;	// 0x32f19211
- (BOOL)keySlidIntoSwipe;	// 0x32f19245
- (void)lastAcceptedCandidateCorrected;	// 0x32f18efd
- (unsigned)maximumNumberOfColumnsForSortingMethod:(id)sortingMethod interfaceOrientation:(int)orientation isInline:(BOOL)anInline reducedWidth:(BOOL)width;	// 0x32f18d8d
- (unsigned)maximumShortcutLengthAllowed;	// 0x32f1925d
// converted property getter: - (unsigned)phraseBoundary;	// 0x32f18d09
- (void)registerCentroid:(CGPoint)centroid forKey:(id)key;	// 0x32f1924d
- (void)registerKeyArea:(CGPoint)area withRadii:(CGPoint)radii forKeyCode:(unsigned short)keyCode forLowerKey:(id)lowerKey forUpperKey:(id)upperKey;	// 0x32f19209
- (id)remainingInput;	// 0x32f18d01
- (BOOL)removeSuffixOfInputContext:(id)inputContext;	// 0x32f18cd1
- (id)searchStringForMarkedText;	// 0x32f18d29
- (void)setAutoCorrects:(BOOL)corrects;	// 0x32f18dfd
- (void)setCalculatesChargedKeyProbabilities:(BOOL)probabilities;	// 0x32f1915d
- (void)setInHardwareKeyboardMode:(BOOL)hardwareKeyboardMode;	// 0x32f18e0d
- (void)setInSplitKeyboardMode:(BOOL)splitKeyboardMode;	// 0x32f18e11
- (void)setInput:(id)input;	// 0x32f18cb5
- (void)setInput:(id)input typedString:(id)string;	// 0x32f18cb9
// converted property setter: - (void)setInputIndex:(unsigned)index;	// 0x32f18cd9
- (id)setInputObject:(id)object;	// 0x32f191b5
- (void)setKeyboardEventsLagging:(BOOL)lagging;	// 0x32f18e09
- (void)setKeyboardMatchType:(int)type;	// 0x32cf5589
- (void)setLearnsCorrection:(BOOL)correction;	// 0x32f18eed
// converted property setter: - (void)setPhraseBoundary:(unsigned)boundary;	// 0x32f18d05
- (void)setShallowPrediction:(BOOL)prediction;	// 0x32f18e01
- (void)setShift:(BOOL)shift;	// 0x32f18e05
- (void)setTypologyRecorder:(id)recorder;	// 0x32f19255
// converted property setter: - (void)setUsesCandidateSelection:(BOOL)selection;	// 0x32d66499
- (id)shadowTyping;	// 0x32f19159
- (id)shortcutConversionForInput:(id)input andExistingString:(id)string existingStringStartsInMiddleOfWord:(BOOL)word;	// 0x32f19261
- (BOOL)shouldExtendPriorWord;	// 0x32d9692d
- (BOOL)shouldShiftAfterChar:(unsigned short)aChar withSpaces:(int)spaces currentShift:(BOOL)shift;	// 0x32d96b81
- (BOOL)shouldSkipCandidateSelectionForPopupVariantString:(id)popupVariantString;	// 0x32f18d75
- (BOOL)shouldSuppressAutocorrectionWithTerminator:(id)terminator;	// 0x32f18d79
- (id)sortingMethods;	// 0x32f18d7d
- (BOOL)stringEndsWord:(id)word;	// 0x32db597d
- (id)stringForDoubleKey:(id)doubleKey;	// 0x32f18d3d
- (BOOL)suppliesCompletions;	// 0x32f18d35
- (BOOL)supportsNumberKeySelection;	// 0x32f18df9
- (BOOL)supportsSetPhraseBoundary;	// 0x32f18d11
- (BOOL)supportsShortcutConversion;	// 0x32f19259
- (BOOL)suppressCompletionsForFieldEditor;	// 0x32f18d39
- (BOOL)suppressesCandidateDisplay;	// 0x32dd812d
- (void)textAccepted:(id)accepted;	// 0x32f18ef5
- (id)titleForSortingMethod:(id)sortingMethod;	// 0x32f18d81
- (BOOL)usesAutoDeleteWord;	// 0x32f18d19
// converted property getter: - (BOOL)usesCandidateSelection;	// 0x32f18d15
- (unsigned)wordHistoryDepth;	// 0x32f18cdd
@end
