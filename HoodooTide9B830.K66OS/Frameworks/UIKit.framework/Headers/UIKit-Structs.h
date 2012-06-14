/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

typedef struct _NSZone NSZone;

typedef struct _NSRange {
	unsigned location;
	unsigned length;
} NSRange;

typedef struct CGPoint {
	float x;
	float y;
} CGPoint;

typedef struct CGSize {
	float width;
	float height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct __CFCharacterSet *CFCharacterSetRef;

typedef struct {
	BOOL itemIsEnabled[23];
	BOOL timeString[64];
	int gsmSignalStrengthRaw;
	int gsmSignalStrengthBars;
	BOOL serviceString[100];
	BOOL serviceCrossfadeString[100];
	BOOL serviceImages[3][100];
	BOOL operatorDirectory[1024];
	unsigned serviceContentType;
	int wifiSignalStrengthRaw;
	int wifiSignalStrengthBars;
	unsigned dataNetworkType;
	int batteryCapacity;
	unsigned batteryState;
	BOOL notChargingString[150];
	int bluetoothBatteryCapacity;
	int thermalColor;
	unsigned thermalSunlightMode : 1;
	unsigned slowActivity : 1;
	unsigned syncActivity : 1;
	BOOL activityDisplayId[256];
	unsigned bluetoothConnected : 1;
	unsigned displayRawGSMSignal : 1;
	unsigned displayRawWifiSignal : 1;
	unsigned locationIconType : 1;
} XXStruct_rfflIA;

typedef struct CGPDFDocument *CGPDFDocumentRef;

typedef struct CGPDFDictionary *CGPDFDictionaryRef;

typedef struct SBSProcessAssertion *SBSProcessAssertionRef;

typedef struct __CFDictionary *CFDictionaryRef;

typedef struct __CFString *CFStringRef;

typedef struct _xpc_connection_s xpc_connection_s;

typedef struct __GSEvent *GSEventRef;

typedef struct CGImage *CGImageRef;

typedef struct __CFMessagePort *CFMessagePortRef;

typedef struct CGPath *CGPathRef;

typedef struct CGAffineTransform {
	float a;
	float b;
	float c;
	float d;
	float tx;
	float ty;
} CGAffineTransform;

typedef struct UIEdgeInsets {
	float top;
	float left;
	float bottom;
	float right;
} UIEdgeInsets;

typedef struct {
	CGRect left;
	CGRect middle;
	CGRect right;
} XXStruct_UUz0SD;

typedef struct __IOSurface *IOSurfaceRef;

typedef struct CGColor *CGColorRef;

typedef struct {
	XXStruct_UUz0SD top;
	XXStruct_UUz0SD middle;
	XXStruct_UUz0SD bottom;
} XXStruct_4cr1oD;

typedef struct {
	int _field1;
	unsigned short _field2;
	unsigned short _field3;
	float _field4;
	float _field5;
	float _field6;
	float _field7;
	float _field8;
	float _field9;
	unsigned char _field10;
	unsigned char _field11;
	unsigned char _field12;
	struct {
		unsigned char _field1;
		unsigned char _field2;
		unsigned char _field3;
		float _field4;
		float _field5;
		CGPoint _field6;
		void *_field7;
	} _field13[0];
} XXStruct_N9tTZA;

typedef struct CGContext *CGContextRef;

typedef struct CADoublePoint {
	double x;
	double y;
} CADoublePoint;

typedef struct UIOffset {
	float horizontal;
	float vertical;
} UIOffset;

typedef struct {
	float _field1;
	float _field2;
	float _field3;
	float _field4;
	float _field5;
} XXStruct_iyXfGC;

typedef struct CGShading *CGShadingRef;

typedef struct __docFlags {
	unsigned inClose : 1;
	unsigned isOpen : 1;
	unsigned inOpen : 1;
	unsigned isAutosavingBecauseOfTimer : 1;
	unsigned versionWithoutRecentChangesIsNotLastOpened : 1;
	unsigned ignoreUndoAndRedoNotifications : 1;
	unsigned editingDisabled : 1;
	unsigned isRegisteredAsFilePresenter : 1;
	unsigned movingFile : 1;
	unsigned savingError : 1;
	unsigned inConflict : 1;
} docFlags;

typedef struct {
	id _field1;
	id _field2;
	id _field3;
	id _field4;
} XXStruct_Xx1ZfA;

typedef struct {
	int _field1;
	int _field2;
	int _field3;
	int _field4;
	BOOL _field5;
	BOOL _field6;
} XXStruct_7U_TLD;

typedef struct __mdocFlags {
	unsigned shouldWriteAdditionalContent : 1;
	unsigned _reserved : 31;
} mdocFlags;

typedef struct {
	BOOL animateContentRotation;
	BOOL preserveHeight;
	BOOL avoidFadingBottomOfContent;
	BOOL skipSnapshotOfEndState;
	float contentStretchRightEdgeInset;
	int edgeClip;
} XXStruct_tXAZTC;

typedef struct {
	id _field1;
	id _field2;
	id _field3;
	id _field4;
	id _field5;
	CGSize _field6;
} XXStruct_V3NSMA;

typedef struct {
	id _field1;
	float _field2;
	float _field3;
	XXStruct_V3NSMA _field4;
	XXStruct_V3NSMA _field5;
	XXStruct_V3NSMA _field6;
	XXStruct_V3NSMA _field7;
	BOOL _field8;
} XXStruct_wXTbsB;

typedef struct __CFArray *CFArrayRef;

typedef struct {
	int _field1;
	int _field2;
	id _field3;
	id _field4;
	float _field5;
	int _field6;
	SEL _field7;
	id _field8;
} XXStruct_b4LybD;

typedef struct __CFRunLoopObserver *CFRunLoopObserverRef;

typedef struct __CFDateFormatter *CFDateFormatterRef;

typedef struct __CFCalendar *CFCalendarRef;

typedef struct __CFDate *CFDateRef;

@class UIImage, UIView;
typedef union {
	UIImage *image;
	UIView *view;
} XXUnion_a01swB;

typedef struct {
	float _field1;
	float _field2;
	float _field3;
} XXStruct_NwkmQC;

typedef struct UIPeripheralAnimationGeometry {
	CGPoint outPosition;
	CGPoint inPosition;
	CGRect bounds;
	CGAffineTransform transform;
	float targetFrameHeightDelta;
} UIPeripheralAnimationGeometry;

typedef struct _WKClassInfo *WKClassInfoRef;

typedef struct _WKObject {
	unsigned _field1;
	WKClassInfoRef _field2;
} WKObject;

typedef struct WKView *WKViewRef;

typedef struct WKWindow {
	WKObject _field1;
	id _field2;
	CGRect _field3;
	WKViewRef _field4;
	WKViewRef _field5;
	WKViewRef _field6;
	CGSize _field7;
	CGSize _field8;
	float _field9;
	unsigned _field10 : 1;
} WKWindow;

typedef struct UIWebDocumentViewViewportConfiguration {
	CGSize size;
	float initialScale;
	float minimumScale;
	float maximumScale;
	BOOL allowsUserScaling;
} UIWebDocumentViewViewportConfiguration;

typedef struct __CFBundle *CFBundleRef;

typedef struct {
	id _field1;
	unsigned _field2;
} XXStruct_HeigOC;

typedef struct UINibDecoderObjectEntry {
	unsigned _field1;
	unsigned _field2;
} UINibDecoderObjectEntry;

typedef struct UINibDecoderValue {
	unsigned _field1;
	unsigned _field2;
} UINibDecoderValue;

typedef struct UINibArchiveTableInfo {
	unsigned count;
	unsigned offset;
} UINibArchiveTableInfo;

typedef struct UINibDecoderHeader {
	unsigned char type[10];
	unsigned formatVersion;
	unsigned coderVersion;
	UINibArchiveTableInfo objects;
	UINibArchiveTableInfo keys;
	UINibArchiveTableInfo values;
	UINibArchiveTableInfo classes;
} UINibDecoderHeader;

typedef struct UINibDecoderRecursiveState {
	int objectID;
	int nextGenericKey;
	unsigned nextValueSearchIndex;
	BOOL replaced;
} UINibDecoderRecursiveState;

@class NSString;
typedef struct UIKeyToKeyIDCache {
	NSString *previousKey[64];
	void *previousKeyID[64];
	BOOL previousKeyExists[64];
	int hashHits;
	int hashHotMisses;
	int hashColdMisses;
} UIKeyToKeyIDCache;

typedef struct UIKeyAndScopeToValueCache {
	unsigned previousScope;
	unsigned previousKey;
	UINibDecoderValue *previousValue;
} UIKeyAndScopeToValueCache;

typedef struct UIStringIDTableBucket {
	id _field1;
	unsigned _field2;
	struct UIStringIDTableBucket *_field3;
} UIStringIDTableBucket;

typedef struct SharedElements SharedElements;

template<>
struct COWQueue<writing_point16_t> {
	unsigned _field1;
	unsigned _field2;
	SharedElements *_field3;
};

template<>
struct COWQueue<int> {
	unsigned _field1;
	unsigned _field2;
	SharedElements *_field3;
};

typedef struct KBStrokeList {
	COWQueue<writing_point16_t> _field1;
	COWQueue<int> _field2;
	int _field3;
} KBStrokeList;

typedef struct __CFBoolean *CFBooleanRef;

typedef struct {
	float amount;
	int unit;
} XXStruct_tp$7nC;

typedef struct {
	XXStruct_tp$7nC _field1[4];
} XXStruct_bVmAfD;

typedef struct {
	BOOL overrideItemIsEnabled[23];
	unsigned overrideTimeString : 1;
	unsigned overrideGsmSignalStrengthRaw : 1;
	unsigned overrideGsmSignalStrengthBars : 1;
	unsigned overrideServiceString : 1;
	unsigned overrideServiceImages : 3;
	unsigned overrideOperatorDirectory : 1;
	unsigned overrideServiceContentType : 1;
	unsigned overrideWifiSignalStrengthRaw : 1;
	unsigned overrideWifiSignalStrengthBars : 1;
	unsigned overrideDataNetworkType : 1;
	unsigned disallowsCellularDataNetworkTypes : 1;
	unsigned overrideBatteryCapacity : 1;
	unsigned overrideBatteryState : 1;
	unsigned overrideBluetoothBatteryCapacity : 1;
	unsigned overrideThermalColor : 1;
	unsigned overrideSlowActivity : 1;
	unsigned overrideActivityDisplayId : 1;
	unsigned overrideBluetoothConnected : 1;
	unsigned overrideDisplayRawGSMSignal : 1;
	unsigned overrideDisplayRawWifiSignal : 1;
	XXStruct_rfflIA values;
} XXStruct_B8mWcB;

typedef struct __CFMachPort *CFMachPortRef;

typedef struct __CFRunLoopSource *CFRunLoopSourceRef;

typedef struct __CFSet *CFSetRef;

typedef struct dispatch_queue_s dispatch_queue_s;

typedef struct UIKBTheme *UIKBThemeRef;

typedef struct CGGradient *CGGradientRef;

typedef struct {
	id _field1;
	id _field2;
	int _field3;
	id _field4;
	id _field5;
	int _field6;
} XXStruct_N0zFsC;

typedef struct {
	id _field1;
	id _field2;
	BOOL _field3;
	BOOL _field4;
	unsigned long long _field5;
} XXStruct_AL9G4C;

typedef struct dispatch_semaphore_s dispatch_semaphore_s;

typedef struct __DCSDictionary *DCSDictionaryRef;

typedef struct _IndexPair {
	int first;
	int last;
} IndexPair;

typedef struct _PDFHistoryItem {
	BOOL restorePending;
	BOOL isInitialScale;
	float zoomScale;
	CGPoint contentOffset;
} PDFHistoryItem;

typedef struct __CTFont *CTFontRef;

typedef struct CGPDFFont *CGPDFFontRef;

typedef struct {
	int _field1;
	CGSize _field2;
} XXStruct_G3qrpA;


