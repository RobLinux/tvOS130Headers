/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:27 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface AXSSSwitchControlSettings : NSObject {

	BOOL _soundEffectsEnabled;
	BOOL _speechEnabled;
	NSArray* _scanningStyles;
	NSArray* _tapBehaviors;
	NSArray* _cursorSizes;
	NSArray* _postActivationScanLocations;
	double _autoScanningInterval;
	double _autoHideTimeout;
	double _pauseOnFirstItemInterval;
	unsigned long long _numberOfScanLoops;
	double _dwellDuration;
	double _repeatActionInterval;
	double _holdDuration;
	double _ignoreRepeatDuration;
	double _longPressDuration;
	double _autoTapTimeout;

}

@property (nonatomic,copy) NSArray * scanningStyles;                            //@synthesize scanningStyles=_scanningStyles - In the implementation block
@property (nonatomic,copy) NSArray * tapBehaviors;                              //@synthesize tapBehaviors=_tapBehaviors - In the implementation block
@property (nonatomic,copy) NSArray * cursorSizes;                               //@synthesize cursorSizes=_cursorSizes - In the implementation block
@property (nonatomic,copy) NSArray * postActivationScanLocations;               //@synthesize postActivationScanLocations=_postActivationScanLocations - In the implementation block
@property (assign,nonatomic) double autoScanningInterval;                       //@synthesize autoScanningInterval=_autoScanningInterval - In the implementation block
@property (assign,nonatomic) double autoHideTimeout;                            //@synthesize autoHideTimeout=_autoHideTimeout - In the implementation block
@property (assign,nonatomic) double pauseOnFirstItemInterval;                   //@synthesize pauseOnFirstItemInterval=_pauseOnFirstItemInterval - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfScanLoops;              //@synthesize numberOfScanLoops=_numberOfScanLoops - In the implementation block
@property (assign,nonatomic) double dwellDuration;                              //@synthesize dwellDuration=_dwellDuration - In the implementation block
@property (assign,nonatomic) double repeatActionInterval;                       //@synthesize repeatActionInterval=_repeatActionInterval - In the implementation block
@property (assign,nonatomic) double holdDuration;                               //@synthesize holdDuration=_holdDuration - In the implementation block
@property (assign,nonatomic) double ignoreRepeatDuration;                       //@synthesize ignoreRepeatDuration=_ignoreRepeatDuration - In the implementation block
@property (assign,nonatomic) BOOL soundEffectsEnabled;                          //@synthesize soundEffectsEnabled=_soundEffectsEnabled - In the implementation block
@property (assign,nonatomic) BOOL speechEnabled;                                //@synthesize speechEnabled=_speechEnabled - In the implementation block
@property (assign,nonatomic) double longPressDuration;                          //@synthesize longPressDuration=_longPressDuration - In the implementation block
@property (assign,nonatomic) double autoTapTimeout;                             //@synthesize autoTapTimeout=_autoTapTimeout - In the implementation block
-(id)description;
-(id)init;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(BOOL)speechEnabled;
-(void)setSpeechEnabled:(BOOL)arg1 ;
-(NSArray *)scanningStyles;
-(NSArray *)tapBehaviors;
-(NSArray *)cursorSizes;
-(NSArray *)postActivationScanLocations;
-(double)autoScanningInterval;
-(double)autoHideTimeout;
-(double)pauseOnFirstItemInterval;
-(unsigned long long)numberOfScanLoops;
-(double)dwellDuration;
-(double)repeatActionInterval;
-(double)holdDuration;
-(double)ignoreRepeatDuration;
-(BOOL)soundEffectsEnabled;
-(double)longPressDuration;
-(double)autoTapTimeout;
-(void)setScanningStyles:(NSArray *)arg1 ;
-(void)setTapBehaviors:(NSArray *)arg1 ;
-(void)setCursorSizes:(NSArray *)arg1 ;
-(void)setPostActivationScanLocations:(NSArray *)arg1 ;
-(void)setAutoScanningInterval:(double)arg1 ;
-(void)setAutoHideTimeout:(double)arg1 ;
-(void)setPauseOnFirstItemInterval:(double)arg1 ;
-(void)setNumberOfScanLoops:(unsigned long long)arg1 ;
-(void)setDwellDuration:(double)arg1 ;
-(void)setRepeatActionInterval:(double)arg1 ;
-(void)setHoldDuration:(double)arg1 ;
-(void)setIgnoreRepeatDuration:(double)arg1 ;
-(void)setSoundEffectsEnabled:(BOOL)arg1 ;
-(void)setLongPressDuration:(double)arg1 ;
-(void)setAutoTapTimeout:(double)arg1 ;
@end

