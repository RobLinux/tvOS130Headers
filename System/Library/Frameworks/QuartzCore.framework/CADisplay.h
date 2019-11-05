/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:41 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class NSArray, CADisplayMode, NSString, CADisplayAttributes, CADisplayPreferences;

@interface CADisplay : NSObject {

	void* _impl;

}

@property (nonatomic,readonly) NSArray * availableModes; 
@property (nonatomic,retain) CADisplayMode * currentMode; 
@property (nonatomic,readonly) CADisplayMode * preferredMode; 
@property (nonatomic,copy) NSString * colorMode; 
@property (assign) BOOL allowsVirtualModes; 
@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,readonly) CGRect safeBounds; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * deviceName; 
@property (nonatomic,readonly) unsigned displayId; 
@property (nonatomic,readonly) unsigned seed; 
@property (nonatomic,readonly) unsigned connectionSeed; 
@property (nonatomic,readonly) NSString * uniqueId; 
@property (nonatomic,readonly) NSString * containerId; 
@property (getter=isSupported,nonatomic,readonly) BOOL supported; 
@property (nonatomic,readonly) long long tag; 
@property (nonatomic,readonly) int processId; 
@property (getter=isExternal,nonatomic,readonly) BOOL external; 
@property (nonatomic,readonly) double refreshRate; 
@property (nonatomic,readonly) double heartbeatRate; 
@property (nonatomic,readonly) long long minimumFrameDuration; 
@property (getter=isOverscanned,nonatomic,readonly) BOOL overscanned; 
@property (nonatomic,copy) NSString * overscanAdjustment; 
@property (nonatomic,readonly) double overscanAmount; 
@property (nonatomic,readonly) CGSize overscanAmounts; 
@property (getter=isCloned,nonatomic,readonly) BOOL cloned; 
@property (getter=isCloningSupported,nonatomic,readonly) BOOL cloningSupported; 
@property (nonatomic,readonly) NSString * nativeOrientation; 
@property (nonatomic,readonly) NSString * currentOrientation; 
@property (nonatomic,readonly) unsigned odLUTVersion; 
@property (nonatomic,readonly) BOOL supportsExtendedColors; 
@property (nonatomic,readonly) CADisplayAttributes * externalDisplayAttributes; 
@property (nonatomic,readonly) int linkQuality; 
@property (assign,nonatomic) double latency; 
@property (nonatomic,copy) CADisplayPreferences * preferences; 
@property (nonatomic,readonly) NSString * productName; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)mainDisplay;
+(id)displays;
+(id)TVOutDisplay;
-(NSString *)name;
-(id)description;
-(void)dealloc;
-(void)_invalidate;
-(CADisplayMode *)currentMode;
-(long long)tag;
-(unsigned)seed;
-(NSString *)productName;
-(NSString *)uniqueId;
-(CGRect)bounds;
-(int)processId;
-(CGRect)frame;
-(unsigned)connectionSeed;
-(BOOL)isExternal;
-(id)immutableCopy;
-(unsigned)displayId;
-(NSString *)nativeOrientation;
-(NSString *)currentOrientation;
-(CADisplayMode *)preferredMode;
-(NSArray *)availableModes;
-(NSString *)deviceName;
-(BOOL)isCloningSupported;
-(BOOL)isOverscanned;
-(NSString *)overscanAdjustment;
-(CGSize)overscanAmounts;
-(double)latency;
-(double)refreshRate;
-(int)linkQuality;
-(void)update;
-(void)setLatency:(double)arg1 ;
-(BOOL)isSupported;
-(id)_initWithDisplay:(Display*)arg1 ;
-(BOOL)setDisplayProperties:(id)arg1 ;
-(NSString *)containerId;
-(void)setCurrentMode:(CADisplayMode *)arg1 ;
-(NSString *)colorMode;
-(void)setColorMode:(NSString *)arg1 ;
-(BOOL)allowsVirtualModes;
-(void)setAllowsVirtualModes:(BOOL)arg1 ;
-(CGRect)safeBounds;
-(double)heartbeatRate;
-(long long)minimumFrameDuration;
-(double)overscanAmount;
-(void)setOverscanAdjustment:(NSString *)arg1 ;
-(BOOL)isCloned;
-(unsigned)odLUTVersion;
-(BOOL)supportsExtendedColors;
-(CADisplayAttributes *)externalDisplayAttributes;
-(CADisplayPreferences *)preferences;
-(void)setPreferences:(CADisplayPreferences *)arg1 ;
-(id)preferredModeWithCriteria:(id)arg1 ;
-(id)supportedHDRModes;
-(id)preferredHDRModes;
-(id)allowedHDRModes;
-(void)overrideDisplayTimings:(id)arg1 ;
@end

