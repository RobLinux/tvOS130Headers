/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:27 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDictionary;

@interface _TVRCMRVirtualVoiceInputDeviceWrapper : NSObject {

	void* _deviceDescriptor;

}

@property (nonatomic,copy) NSArray * supportedFormats; 
@property (nonatomic,copy) NSDictionary * defaultAudioFormat; 
-(id)init;
-(void)dealloc;
-(NSArray *)supportedFormats;
-(void)setSupportedFormats:(NSArray *)arg1 ;
-(void*)deviceDescriptor;
-(NSDictionary *)defaultAudioFormat;
-(void)setDefaultAudioFormat:(NSDictionary *)arg1 ;
@end

