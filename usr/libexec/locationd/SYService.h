/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:45 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <locationd/locationd-Structs.h>
@interface SYService : NSObject {

	BOOL _changesAvailable;
	BOOL _suspended;
	long long _sessionStalenessInterval;

}

@property (assign,nonatomic) BOOL changesAvailable;                           //@synthesize changesAvailable=_changesAvailable - In the implementation block
@property (assign,nonatomic) BOOL suspended;                                  //@synthesize suspended=_suspended - In the implementation block
@property (assign,nonatomic) long long sessionStalenessInterval;              //@synthesize sessionStalenessInterval=_sessionStalenessInterval - In the implementation block
-(void)setSuspended:(BOOL)arg1 ;
-(void)suspend;
-(BOOL)suspended;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)resume:(id*)arg1 ;
-(id)initWithService:(id)arg1 priority:(long long)arg2 asMasterStore:(BOOL)arg3 options:(NSDictionary*)arg4 ;
-(void)setSessionStalenessInterval:(long long)arg1 ;
-(void)setHasChangesAvailable;
-(void)setChangesAvailable:(BOOL)arg1 ;
-(BOOL)changesAvailable;
-(long long)sessionStalenessInterval;
@end

