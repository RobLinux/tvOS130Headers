/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface DMMigrationDeferredExitManager : NSObject
+(id)_serialQueue;
-(id)_deferralDuration;
-(void)_exitClean;
-(void)migrationDidStart;
-(void)migrationDidEnd;
-(void)deferExitWithConnection:(id)arg1 ;
-(void)cancelDeferredExitWithConnection:(id)arg1 ;
-(void)_resetGlobalState;
-(BOOL)_isDeferringExit;
@end
