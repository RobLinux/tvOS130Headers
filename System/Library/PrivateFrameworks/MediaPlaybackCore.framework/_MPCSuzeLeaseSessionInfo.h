/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:25 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ICSuzeLeaseSession, MPCSuzeLeaseSession;

@interface _MPCSuzeLeaseSessionInfo : NSObject {

	BOOL _shouldStopWhenFinished;
	long long _clientCount;
	ICSuzeLeaseSession* _icLeaseSession;
	MPCSuzeLeaseSession* _mpcLeaseSession;

}

@property (assign,nonatomic) long long clientCount;                                //@synthesize clientCount=_clientCount - In the implementation block
@property (nonatomic,readonly) ICSuzeLeaseSession * icLeaseSession;                //@synthesize icLeaseSession=_icLeaseSession - In the implementation block
@property (nonatomic,readonly) MPCSuzeLeaseSession * mpcLeaseSession;              //@synthesize mpcLeaseSession=_mpcLeaseSession - In the implementation block
@property (assign,nonatomic) BOOL shouldStopWhenFinished;                          //@synthesize shouldStopWhenFinished=_shouldStopWhenFinished - In the implementation block
-(long long)clientCount;
-(void)setClientCount:(long long)arg1 ;
-(id)initWithICLeaseSession:(id)arg1 ;
-(ICSuzeLeaseSession *)icLeaseSession;
-(MPCSuzeLeaseSession *)mpcLeaseSession;
-(BOOL)shouldStopWhenFinished;
-(void)setShouldStopWhenFinished:(BOOL)arg1 ;
@end

