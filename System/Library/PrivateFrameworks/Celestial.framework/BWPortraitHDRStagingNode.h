/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:28 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@interface BWPortraitHDRStagingNode : BWNode {

	os_unfair_lock_s _lock;
	long long _settingsID;
	BOOL _passthroughBuffer;
	opaqueCMSampleBufferRef _stagedBuffer;

}
+(void)initialize;
-(id)init;
-(void)dealloc;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(id)nodeType;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)bufferReceivedWithFlags:(unsigned)arg1 error:(int)arg2 ;
@end

