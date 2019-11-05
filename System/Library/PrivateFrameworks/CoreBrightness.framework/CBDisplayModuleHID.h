/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:59 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreBrightness/CoreBrightness-Structs.h>
#import <CoreBrightness/CBModule.h>
#import <CoreBrightness/CBContainerModuleProtocol.h>

@protocol OS_os_log, OS_dispatch_queue;
@class NSObject, NSUUID, NSNumber, NSArray, NSString;

@interface CBDisplayModuleHID : CBModule <CBContainerModuleProtocol> {

	IOHIDDeviceRef _hidDisplayDevice;
	NSObject*<OS_os_log> _logHandle;
	NSObject*<OS_dispatch_queue> _queue;
	IOHIDElementRef _brightnessElement;
	IOHIDElementRef _durationElement;
	float _minNits;
	float _maxNits;
	float _currentNits;
	NSUUID* _containerID;
	NSNumber* _VID;
	NSNumber* _PID;
	NSArray* _elements;
	NSObject*<OS_dispatch_queue> _brightnessUpdateQueue;
	unsigned long long _brighntessUpdateCounter;
	float _brightnessUpdateTarget;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)start;
-(void)stop;
-(id)copyPropertyForKey:(id)arg1 ;
-(BOOL)setNits:(float)arg1 ;
-(id)initWithDevice:(unsigned)arg1 andQueue:(id)arg2 ;
-(BOOL)getNits:(float*)arg1 ;
-(float)getBrightnessForNits:(float)arg1 ;
-(BOOL)handleDisplayBrightnessProperty:(id)arg1 ;
-(BOOL)setSlider:(float)arg1 ;
-(float)getNitsForBrightness:(float)arg1 ;
-(BOOL)setNits:(float)arg1 withPeriod:(float)arg2 ;
-(id)copyPropertyForKey:(id)arg1 withParameter:(id)arg2 ;
-(void)handleNotificationForKey:(id)arg1 withProperty:(id)arg2 ;
@end

