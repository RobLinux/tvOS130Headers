/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MediaControlReceiver.framework/MediaControlReceiver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class APReceiverMediaRemoteCommunicationChannelInternal, NSString;

@interface APReceiverMediaRemoteCommunicationChannel : NSObject {

	APReceiverMediaRemoteCommunicationChannelInternal* _commChannel;

}

@property (nonatomic,readonly) NSString * uuid; 
-(void)dealloc;
-(void)invalidate;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)uuid;
-(id)objectID;
-(void)sendData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
