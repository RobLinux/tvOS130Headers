/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVInternalDeviceList;

@interface AVAudioDeviceList : NSObject {

	AVInternalDeviceList* _internalList;

}

@property (nonatomic,copy) id changeListener; 
+(id)currentInputDevice;
+(BOOL)setInputDevice:(id)arg1 ;
+(id)defaultInputDevice;
+(id)defaultOutputDevice;
+(id)deviceForUID:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)devices;
-(id)outputDevices;
-(id)inputDevices;
-(void)setChangeListener:(id)arg1 ;
-(id)changeListener;
@end

