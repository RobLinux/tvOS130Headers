/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:27 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MROutputContextDataSource.h>

@class NSString, NSMutableArray;

@interface MRExternalOutputContextDataSource : MROutputContextDataSource {

	NSString* _uniqueIdentifier;
	NSMutableArray* _outputDevices;
	float _masterVolume;
	unsigned _masterVolumeControlCapabilities;

}
-(id)uniqueIdentifier;
-(float)volume;
-(id)outputDevices;
-(id)initWithUniqueIdentifier:(id)arg1 ;
-(unsigned)volumeControlCapabilities;
-(void)_reevaluateMasterVolumeControlCapabilities;
-(void)_reevaluateMasterVolume;
-(void)removeOutputDevices:(id)arg1 ;
-(float)_calculateMasterVolume;
-(unsigned)_calculateMasterVolumeCapabilities;
-(void)updateOutputDevices:(id)arg1 ;
-(void)removeAllOutputDevices;
-(void)updateVolume:(float)arg1 outputDeviceUID:(id)arg2 ;
-(void)updateVolumeControlCapabilities:(unsigned)arg1 outputDeviceUID:(id)arg2 ;
@end

