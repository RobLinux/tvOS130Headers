/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class DaemonDatabase;

@interface AgentFactory : NSObject {

	DaemonDatabase* _database;

}
-(id)initWithDatabase:(id)arg1 ;
-(id)createAgentForPID:(long long)arg1 supervisor:(id)arg2 ;
-(id)createAgentsForPIDs:(id)arg1 supervisor:(id)arg2 ;
-(id)currentStateForPID:(long long)arg1 ;
-(void)currentStatesForPIDs:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

