/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h> // Unknown library
#import "WebCore-Structs.h"

@class NSString, NSArray;

@interface WebEvent : NSObject {
@private
	int _type;	// 4 = 0x4
	double _timestamp;	// 8 = 0x8
	CGPoint _locationInWindow;	// 16 = 0x10
	NSString *_characters;	// 24 = 0x18
	NSString *_charactersIgnoringModifiers;	// 28 = 0x1c
	unsigned _modifierFlags;	// 32 = 0x20
	BOOL _keyRepeating;	// 36 = 0x24
	BOOL _popupVariant;	// 37 = 0x25
	unsigned short _keyCode;	// 38 = 0x26
	BOOL _tabKey;	// 40 = 0x28
	int _characterSet;	// 44 = 0x2c
	float _deltaX;	// 48 = 0x30
	float _deltaY;	// 52 = 0x34
	unsigned _touchCount;	// 56 = 0x38
	NSArray *_touchLocations;	// 60 = 0x3c
	NSArray *_touchGlobalLocations;	// 64 = 0x40
	NSArray *_touchIdentifiers;	// 68 = 0x44
	NSArray *_touchPhases;	// 72 = 0x48
	BOOL _isGesture;	// 76 = 0x4c
	float _gestureScale;	// 80 = 0x50
	float _gestureRotation;	// 84 = 0x54
}
@property(readonly, assign, nonatomic) int characterSet;	// G=0x35ccb6c1; 
@property(readonly, retain, nonatomic) NSString *characters;	// G=0x35ccb7b9; 
@property(readonly, retain, nonatomic) NSString *charactersIgnoringModifiers;	// G=0x35ccb781; 
@property(readonly, assign, nonatomic) float deltaX;	// G=0x35ccb6d1; 
@property(readonly, assign, nonatomic) float deltaY;	// G=0x35ccb6e1; 
@property(readonly, assign, nonatomic) float gestureRotation;	// G=0x35836d45; 
@property(readonly, assign, nonatomic) float gestureScale;	// G=0x35836d35; 
@property(readonly, assign, nonatomic) BOOL isGesture;	// G=0x35836d55; 
@property(readonly, assign, nonatomic) unsigned short keyCode;	// G=0x35ccb6a1; 
@property(readonly, assign, nonatomic, getter=isKeyRepeating) BOOL keyRepeating;	// G=0x35ccb681; 
@property(readonly, assign, nonatomic) CGPoint locationInWindow;	// G=0x35836081; 
@property(readonly, assign, nonatomic) unsigned modifierFlags;	// G=0x35836dd5; 
@property(readonly, assign, nonatomic, getter=isPopupVariant) BOOL popupVariant;	// G=0x35ccb691; 
@property(readonly, assign, nonatomic, getter=isTabKey) BOOL tabKey;	// G=0x35ccb6b1; 
@property(readonly, assign, nonatomic) double timestamp;	// G=0x35ccb6f1; @synthesize=_timestamp
@property(readonly, assign, nonatomic) unsigned touchCount;	// G=0x35836d25; 
@property(readonly, retain, nonatomic) NSArray *touchGlobalLocations;	// G=0x35836e61; 
@property(readonly, retain, nonatomic) NSArray *touchIdentifiers;	// G=0x35836e71; 
@property(readonly, retain, nonatomic) NSArray *touchLocations;	// G=0x35836de5; 
@property(readonly, retain, nonatomic) NSArray *touchPhases;	// G=0x35836f69; 
@property(readonly, assign, nonatomic) int type;	// G=0x35836071; @synthesize=_type
- (id)initWithKeyEventType:(int)keyEventType timeStamp:(double)stamp characters:(id)characters charactersIgnoringModifiers:(id)modifiers modifiers:(unsigned)modifiers5 isRepeating:(BOOL)repeating isPopupVariant:(BOOL)variant keyCode:(unsigned short)code isTabKey:(BOOL)key characterSet:(int)set;	// 0x35ccbef9
- (id)initWithMouseEventType:(int)mouseEventType timeStamp:(double)stamp location:(CGPoint)location;	// 0x35ccb709
- (id)initWithScrollWheelEventWithTimeStamp:(double)timeStamp location:(CGPoint)location deltaX:(float)x deltaY:(float)y;	// 0x35ccc059
- (id)initWithTouchEventType:(int)touchEventType timeStamp:(double)stamp location:(CGPoint)location modifiers:(unsigned)modifiers touchCount:(unsigned)count touchLocations:(id)locations touchGlobalLocations:(id)locations7 touchIdentifiers:(id)identifiers touchPhases:(id)phases isGesture:(BOOL)gesture gestureScale:(float)scale gestureRotation:(float)rotation;	// 0x35835db9
- (id)_characterSetDescription;	// 0x35ccb5c1
- (id)_eventDescription;	// 0x35ccb881
- (id)_modiferFlagsDescription;	// 0x35ccb51d
- (id)_touchIdentifiersDescription;	// 0x35ccbcb5
- (id)_touchLocationsDescription:(id)description;	// 0x35ccbdd9
- (id)_touchPhaseDescription:(int)description;	// 0x35ccb62d
- (id)_touchPhasesDescription;	// 0x35ccbb7d
- (id)_typeDescription;	// 0x35ccb479
// declared property getter: - (int)characterSet;	// 0x35ccb6c1
// declared property getter: - (id)characters;	// 0x35ccb7b9
// declared property getter: - (id)charactersIgnoringModifiers;	// 0x35ccb781
- (void)dealloc;	// 0x35839429
// declared property getter: - (float)deltaX;	// 0x35ccb6d1
// declared property getter: - (float)deltaY;	// 0x35ccb6e1
- (id)description;	// 0x35ccb7f1
// declared property getter: - (float)gestureRotation;	// 0x35836d45
// declared property getter: - (float)gestureScale;	// 0x35836d35
// declared property getter: - (BOOL)isGesture;	// 0x35836d55
// declared property getter: - (BOOL)isKeyRepeating;	// 0x35ccb681
// declared property getter: - (BOOL)isPopupVariant;	// 0x35ccb691
// declared property getter: - (BOOL)isTabKey;	// 0x35ccb6b1
// declared property getter: - (unsigned short)keyCode;	// 0x35ccb6a1
// declared property getter: - (CGPoint)locationInWindow;	// 0x35836081
// declared property getter: - (unsigned)modifierFlags;	// 0x35836dd5
// declared property getter: - (double)timestamp;	// 0x35ccb6f1
// declared property getter: - (unsigned)touchCount;	// 0x35836d25
// declared property getter: - (id)touchGlobalLocations;	// 0x35836e61
// declared property getter: - (id)touchIdentifiers;	// 0x35836e71
// declared property getter: - (id)touchLocations;	// 0x35836de5
// declared property getter: - (id)touchPhases;	// 0x35836f69
// declared property getter: - (int)type;	// 0x35836071
@end

