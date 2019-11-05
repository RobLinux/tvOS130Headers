/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRAVBufferedInputStream.h>
#import <MediaRemote/AVOutputContextCommunicationChannelDelegate.h>

@class AVOutputContext, NSString;

@interface MRAVInputStream : MRAVBufferedInputStream <AVOutputContextCommunicationChannelDelegate> {

	AVOutputContext* _outputContext;

}

@property (nonatomic,readonly) AVOutputContext * outputContext;              //@synthesize outputContext=_outputContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(AVOutputContext *)outputContext;
-(void)outputContext:(id)arg1 didReceiveData:(id)arg2 fromCommunicationChannel:(id)arg3 ;
-(void)outputContext:(id)arg1 didCloseCommunicationChannel:(id)arg2 ;
-(id)initWithOutputContext:(id)arg1 ;
@end

