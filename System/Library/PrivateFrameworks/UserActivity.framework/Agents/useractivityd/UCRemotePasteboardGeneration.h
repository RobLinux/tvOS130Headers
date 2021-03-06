/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:35 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class UASharedPasteboardDataRequester, UASharedPasteboardInfo, NSUUID, NSObject, NSError;

@interface UCRemotePasteboardGeneration : NSObject {

	BOOL _returnEarly;
	BOOL _dataRequested;
	UASharedPasteboardDataRequester* _dataRequester;
	UASharedPasteboardInfo* _pbInfo;
	unsigned long long _state;
	long long _streamProtocolVersion;
	NSUUID* _uuid;
	NSObject*<OS_dispatch_queue> _respQueue;
	NSError* _error;

}

@property (assign) BOOL dataRequested;                                           //@synthesize dataRequested=_dataRequested - In the implementation block
@property (retain) NSUUID * uuid;                                                //@synthesize uuid=_uuid - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> respQueue;                       //@synthesize respQueue=_respQueue - In the implementation block
@property (retain) NSError * error;                                              //@synthesize error=_error - In the implementation block
@property (retain) UASharedPasteboardDataRequester * dataRequester;              //@synthesize dataRequester=_dataRequester - In the implementation block
@property (retain) UASharedPasteboardInfo * pbInfo;                              //@synthesize pbInfo=_pbInfo - In the implementation block
@property (assign) unsigned long long state;                                     //@synthesize state=_state - In the implementation block
@property (assign) BOOL returnEarly;                                             //@synthesize returnEarly=_returnEarly - In the implementation block
@property (assign) long long streamProtocolVersion;                              //@synthesize streamProtocolVersion=_streamProtocolVersion - In the implementation block
-(void)dealloc;
-(NSError *)error;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)updateState:(unsigned long long)arg1 ;
-(id)stateAsString;
-(id)initWithRequester:(id)arg1 ;
-(void)setDataRequester:(UASharedPasteboardDataRequester *)arg1 ;
-(void)setDataRequested:(BOOL)arg1 ;
-(void)setRespQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)respQueue;
-(void)setPbInfo:(UASharedPasteboardInfo *)arg1 ;
-(UASharedPasteboardInfo *)pbInfo;
-(UASharedPasteboardDataRequester *)dataRequester;
-(void)setStreamProtocolVersion:(long long)arg1 ;
-(long long)streamProtocolVersion;
-(void)requestRemoteTypeInfo:(/*^block*/id)arg1 ;
-(void)requestRemotePasteboardData:(/*^block*/id)arg1 ;
-(BOOL)returnEarly;
-(void)setReturnEarly:(BOOL)arg1 ;
-(BOOL)dataRequested;
@end

