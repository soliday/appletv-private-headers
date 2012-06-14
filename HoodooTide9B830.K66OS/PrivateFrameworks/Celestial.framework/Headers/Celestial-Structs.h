/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

typedef struct _NSZone NSZone;

typedef struct CGPoint {
	float _field1;
	float _field2;
} CGPoint;

typedef struct OpaqueMD5CheckProgress OpaqueMD5CheckProgress;

typedef struct OpaqueFigThread OpaqueFigThread;

typedef struct OpaqueCMByteStream OpaqueCMByteStream;

typedef struct AVItemPrivate {
	id _field1;
	id _field2;
	double _field3;
	float _field4;
	float _field5;
	float _field6;
	unsigned _field7;
	BOOL _field8;
	BOOL _field9;
	id _field10;
	int _field11;
	long long _field12;
	long long _field13;
	BOOL _field14;
	id _field15;
	id _field16;
	id _field17;
	BOOL _field18;
	BOOL _field19;
	id _field20;
	id _field21;
	OpaqueMD5CheckProgress *_field22;
	OpaqueFigThread *_field23;
	OpaqueCMByteStream *_field24;
	int _field25;
	id _field26;
	id _field27;
} AVItemPrivate;

typedef struct CGSize {
	float width;
	float height;
} CGSize;

typedef struct _NSRange {
	unsigned _field1;
	unsigned _field2;
} NSRange;

typedef struct FigOpaqueMediaValidator FigOpaqueMediaValidator;

typedef struct FigMediaValidatorDataLocation {
	unsigned long long _field1;
	unsigned long long _field2;
} FigMediaValidatorDataLocation;

typedef struct AVFileValidatorPrivate {
	id _field1;
	id _field2;
	FigOpaqueMediaValidator *_field3;
	FigMediaValidatorDataLocation _field4;
	OpaqueCMByteStream *_field5;
	BOOL _field6;
	BOOL _field7;
	id _field8;
} AVFileValidatorPrivate;

typedef struct __GSFont *GSFontRef;

typedef struct __CFAttributedString *CFAttributedStringRef;

typedef struct AVSubtitleLayerUsingWebKitPrivate {
	GSFontRef _field1;
	CFAttributedStringRef _field2;
} AVSubtitleLayerUsingWebKitPrivate;

typedef struct CGContext *CGContextRef;

typedef struct AVRecorderPrivate {
	id _field1;
	id _field2;
} AVRecorderPrivate;

typedef struct __CFString *CFStringRef;

typedef struct OpaqueFigVisualContext OpaqueFigVisualContext;

typedef struct __CFRunLoop *CFRunLoopRef;

typedef struct OpaqueFigPlayer OpaqueFigPlayer;

typedef struct AVControllerPrivate {
	id _field1;
	id _field2;
	id _field3;
	id _field4;
	Class _field5;
	id _field6;
	int _field7;
	int _field8;
	float _field9;
	float _field10;
	int _field11;
	BOOL _field12;
	id _field13;
	float _field14;
	CFStringRef _field15;
	id _field16;
	BOOL _field17;
	BOOL _field18;
	BOOL _field19;
	id _field20;
	OpaqueFigVisualContext *_field21;
	id _field22;
	CFRunLoopRef _field23;
	unsigned _field24;
	int _field25;
	int _field26;
	int _field27;
	BOOL _field28;
	BOOL _field29;
	BOOL _field30;
	BOOL _field31;
	id _field32;
	OpaqueFigPlayer *_field33;
	id _field34;
	id _field35;
	id _field36;
	BOOL _field37;
	BOOL _field38;
	id _field39;
	id _field40;
	BOOL _field41;
	BOOL _field42;
	BOOL _field43;
	int _field44;
	BOOL _field45;
} AVControllerPrivate;

typedef struct OpaqueFigPlaybackItem OpaqueFigPlaybackItem;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} XXStruct_pwHToB;

typedef struct __CVBuffer *CVBufferRef;

typedef struct CGImage *CGImageRef;

typedef struct AVExternalAudioPrivate {
	BOOL _field1;
	OpaqueFigPlayer *_field2;
	id _field3;
	BOOL _field4;
} AVExternalAudioPrivate;

typedef struct AVSystemControllerPrivate {
	BOOL _field1;
	BOOL _field2;
	float _field3;
	id _field4;
	OpaqueFigPlayer *_field5;
} AVSystemControllerPrivate;

typedef struct AudioStreamBasicDescription {
	double mSampleRate;
	unsigned mFormatID;
	unsigned mFormatFlags;
	unsigned mBytesPerPacket;
	unsigned mFramesPerPacket;
	unsigned mBytesPerFrame;
	unsigned mChannelsPerFrame;
	unsigned mBitsPerChannel;
	unsigned mReserved;
} AudioStreamBasicDescription;

typedef struct OpaqueAudioFileID OpaqueAudioFileID;

typedef struct OpaqueAudioQueue OpaqueAudioQueue;

typedef struct AudioQueueLevelMeterState {
	float _field1;
	float _field2;
} AudioQueueLevelMeterState;

typedef struct AudioStreamPacketDescription AudioStreamPacketDescription;
typedef struct AudioQueueBuffer {
	unsigned _field1;
	void *_field2;
	unsigned _field3;
	void *_field4;
	unsigned _field5;
	AudioStreamPacketDescription *_field6;
	unsigned _field7;
} AudioQueueBuffer;

struct AudioStreamPacketDescription {
	long long _field1;
	unsigned _field2;
	unsigned _field3;
};

typedef struct SMPTETime {
	short _field1;
	short _field2;
	unsigned _field3;
	unsigned _field4;
	unsigned _field5;
	short _field6;
	short _field7;
	short _field8;
	short _field9;
} SMPTETime;

typedef struct AudioTimeStamp {
	double _field1;
	unsigned long long _field2;
	double _field3;
	unsigned long long _field4;
	SMPTETime _field5;
	unsigned _field6;
	unsigned _field7;
} AudioTimeStamp;

typedef struct OpaqueFigRecorder OpaqueFigRecorder;

typedef struct AVCapturePrivate {
	OpaqueFigRecorder *_field1;
} AVCapturePrivate;

typedef struct OpaqueFigRemaker OpaqueFigRemaker;

typedef struct AVRemakerPrivate {
	OpaqueFigRemaker *_field1;
	BOOL _field2;
	id _field3;
	id _field4;
	id _field5;
	id _field6;
	id _field7;
	id _field8;
	double _field9;
} AVRemakerPrivate;

typedef struct OpaqueFigTrackReader OpaqueFigTrackReader;

typedef struct _opaque_pthread_mutex_t {
	long __sig;
	BOOL __opaque[40];
} opaque_pthread_mutex_t;

typedef struct {
	float x;
	float y;
	float z;
} XXStruct_ZUkpeA;

typedef struct {
	double w;
	double x;
	double y;
	double z;
} XXStruct_N5B6hD;

typedef struct {
	double timestamp;
	float x;
	float y;
	float z;
} XXStruct_DSEUtC;

typedef struct {
	XXStruct_N5B6hD _field1;
	XXStruct_ZUkpeA _field2;
	XXStruct_ZUkpeA _field3;
	XXStruct_ZUkpeA _field4;
	int _field5;
} XXStruct_SZYEXB;

typedef struct __IOHIDEventSystemClient *IOHIDEventSystemClientRef;


